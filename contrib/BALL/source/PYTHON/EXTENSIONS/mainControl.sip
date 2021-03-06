// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: mainControl.sip,v 1.22.16.1 2007-03-25 21:37:11 oliver Exp $
//

class MainControl
//   :  QMainWindow,
//    public ConnectionObject
	: Embeddable
{
%TypeHeaderCode
	#include <BALL/VIEW/KERNEL/mainControl.h>
	using namespace BALL;
	using namespace BALL::VIEW;
%End
	// Q_OBJECT
	public:
	// typedef List<CompositeDescriptor *>::iterator DescriptorIterator;
	/*
	enum PopUpID
	{
		FILE = 10001,
		FILE_OPEN,
		FILE_IMPORT,
		FILE_EXPORT,
		EDIT = 10100,
		BUILD = 10200,
		DISPLAY = 10300,
		DISPLAY_VIEWPOINT,
		DISPLAY_STEREO,
		DISPLAY_ANIMATION,
		MOLECULARMECHANICS = 10400,
		CHOOSE_FF,
		TOOLS = 10500,
		TOOLS_CREATE_GRID,
		TOOLS_PYTHON,
		WINDOWS = 10600,
		USER = 10700,
		HELP = 10800
	};
	*/
	//MainControl(QWidget* parent = 0, const char* name = 0, String inifile = ".BALL.preferences") throw();
	MainControl(const MainControl&) throw();
	~MainControl() throw();
	virtual void clear() throw();
	void clearData() throw();

	// methods implemented by the BALL_EMBEDDED macro
	static Size countInstances();
	static MainControl* getInstance(Position /index/);

	RepresentationManager& getRepresentationManager() throw();
  CompositeManager& getCompositeManager() throw();
	bool updateRepresentationsOf(const Composite& /composite/, bool /rebuild/ = true, bool = false) throw();
	void redrawAllRepresentations(bool /rebuild_display_lists/ = false) throw();
 	
	void update(Composite& /composite/, bool /changed_hierarchy/ = true) throw();

	// we get a seg fault under windows if we use default parameters here:
	bool insert(Composite& /Transfer/, String) throw();
	bool insert(Composite& /Transfer/) throw();

	bool remove(Composite& /composite/, bool = true, bool = true) throw();

	bool update(Representation& /composite/) throw();
	bool insert(Representation& /Transfer/) throw();
	bool remove(Representation& /composite/) throw();
	 	
	Preferences* getPreferences() throw();

	INIFile& getINIFile() throw();
	// const INIFile& getINIFile() const throw();
  
	// void onNotify(Message* /message/) throw();	
	void sendMessage(Message& /Transfer/) throw();

	virtual void show();
	virtual void checkMenus();
	void stopSimulation();
	void complementSelection();	
	virtual void aboutToExit();
	//virtual void customEvent( QCustomEvent *);
	virtual void quit(int = 0);
	virtual bool isAboutToQuit();
	virtual void resize(int, int);
	void setContentSize(int, int);
	
	// static MainControl* getMainControl(const QObject* object) throw();
	// int insertMenuEntry(int /ID/, const String& /name/, const QObject* /receiver/ = 0, const char* /slot/ = 0, int /accel/ = 0, int /entry_ID/ = -1, String /hint/ = "") throw();
	// void removeMenuEntry(int /ID/, const String& /name/, const QObject* /receiver/ = 0, const char* /slot/ = 0, int /accel/ = 0, int /entry_ID/ = -1) throw();
	//virtual QPopupMenu* initPopupMenu(int /ID/) throw();
	void insertPopupMenuSeparator(int /ID/) throw();
	void applyPreferences() throw();
	void fetchPreferences(INIFile& /inifile/) throw();
	void writePreferences(INIFile& /inifile/) throw();
	void restoreWindows(const INIFile&) throw();
	void addModularWidget(ModularWidget* /widget/) throw();
	void removeModularWidget(ModularWidget* /widget/) throw();


	PyCompositeList getSelection() throw();
	//const PyCompositeList getSelection() const throw();

	PyCompositeList getMolecularControlSelection() throw();
	System* getSelectedSystem() throw();
	void selectCompositeRecursive(Composite* /composite/, bool /first_call/ = false) throw();
		void deselectCompositeRecursive(Composite* /composite/, bool /first_call/ = false) throw();
  void clearSelection() throw();
	void printSelectionInfos() throw();
	void setStatusbarText(const String&, bool = false, bool = false);
	String getStatusbarText() const	throw();
//	void setMenuHint(Index /id/, const String& /hint/) throw();
//	const String& getMenuHint(Index /id/) const throw();
	const FragmentDB& getFragmentDB() const throw();

	bool compositesAreLocked() const throw();
	bool lockCompositesFor(ModularWidget*) throw();
	bool unlockCompositesFor(ModularWidget*) throw();
	ModularWidget* getLockingWidget() throw();
	bool updateOfRepresentationRunning() throw();
	bool stopedSimulation();
	bool isBusy();
	void wait();
	//bool setSimulationThread(SimulationThread*) throw();
	//SimulationThread* getSimulationThread() throw();
	
	void setDeleteEntryEnabled(bool) throw();
	void insertDeleteEntry() throw();
	String getWorkingDir() const throw();
	void setWorkingDir(const String&) throw();
	void enableLoggingToFile() throw();
	void disableLoggingToFile() throw();
	void setLoggingFilename(const String&) throw();
	const String& getLoggingFilename() const throw();
	void setProxy(const String&, Position);
	String getProxy() const; 
	Position getProxyPort() const;
	bool useMultithreading() throw();
	void setMultithreading(bool) throw();
	// void dump(std::ostream& /s/ = std::cout, Size /depth/ = 0) const throw();
	virtual void openFile(const String&) throw();
	void saveBALLViewProjectFile(const String&);
	void loadBALLViewProjectFile(const String&) throw();
	void quickSave() const;
	void quickLoad();
	void processEvents(Size);
};
