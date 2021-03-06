// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: mainframe.C,v 1.62.8.6 2007-06-12 05:42:24 oliver Exp $
//

#include "mainframe.h"
#include "aboutDialog.h"
#include "icons.h"
#include "demoTutorialDialog.h"

#include <BALL/CONCEPT/moleculeObjectCreator.h>
#include <BALL/VIEW/KERNEL/server.h>
#include <BALL/VIEW/RENDERING/POVRenderer.h>
#include <BALL/VIEW/RENDERING/VRMLRenderer.h>
#include <BALL/VIEW/WIDGETS/molecularStructure.h>
#include <BALL/VIEW/WIDGETS/molecularControl.h>
#include <BALL/VIEW/WIDGETS/geometricControl.h>
#include <BALL/VIEW/WIDGETS/logView.h>
#include <BALL/VIEW/WIDGETS/helpViewer.h>
#include <BALL/VIEW/WIDGETS/datasetControl.h>
#include <BALL/VIEW/WIDGETS/editableScene.h>
#include <BALL/VIEW/WIDGETS/fileObserver.h>
#include <BALL/VIEW/WIDGETS/testFramework.h>
#include <BALL/VIEW/DIALOGS/pubchemDialog.h>
#include <BALL/VIEW/DIALOGS/downloadPDBFile.h>
#include <BALL/VIEW/DIALOGS/labelDialog.h>
#include <BALL/VIEW/DIALOGS/displayProperties.h>
#include <BALL/VIEW/DIALOGS/molecularFileDialog.h>
#include <BALL/VIEW/DATATYPE/standardDatasets.h>
#ifdef BALL_PYTHON_SUPPORT
#	include <BALL/VIEW/WIDGETS/pyWidget.h>
#endif

#include <BALL/SYSTEM/path.h>
#include <BALL/KERNEL/forEach.h>
#include <BALL/COMMON/version.h>

#include <QtGui/QKeyEvent>
#include <QtGui/QTreeWidget>


using namespace std;

namespace BALL
{
	using namespace std;
	using namespace BALL::VIEW;

