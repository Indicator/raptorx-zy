// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: scene.sip,v 1.5.18.1 2007-03-25 21:38:52 oliver Exp $
//

class Scene 
  : Embeddable
{
%TypeHeaderCode
	#include <BALL/VIEW/WIDGETS/scene.h>
	using namespace BALL;
	using namespace BALL::VIEW;
%End
  public:
//  void dump(std::ostream& s = std::cout, Size depth = 0) const throw();
//  BALL_EMBEDDABLE(Scene,);

// methods implemented by the BALL_EMBEDDED macro
static Size countInstances();
static Scene* getInstance(Position /index/);

  Scene() throw();
//  Scene(QWidget*, const char*, WFlags);
  Scene(const Scene&);
//  const Scene& operator =  (const Scene&) throw();
//  void fetchPreferences(INIFile&) throw();
//  void finalizePreferencesTab(Preferences &preferences) throw();
//  void finalizeWidget(MainControl&) throw();
//  void initializePreferencesTab(Preferences &preferences) throw();
//  void initializeWidget(MainControl&) throw();
//  void set(const Scene&) throw();
  ~Scene() throw();

	void update(bool rebuild_displaylists = false) throw();
	virtual void onNotify(Message*) throw();
	virtual bool exportScene(Renderer&) const throw();
	virtual void initializeWidget(MainControl&) throw();
	virtual void fetchPreferences(INIFile&) throw();
	virtual void writePreferences(INIFile&) throw();
	virtual void checkMenu(MainControl&) throw();
	virtual bool isValid() const throw();
//	virtual void dump(std::ostream& = std::cout, Size = 0) const throw();
	Stage* getStage() throw();
//	const Stage* getStage() const throw();
	void setCamera(const Camera&) throw();
//	List<Camera>& getAnimationPoints() throw();
	static void setAnimationSmoothness(float) throw();
	static float getAnimationSmoothness() throw();
	void setDefaultLighting(bool /*update_GL*/ = true) throw();
	void initializePreferencesTab(Preferences&) throw();
	void finalizePreferencesTab(Preferences&) throw();
	virtual void applyPreferences() throw();

//	static void setMouseSensitivity(float sensitivity) throw();
//	static float getMouseSensitivity() throw();
//	static void setMouseWheelSensitivity(float sensitivity) throw();
//	static float getMouseWheelSensitivity() throw();
	
//	static void setShowLightSources(bool state) throw();
//	static bool showLightSourcesEnabled() throw();
//	GLRenderer& getGLRenderer() throw();
//	static bool stereoBufferSupportTest();
	float getMousePositionX();
	float getMousePositionY();
	bool exportPNG(const String&);
	virtual void setWidgetVisible(bool);
	void setOffScreenRendering(bool, Size);
//	virtual void keyPressEvent(QKeyEvent*);
//	virtual void mouseDoubleClickEvent(QMouseEvent*);
//	ModeType getMode() const throw();
//	virtual void setMode(ModeType) throw();
//	static void setScreenShotNumber(Position pos);
//	static void setPOVNumber(Position pos);
	void rotate(float /*degree_right*/, float /*degree_up*/);
	void rotateClockwise(float /*degree*/);
	void move(Vector3);
	void moveComposites(PyCompositeList, Vector3);
	void rotateComposites(PyCompositeList, float /*degree_right*/, float /*degree_up*/, float de/*gree_clockwise*/ = 0);
	bool isAnimationRunning() const throw();
	void setTurnPoint(const Vector3&);
	const Vector3& getTurnPoint() const;
	void setFullScreen(bool);
	void setFPSEnabled(bool);
	void showText(const String&, Size /*font_size*/ = 20);
//	virtual void addToolBarEntries(QToolBar*);

	public slots:

	void createCoordinateSystem() throw();
	void createCoordinateSystemAtOrigin() throw();
	String exportPNG();
	void exportPOVRay();
	void exportNextPOVRay();
	void printScene();
	void showExportPNGDialog();
	void showExportVRMLDialog();
	virtual void switchShowWidget() throw();
	void exitStereo() throw();
	void enterActiveStereo() throw();
	void enterDualStereo() throw();
	void clearRecordedAnimation() throw();
	void startAnimation() throw();
	void stopAnimation() throw();
	void switchToLastMode() throw();
	void switchShowGrid();
	void showInfos();
	void setupViewVolume();
	void disableViewVolumeRestriction();
};
