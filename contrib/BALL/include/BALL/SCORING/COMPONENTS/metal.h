// $Id: metal.h,v 1.1 2005-11-21 19:27:05 anker Exp $

#ifndef BALL_MOLMEC_SLICK_CHEMSCOREMETAL_H
#define BALL_MOLMEC_SLICK_CHEMSCOREMETAL_H

#include <BALL/MOLMEC/COMMON/forceFieldComponent.h>

namespace BALL
{

	/** ChemScore Metal component
			{\bf Definition:} \URL{BALL/MOLMEC/SLICK/chemScoreMetal.h}
	*/
	class ChemScoreMetal
		:	public ForceFieldComponent
	{

		public:

		/** @name	Constructors and Destructors	
		*/
		//@{ 

		/**	Default constructor.
		*/
		ChemScoreMetal()
			throw();

		/**	Constructor.
		*/
		ChemScoreMetal(ForceField& force_field)
			throw();

		/**	Copy constructor
		*/
		ChemScoreMetal(const ChemScoreMetal& csm)
			throw();

		/**	Destructor.
		*/
		virtual ~ChemScoreMetal()
			throw();

		//@}
		/**	@name	Assignment
		*/
		//@{

		/** Assignment.
		*/
		const ChemScoreMetal& operator = (const ChemScoreMetal& csm)
			throw();

		/** Clear method.
		*/
		virtual void clear()
			throw();

		//@}
		/**	@name	Predicates.
		*/
		//@{

		bool operator == (const ChemScoreMetal& csm) const
			throw();

		//@}
		/**	@name	Setup Methods	
		*/
		//@{

		/**	Setup method.
		*/
		virtual bool setup()
			throw();

		//@}
		/**	@name	Accessors	
		*/
		//@{

		/**	Calculates and returns the component's energy.
		*/
		virtual double updateEnergy()
			throw();

		/**	Calculates and returns the component's forces.
		*/
		virtual void updateForces()
			throw();

		//@}

		private:

		/*_
		*/
		std::vector< std::pair<const Atom*, const Atom*> > possible_metal_interactions_;

		/*_
		*/
		double factor_;

		/*_ 
		*/
		double r1_;

		/*_ 
		*/
		double r2_;

	};

} // namespace BALL

#endif // BALL_MOLMEC_SLICK_CHEMSCOREMETAL_H