	Mainframe::Mainframe(QWidget* parent, const char* name)
		:	MainControl(parent, name, ".BALLView"),
			scene_(0)
	{
		#ifdef BALL_VIEW_DEBUG
		Log.error() << "new Mainframe " << this << std::endl;
		#endif

		// ---------------------
		// setup main window
		// ---------------------
		setWindowTitle("BALLView");
		setWindowIcon(QPixmap(bucky_64x64_xpm));
		// make sure submenus are the first 
		initPopupMenu(FILE_OPEN);
		initPopupMenu(EDIT);
		initPopupMenu(BUILD);
		initPopupMenu(DISPLAY);
		initPopupMenu(MOLECULARMECHANICS);
		initPopupMenu(TOOLS);
	#ifdef BALL_PYTHON_SUPPORT
		initPopupMenu(TOOLS_PYTHON);
		initPopupMenu(MainControl::USER);
	#endif
		initPopupMenu(WINDOWS);
		initPopupMenu(MACRO);

		// ---------------------
		// Logstream setup -----
		// ---------------------
//   		Log.remove(std::cout);
//   		Log.remove(std::cerr);
		setLoggingFilename("BALLView.log");
		
		// Display Menu
		insertMenuEntry(MainControl::DISPLAY, "Toggle Fullscreen", this, SLOT(toggleFullScreen()),
										Qt::ALT+Qt::Key_X);
		insertPopupMenuSeparator(DISPLAY);
		initPopupMenu(DISPLAY_VIEWPOINT);

		new MolecularFileDialog(this, "MolecularFileDialog");
		new DownloadPDBFile(		this, "DownloadPDBFile", false);
		new PubChemDialog(this, "PubChemDialog");
 		addDockWidget(Qt::LeftDockWidgetArea, new MolecularControl(this, "Structures"));
		addDockWidget(Qt::LeftDockWidgetArea, new GeometricControl(this, "Representations"));
		addDockWidget(Qt::TopDockWidgetArea,  new DatasetControl(this, "Datasets"));
		DatasetControl* dc = DatasetControl::getInstance(0);
		dc->registerController(new RegularData3DController());
		dc->registerController(new TrajectoryController());
		dc->registerController(new VectorGridController());
		dc->registerController(new DockResultController());
		
		DatasetControl::getInstance(0)->hide();

		new DemoTutorialDialog(this, "BALLViewDemo");

		HelpViewer* BALL_docu = new HelpViewer(this, "BALL Docu");
		addDockWidget(Qt::BottomDockWidgetArea, BALL_docu);
		String dirp = getDataPath() + ".." + FileSystem::PATH_SEPARATOR + "doc" + 
									FileSystem::PATH_SEPARATOR + "BALL" + FileSystem::PATH_SEPARATOR;
		BALL_docu->setBaseDirectory(dirp);
		BALL_docu->setWhatsThisEnabled(false);
		BALL_docu->setProject("BALL");
		BALL_docu->setDefaultPage("index.htm");

		addDockWidget(Qt::BottomDockWidgetArea, new HelpViewer(this, "BALLView Docu"));

		new LabelDialog(				this, "LabelDialog");
		new MolecularStructure(	this, "MolecularStructure");
 		addDockWidget(Qt::BottomDockWidgetArea, new LogView(this, "Logs"));
		addDockWidget(Qt::BottomDockWidgetArea, new FileObserver(  this, "FileObserver"));

		Scene::stereoBufferSupportTest();
		scene_ = new EditableScene(this, "3D View");
		setCentralWidget(scene_);
		setAcceptDrops(true);

		new DisplayProperties(	this, "DisplayProperties");

		// setup the VIEW server
		Server* server = new Server(this);
		// registering object generator
		MoleculeObjectCreator* object_creator = new MoleculeObjectCreator;
		server->registerObjectCreator(*object_creator);

		new TestFramework(this, "Test Framework");

		#ifdef BALL_PYTHON_SUPPORT
			addDockWidget(Qt::BottomDockWidgetArea, new PyWidget(this, "Python Interpreter"));
		#endif

		// ---------------------
		// Menus ---------------
		// ---------------------
		String hint;

		insertMenuEntry(MainControl::FILE_OPEN, "Project", this, SLOT(loadBALLViewProjectFile()));

		save_project_action_ = insertMenuEntry(MainControl::FILE, "Save Project", this, 
										SLOT(saveBALLViewProjectFile()));

			// Help-Menu -------------------------------------------------------------------
		QAction* action = 0;
		action = insertMenuEntry(MainControl::HELP, "About", this, SLOT(about()));
		setMenuHint(action, "Show informations on this version of BALLView");
		action = insertMenuEntry(MainControl::HELP, "How to cite", this, SLOT(howToCite()));
		setMenuHint(action, "Show infos on how to cite BALL and BALLView");

		stop_simulation_action_ = insertMenuEntry(MainControl::MOLECULARMECHANICS, "Abort Calculation", this, 
										SLOT(stopSimulation()), Qt::ALT+Qt::Key_C);
		stop_simulation_action_->setEnabled(false);
		insertPopupMenuSeparator(MainControl::MOLECULARMECHANICS);
		setMenuHint(stop_simulation_action_, "Abort a running simulation");
		Path path;
		String filename = path.find("graphics/stop.png");
		stop_simulation_action_->setIcon(QIcon(filename.c_str()));

		complement_selection_action_ = insertMenuEntry(MainControl::EDIT, "Toggle Selection", this, SLOT(complementSelection()));

 		qApp->installEventFilter(this);

		setStatusbarText("Ready.");
	}

	Mainframe::~Mainframe()
		throw()
	{
	}


