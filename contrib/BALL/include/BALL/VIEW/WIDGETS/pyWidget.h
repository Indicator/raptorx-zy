// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: pyWidget.h,v 1.27.16.2 2007-05-13 15:35:31 amoll Exp $
//

#ifndef BALL_VIEW_WIDGETS_PYWIDGET_H
#define BALL_VIEW_WIDGETS_PYWIDGET_H

#ifndef BALL_COMMON_H
#	include <BALL/common.h>
#endif

#ifndef BALL_DATATYPE_STRING_H
#	include <BALL/DATATYPE/string.h>
#endif

#ifndef BALL_VIEW_WIDGETS_DOCKWIDGET_H
#	include <BALL/VIEW/WIDGETS/dockWidget.h>
#endif

#include <QtGui/QTextEdit>
#include <QtGui/QDragEnterEvent>
#include <QtGui/QKeyEvent>
#include <QtGui/QDropEvent>
#include <QtGui/QLineEdit>
#include <QtGui/QComboBox>
#include <QtGui/QTabWidget>
#include <QtGui/QSyntaxHighlighter>
#include <QtCore/QStringList>

#include <QtCore/qthread.h>

// currently doesnt work right
#undef BALL_QT_HAS_THREADS

namespace BALL
{
	namespace VIEW
	{

class PythonSettings;
class Preferences;

class RunPythonThread;

/** Class for syntax highlighting of Python code.
		\ingroup ViewWidgets
*/
class BALL_VIEW_EXPORT PythonHighlighter
	: public QSyntaxHighlighter
{
	public:

	PythonHighlighter();

	~PythonHighlighter() {};

	void compilePattern();
	void highlightBlock(const QString& text);

	QStringList python_keywords;
	QStringList BALL_keywords;
	QTextCharFormat my_class_format;
	QTextCharFormat python_format;
	QTextCharFormat string_format;
	QTextCharFormat comment_format;
	vector<QRegExp> python_patterns;
	vector<QRegExp> BALL_patterns;
	QRegExp 				string_pattern;
	QRegExp 				comment_pattern;
};

class BALL_VIEW_EXPORT RunPythonThread
	: public QThread
{
	public:
		RunPythonThread()
			throw();

		///
		virtual void run();

		bool state;
		String input;
		String output;
};

///
struct BALL_VIEW_EXPORT Hotkey
{
	public:

	static Hotkey createHotkey(String modifier, String key, String command, 
														 bool& ok, String comment = "");

	///
	bool operator == (const Hotkey& hotkey) const
		throw();

	///
	bool operator == (const QKeyEvent& e) const
		throw();

	/// 
	const Hotkey& operator = (const Hotkey& s)
		throw();

	/// Needed for MSVC
	bool operator < (const Hotkey& key) { return this < &key;}

	///
	bool set(const String& data) throw();

	///
	void get(String& data) const throw();

