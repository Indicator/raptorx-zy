#include <BALL/VIEW/WIDGETS/SDWidget.h>

#include <BALL/KERNEL/bond.h>
#include <BALL/KERNEL/PTE.h>
#include <BALL/STRUCTURE/geometricProperties.h>
#include <BALL/STRUCTURE/sdGenerator.h>

#include <QtGui/QPainter>
#include <set>

namespace BALL
{
	namespace VIEW
	{
		SDWidget::SDWidget(QWidget *parent)
			: QWidget(parent),
				resize_to_parent_(true),
				clear_(true)
		{
			setBackgroundRole(QPalette::Base);
			setAutoFillBackground(true);
		}

		SDWidget::SDWidget(const System& system, QWidget *parent, bool resize_to_parent)
			: QWidget(parent),
				resize_to_parent_(resize_to_parent),
				clear_(true)
		{
			setBackgroundRole(QPalette::Base);
			setAutoFillBackground(true);

			plot(system);
		}

		void SDWidget::plot(const System& system, bool clear, bool create_sd)
		{
			clear_ = clear;
			
			// make sure to have the same size as our parent
			if (resize_to_parent_ && parent())
				resize(((QWidget*)parent())->size());

			system_ = system;

			if (create_sd)
			{
				SDGenerator sdg;
				sdg.generateSD(system_);
			}

			update();
		}