	bool Mainframe::eventFilter(QObject* sender, QEvent* event) 
	{
		if (event->type() != QEvent::KeyPress) return false;

		QKeyEvent* e = dynamic_cast<QKeyEvent*>(event);

		if (e->key() == Qt::Key_Escape &&
				HelpViewer::getInstance(1)->isWhatsThisEnabled())
		{
			HelpViewer::getInstance(1)->exitWhatsThisMode();
		}

		QPoint point = QCursor::pos();
		QWidget* widget = qApp->widgetAt(point);
		if (widget == scene_ &&
 				qApp->focusWidget() != scene_)
		{
 			scene_->keyPressEvent(e);
			return true;
		}

		if (widget != scene_ &&
        e->key() == Qt::Key_Escape) 
		{
 			scene_->switchToLastMode();
			return true;
		}

 		if (e->key() == Qt::Key_Delete &&
				RTTI::isKindOf<QTreeWidget>(*sender))
 		{
 			deleteClicked();
			return true;
 		}

		if (e->key() == Qt::Key_Enter) 
		{
			if (composite_manager_.getNumberOfComposites() == 0) return false;

			if (getMolecularControlSelection().size() == 0)
			{
				control_selection_.push_back(*composite_manager_.begin());
			}
				
			MolecularStructure::getInstance(0)->centerCamera();
			return true;
		}

		// check all menu entries if Alt or CTRL is pressed to enable shortcuts
		if (e->key() == Qt::Key_Alt ||
				e->key() == Qt::Key_Control)				
		{
			checkMenus();
			return false;
		}

		#ifdef BALL_PYTHON_SUPPORT
 			PyWidget::getInstance(0)->reactTo(*e);
			e->accept();
		#endif

		return false;
	}

	
	void Mainframe::reset()
	{
		if (composites_locked_ || getRepresentationManager().updateRunning()) return;

		clearData();

		DisplayProperties* dp = DisplayProperties::getInstance(0);
		dp->setDrawingPrecision(DRAWING_PRECISION_HIGH);
		dp->selectModel(MODEL_STICK);
		dp->selectColoringMethod(COLORING_ELEMENT);
		dp->selectMode(DRAWING_MODE_SOLID);
		dp->setTransparency(0);
		dp->setSurfaceDrawingPrecision(6.5);
	}

	
	void Mainframe::howToCite()
	{
		HelpViewer::getInstance(1)->showHelp("tips.html", "cite");
	}

	void Mainframe::show()
	{
		// prevent multiple inserting of menu entries, by calls of showFullScreen(), ...
		if (preferences_action_ != 0) 
		{
			MainControl::show();
			return;
		}


		QToolBar* tb = new QToolBar("Main Toolbar", this);
		tb->setObjectName("Main Toolbar");
		tb->setIconSize(QSize(23,23));
		tb->layout()->setMargin(2);
		tb->layout()->setSpacing(2);
		addToolBar(Qt::TopToolBarArea, tb);
		
		MainControl::show();

		initPopupMenu(MainControl::WINDOWS)->addSeparator();
		initPopupMenu(MainControl::WINDOWS)->addAction(tb->toggleViewAction());
		MolecularFileDialog::getInstance(0)->addToolBarEntries(tb);
		DownloadPDBFile::getInstance(0)->addToolBarEntries(tb);
		PubChemDialog::getInstance(0)->addToolBarEntries(tb);
		Path path;
		
		QIcon load_icon(path.find("graphics/quickload.png").c_str());
		qload_action_ = new QAction(load_icon, "quickload", this);
		qload_action_->setObjectName("quickload");
		connect(qload_action_, SIGNAL(triggered()), this, SLOT(quickLoadConfirm()));
		HelpViewer::getInstance(1)->registerForHelpSystem(qload_action_, "tips.html#quickload");
		tb->addAction(qload_action_);

		QIcon save_icon(path.find("graphics/quicksave.png").c_str());
		qsave_action_ = new QAction(save_icon, "quicksave", this);
		qsave_action_->setObjectName("quicksave");
		connect(qsave_action_, SIGNAL(triggered()), this, SLOT(quickSave()));
		HelpViewer::getInstance(1)->registerForHelpSystem(qsave_action_, "tips.html#quickload");
		tb->addAction(qsave_action_);

		tb->addSeparator();
		DisplayProperties::getInstance(0)->addToolBarEntries(tb);
		MolecularStructure::getInstance(0)->addToolBarEntries(tb);
		scene_->addToolBarEntries(tb);
		tb->addAction(stop_simulation_action_);
		tb->addAction(preferences_action_);
		HelpViewer::getInstance(1)->addToolBarEntries(tb);
	}

	void Mainframe::about()
	{
		// Display about dialog
		QDialog w;
 		Ui_AboutDialog about;
		about.setupUi(&w);
		QString version = QString("QT ") + qVersion();
#ifdef BALL_QT_HAS_THREADS
		version += "(mt)";
#endif
		about.qt_version_label->setText(version);
		QFont font = about.BALLView_version_label->font();
		about.BALLView_version_label->setText(QString("BALLView ") + BALL_RELEASE_STRING);
		font.setPixelSize(18);
		about.BALLView_version_label->setFont(font);
		about.BALL_version_label->setText(__DATE__);
		w.exec(); 
	}

}