	String 								comment;
	String 								action;
	Qt::KeyboardModifiers button_state;
	Qt::Key 							key;
};

/** Python Widget
		This class is a Window for a Python interpreter interface.
		So it is possible to access all data in the running application in realtime with the script language.
		PyWidget also has the capablities to run a Python script from a file at startup, or on demand from the user.
		\ingroup ViewWidgets
*/
class BALL_VIEW_EXPORT PyWidget
	: public DockWidget
{
	class MyLineEdit
		: public QLineEdit
	{
		public:
			MyLineEdit(QWidget* parent)
				: QLineEdit(parent) {};

			void setPyWidget(PyWidget* pw) { pw_ = pw;}

		protected:

			virtual void keyPressEvent(QKeyEvent* event);

			PyWidget* pw_;
	};

	class MyTextEdit
		: public QTextEdit
	{
		public:
			MyTextEdit(QWidget* parent)
				: QTextEdit(parent) {};

			void setPyWidget(PyWidget* pw) { pw_ = pw;}

		protected:

			virtual void keyPressEvent(QKeyEvent* event);

			PyWidget* pw_;
	};

	friend class MyLineEdit;

	Q_OBJECT

	public:
	
	BALL_EMBEDDABLE(PyWidget, Embeddable)

	/**	@name	Constructors and Destructors
	*/
	//@{

	/** Standard constructor.
			If the widget is part of a BALL \link MainControl MainControl \endlink widget, 
			it inserts a menu entry <tt>Tools|Restart Python</tt> into the menu bar.
			\param parent the parent widget
			\param name the widget name
	*/
	PyWidget(QWidget* parent = 0, const char* name = 0)
		throw();

	/// only needed for Pyhon Interface
	PyWidget(const PyWidget& p)
		throw();

	///
	~PyWidget()
		throw();
	
	/// Is full Python support available?
	bool isValid() const 
		throw() { return valid_;}

	/**	@name	ModularWidget related methods
	*/
	//@{

	/**	Setup the menu entries.
	*/
	virtual void initializeWidget(MainControl& main_control)
		throw();

	/**	Remove menu entries.
	*/
	virtual void finalizeWidget(MainControl& main_control)
		throw();
	
	///
	void initializePreferencesTab(Preferences &preferences)
		throw();
	
	///
	void finalizePreferencesTab(Preferences &preferences)
		throw();

	///
	virtual void applyPreferences()
		throw();
	
	/// Open a dialog to select a script
	virtual void scriptDialog(bool run = false);

	///
	bool toAbortScript() throw();

	/** Map a key to a command
	 		Modifier can be: "", Ctrl, Shift
			Key should be F2 - F12
	*/
	void map(String modifier, String key, String command, String comment = "");

	/// see above
	void unmap(String modifier, String key);

	///
	void insertHotkey(const Hotkey& hotkey) throw();

	///
	void removeHotkey(const Hotkey& hotkey) throw();

	///
	void reactTo(const QKeyEvent& e) throw();

	/** Test if this ModularWidget can handle a given file format.
	 		(Overloaded from ModularWidget)
			@param fileform short string with the file extension (e.g. PDB)
			@see openFile
	*/
	virtual bool canHandle(const String& fileformat) const;

	/** Tell this ModularWidget to open a given file.
	 		(Overloaded from ModularWidget)
			@see canHandle
	*/
	virtual bool openFile(const String& filename);

	/** Run a Python script from a given file
	 		@param is_current states wheter this file is currently loaded in the editor
	*/
	bool openFile(const String& filename, bool run, bool is_current = false) throw();

	//
	bool runString(String command);

	//
	String getCurrentLine() const;

	//
	void dump(std::ostream& s, Size depth) const
		throw();

	//
	void showClassDocu(String classname, String member);

	//
	virtual void fetchPreferences(INIFile& inifile)
		throw();
	
	//
	virtual void writePreferences(INIFile& inifile)
		throw();

	//
	void checkMenu(MainControl& main_control)
		throw();

	///
	QString getCurrentScript();

	///
	bool isInDirectMode() const;

	public slots:

	//
	void showEditContextMenu(const QPoint& point);

	//
	void showContextMenu(const QPoint& point);

	//
	void showCompletion();

	//
	void clear() throw();

	//
	void exportHistory();

	//
	void abortScript();

	// Show the docu for the current line
	void showDocumentation();

	///
	bool runCurrentScript();

	///
	void loadScript();
	
	///
	void execScript();

	///
	void saveScript();

	///
	void clearScript();

	virtual void hotkeyItem();

	virtual void modifyHotkeys();

	void appendText(const String& text, bool output = false, bool state_message = false);

	bool getMembers(const String& classname, QStringList& sl, const String& prefix);

	protected slots:

	virtual bool returnPressed();

	virtual bool completionSelected_();

	virtual void showHelp_();

	virtual void printCursorPosition_();

	virtual void createScript_();

	virtual void clearHistory_();

	protected:

	bool getClassAndMember_(String toc);

	void setError_(bool state);

	/** Start the interpreter.
			This method initializes the interpreter if it is not yet running. 
			An already running interpreter is reinitialized.
			This method calls <tt>PyInitialize()</tt> to create an interpreter.
	*/
	virtual void startInterpreter();

	virtual void paste();

	/// Parse a and execute a given string. If silent_ is set to true, no prompts are being printed.
	bool parseLine_(String line);

	void appendToHistory_(const String& line);
	
	/**	Print prompt.
			Determine the correct type of prompt and append it 
			to the current text. The cursor is placed after
			the prompt and <tt>textChanged</tt> is emitted.
	*/
	void newPrompt_();

	bool testMultilineStart_(const String& line);

	//_
	const char* getPrompt_() const;

	//_
	bool storeScript_();

	//_ Wrapper for multi and single threading call
	String runCommand_(const String& command, bool& state);

	void appendText_(QTextEdit* te, String text);

	/**	Replace the line the cursor is in with a line from the history.
			Used to display text from the history (cursor down/up).
			The previous content of the line is stored in
			<tt>current_line_</tt> if this is the first time the history
			function is used for this specific line.
	*/	
	void retrieveHistoryLine_(Position index);

	virtual void contentsDragEnterEvent(QDragEnterEvent* e);

	virtual void contentsDropEvent(QDropEvent* e);

	bool keyPressed(QKeyEvent* e);

	void createMenuHelpEntry_(QMenu* menu, QTextEdit* text_edit, const QPoint& point);

	void findError_(String result);

	String getCurrentWord_(QTextCursor& text_cursor);

	QComboBox* getCompletionBox_();

	List<Hotkey>::Iterator findKey_(Hotkey& hotkey);

	QTextEdit* 				text_edit_, *script_output_;
	MyTextEdit* 			script_edit_;
	QTabWidget* 			tab_widget_;
	PythonHighlighter highlighter_1_, highlighter_2_;
	MyLineEdit* 			line_edit_;
	QComboBox* 				combo_box_, *editor_combo_box_;
	List<Hotkey> 			hotkeys_;
	// 								we use an own working dir to find Python Scripts
	String 						working_dir_;
	bool 							valid_;
	bool 							started_startup_script_;
	Preferences* 			preferences_;

	Position 					current_line_;
	bool							multi_line_mode_;
	Size 							multi_lines_;
	String						multi_line_text_;
	vector<String>		history_;
	vector<bool> 			results_;
	Position					history_position_;
	String 						startup_script_;
	PythonSettings* 	python_settings_;
	RunPythonThread* 	thread_;
	bool 							stop_script_;
	Size              complete_prefix_;
	String 						class_, member_;
	Position 					intend_;
	bool 							running_;
	bool 							silent_, full_silent_;
	bool 							script_mode_;
	String 						current_script_;
};

	} // namespaces	
} // namespaces
	
#endif // BALL_VIEW_WIDGETS_PYWIDGET_H
