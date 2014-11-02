// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
#ifndef BALL_VIEW_DIALOGS_PYTHONSETTINGS_H
#define BALL_VIEW_DIALOGS_PYTHONSETTINGS_H

#include <BALL/VIEW/UIC/pythonSettingsData.h>

#ifndef BALL_VIEW_KERNEL_PREFERENCESENTRY
# include <BALL/VIEW/KERNEL/preferencesEntry.h>
#endif

#ifndef BALL_VIEW_WIDGETS_PYWIDGET_H
 #include <BALL/VIEW/WIDGETS/pyWidget.h>
#endif

#include <QtGui/QTableWidget>
#include <QtGui/QWidget>
#include <QtGui/QItemDelegate>
#include <QtGui/QFont>

namespace BALL
{
	namespace VIEW
	{

		class ComboBoxDelegate
			: public QItemDelegate
		{
			public:

				ComboBoxDelegate(QObject* parent = 0);

				QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
										          const QModelIndex &index) const;

				void setEditorData(QWidget *editor, const QModelIndex &index) const;
				void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const;

				void updateEditorGeometry(QWidget *editor,
																	const QStyleOptionViewItem &option, const QModelIndex &index) const;
			private:

				QStringList sl_keys_;
				QStringList sl_modifier_;
		};

		/** Class for storing Python hotkeys in a GUI table
				\ingroup ViewDialogs
		*/
		class BALL_VIEW_EXPORT HotkeyTable
			:	public QTableWidget,
				public PreferencesEntry::ExtendedPreferencesObject
		{
			Q_OBJECT

			public:

				///
				enum Modifier
				{
					NONE = 0,
					SHIFT
					// ALT // currently not working!
				};

				///
				HotkeyTable(QWidget* parent = 0, const char* name = "PythonSettings")
					throw();
				
				///
				virtual bool getValue(String& value) const;

				///
				virtual bool setValue(const String& value);

				///
				List<Hotkey> getContent() const
					throw();

				///
				void setContent(const List<Hotkey>& hotkeys)
					throw();

				public slots:
				
				///
				virtual void addEmptyRow();
				
				///
				virtual void removeSelection();

				/** Append a hotkey
						F_key: 1-12 for the 12 F-keys
				*/
				virtual void appendHotkey(const String& modif, const String& F_key, 
																	const String& command, String comment = "");
				
			private:

//   				bool edit (const QModelIndex & index, EditTrigger trigger, QEvent* event);
				QStringList modifier_, keys_;
				ComboBoxDelegate delegate_;
		};


		/** Dialog for setting the Python preferences.
		 		Currently only a startup script can be selected, that will be called,
				when the application has loaded and a PyWidget instance is added.
				\ingroup ViewDialogs
		*/
		class BALL_VIEW_EXPORT PythonSettings 
			: public QWidget,
				public Ui_PythonSettingsData,
				public PreferencesEntry
		{ 
			Q_OBJECT

			public:

			/// Constructor
			PythonSettings(QWidget* parent = 0, const char* name = 0);

			/// Destructor
			~PythonSettings() {}

			///
			QFont getEditorFont() const { return font_;}

			/// Set the filename of the startup script
			void setFilename(const String& filename)
				throw();

			/// Get the filename of the startup script
			String getFilename() const
				throw();

			///
			const List<Hotkey> getContent() const
				throw();
			
			///
			void setContent(const List<Hotkey>& hotkeys);

			///
			void writePreferenceEntries(INIFile& inifile);

			///
			void readPreferenceEntries(const INIFile& inifile);

			public slots:

			/// Open a filedialog to select the startup script
			void fileSelected();

			///
			void clearStartupScript();

			///
			virtual void rowSelected();

			///
			void selectFont();

			protected:

			HotkeyTable*  table;
			QFont 				font_;
		};
} }

#endif
