/****************************************************************************
** Meta object code from reading C++ file 'preferences.h'
**
** Created: Wed Mar 19 14:28:20 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/preferences.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preferences.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__Preferences[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x0a,
      37,   32,   24,   24, 0x0a,
      57,   24,   24,   24, 0x0a,
      73,   24,   24,   24, 0x0a,
      92,   24,   24,   24, 0x0a,
     112,   24,   24,   24, 0x0a,
     131,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__Preferences[] = {
    "BALL::VIEW::Preferences\0\0show()\0page\0"
    "showEntry(QWidget*)\0entrySelected()\0"
    "setDefaultValues()\0cancelPreferences()\0"
    "applyPreferences()\0showHelp()\0"
};

const QMetaObject BALL::VIEW::Preferences::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__Preferences,
      qt_meta_data_BALL__VIEW__Preferences, 0 }
};

const QMetaObject *BALL::VIEW::Preferences::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::Preferences::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__Preferences))
	return static_cast<void*>(const_cast<Preferences*>(this));
    if (!strcmp(_clname, "Ui_PreferencesData"))
	return static_cast<Ui_PreferencesData*>(const_cast<Preferences*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::Preferences::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: show(); break;
        case 1: showEntry((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: entrySelected(); break;
        case 3: setDefaultValues(); break;
        case 4: cancelPreferences(); break;
        case 5: applyPreferences(); break;
        case 6: showHelp(); break;
        }
        _id -= 7;
    }
    return _id;
}