		void SDWidget::paintEvent(QPaintEvent *)
		{
			if (clear_)
			{
				QPainter painter(this);
				painter.eraseRect(0,0,width(),height());
			}
		
			BoundingBoxProcessor bp;
			system_.apply(bp);
			Vector3 upper = bp.getUpper() + Vector3(5.,5.,5.);
			Vector3 lower = bp.getLower() - Vector3(5.,5.,5.);

			GeometricCenterProcessor gcp;
			system_.apply(gcp);
			Vector3 center = gcp.getCenter();
	
			float xscale = width()  / (upper.x - lower.x);
			float yscale = height() / (upper.y - lower.y);

			QPainter painter(this);

			QPen pen(Qt::black, 3, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin);
			painter.setPen(pen);
			painter.setRenderHint(QPainter::Antialiasing, true);
			painter.translate(width()/2, height()/2);

		  QFont newFont = font();
 		  newFont.setPixelSize(12);
			setFont(newFont);
 
			QFontMetrics fontMetrics(newFont);

			AtomIterator at_it = system_.beginAtom();
			std::set<Atom*> already_seen;
			for (; +at_it; ++at_it)
			{
				if (at_it->getElement() == PTE[Element::H]) continue;
				already_seen.insert(&(*at_it));	

				Atom::BondIterator b_it = at_it->beginBond();

				Vector3 from3d = at_it->getPosition() - center;
				QPointF from2d(from3d.x*xscale, from3d.y*yscale);

				for (; +b_it; ++b_it)
				{
					Atom* partner = b_it->getPartner(*at_it);
					
					if (
								 // treat each bond only once
								 (std::find(already_seen.begin(), already_seen.end(), partner) == already_seen.end()) 
								 // we don't draw hydrogens
							&& (partner->getElement() != PTE[Element::H])
						 )
					{
						Vector3 to3d = partner->getPosition() - center;
						QPointF to2d(to3d.x*xscale, to3d.y*yscale);
						QPointF shifted_from = from2d;

						// do we need to draw a character for the "to" atom?
						if (partner->getElement() != PTE[Element::C])
						{
							QRect br = fontMetrics.boundingRect(partner->getElement().getSymbol().c_str());
							QPointF label_pos(to2d.x() - br.width()/2, to2d.y() + br.height()/2 - 4);

							painter.drawText(label_pos, partner->getElement().getSymbol().c_str());	

							QRectF bounding_box(to2d.x() - br.width()/2  - 3, 
																	to2d.y() - br.height()/2 - 4, 
																	br.width() + 6, br.height() + 6);
							to2d = getEndpoint_(bounding_box, to2d, from2d);
						}

						// and do we need to draw a character for the "from" atom?
						if (at_it->getElement() != PTE[Element::C])
						{
							QRect br = fontMetrics.boundingRect(at_it->getElement().getSymbol().c_str());

							QRectF bounding_box(from2d.x() - br.width()/2  - 3, 
																	from2d.y() - br.height()/2 - 4, 
																	br.width() + 6, br.height() + 6);
							shifted_from = getEndpoint_(bounding_box, to2d, from2d);
						}

						// do we need to draw a double bond?
						if (b_it->getOrder() == Bond::ORDER__DOUBLE)
						{
							// compute two lines, slightly shifted wrt the normal of this line
							QLineF bond_line  = QLineF(shifted_from, to2d);
							QLineF normal     = bond_line.normalVector();
							normal = normal.unitVector();

							QPointF shift;
							shift.setX(2*(normal.p2().x() - bond_line.p1().x()));
							shift.setY(2*(normal.p2().y() - bond_line.p1().y()));

							QLineF first_line = bond_line;
							first_line.translate(shift);

							shift.setX(-1.*shift.x());
							shift.setY(-1.*shift.y());

							QLineF second_line = bond_line;
							second_line.translate(shift);

							pen.setWidth(2);
							painter.setPen(pen);
							painter.drawLine(first_line);	
							painter.drawLine(second_line);	
							pen.setWidth(3);
							painter.setPen(pen);
						}
						else if (b_it->getOrder() == Bond::ORDER__TRIPLE)
						{
							// compute two lines, slightly shifted wrt the normal of this line
							QLineF bond_line  = QLineF(shifted_from, to2d);
							QLineF normal     = bond_line.normalVector();
							normal = normal.unitVector();

							QPointF shift;
							shift.setX(3*(normal.p2().x() - bond_line.p1().x()));
							shift.setY(3*(normal.p2().y() - bond_line.p1().y()));

							QLineF first_line = bond_line;
							first_line.translate(shift);

							shift.setX(-1.*shift.x());
							shift.setY(-1.*shift.y());

							QLineF second_line = bond_line;
							second_line.translate(shift);

							pen.setWidth(2);
							painter.setPen(pen);
							painter.drawLine(first_line);	
							painter.drawLine(bond_line);
							painter.drawLine(second_line);	
							pen.setWidth(3);
							painter.setPen(pen);
						}
						else // assume it's a single bond...
							painter.drawLine(shifted_from, to2d);
					}
				}
				// do we need to draw a character for the "from" atom?
				if (at_it->getElement() != PTE[Element::C])
				{
					QRect br = fontMetrics.boundingRect(at_it->getElement().getSymbol().c_str());
					QPointF label_pos(from2d.x() - br.width()/2, from2d.y() + br.height()/2 - 4);

					painter.drawText(label_pos, at_it->getElement().getSymbol().c_str());	
				}	
			}
		}

		QPointF SDWidget::getEndpoint_(QRectF& character_boundary, QPointF from, QPointF to)
		{
			// compute all relevant lines...

			// the line from "from" to "to" :-)
			QLineF line_from_to(from, to);

			// the upper part of the box
			QLineF upper(character_boundary.topLeft(), character_boundary.topRight());
			// the right part of the box
			QLineF right(character_boundary.topRight(), character_boundary.bottomRight());
			// the lower part of the box
			QLineF lower(character_boundary.bottomRight(), character_boundary.bottomLeft());
			// and finally the left part
			QLineF left(character_boundary.bottomLeft(), character_boundary.topLeft());

			// intersect them
			QPointF result;
			QPointF intersection_point;
			if (line_from_to.intersect(upper, &intersection_point) == QLineF::BoundedIntersection)
				result = intersection_point;
			else if (line_from_to.intersect(right, &intersection_point) == QLineF::BoundedIntersection)
				result = intersection_point;
			else if (line_from_to.intersect(lower, &intersection_point) == QLineF::BoundedIntersection)
				result = intersection_point;
			else if (line_from_to.intersect(left, &intersection_point) == QLineF::BoundedIntersection)
				result = intersection_point;

			return result;
		}

		void SDWidget::clear()
		{
			clear_ = true;
			system_.clear();
			update();
		}

	}
}
