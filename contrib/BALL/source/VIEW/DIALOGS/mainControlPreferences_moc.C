/****************************************************************************
** Meta object code from reading C++ file 'mainControlPreferences.h'
**
** Created: Wed Mar 19 14:28:19 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/mainControlPreferences.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainControlPreferences.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__MainControlPreferences[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      36,   35,   35,   35, 0x0a,
      54,   49,   35,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__MainControlPreferences[] = {
    "BALL::VIEW::MainControlPreferences\0\0"
    "selectFont()\0font\0setFont(QFont)\0"
};

const QMetaObject BALL::VIEW::MainControlPreferences::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BALL__VIEW__MainControlPreferences,
      qt_meta_data_BALL__VIEW__MainControlPreferences, 0 }
};

const QMetaObject *BALL::VIEW::MainControlPreferences::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::MainControlPreferences::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__MainControlPreferences))
	return static_cast<void*>(const_cast<MainControlPreferences*>(this));
    if (!strcmp(_clname, "Ui_MainControlPreferencesData"))
	return static_cast<Ui_MainControlPreferencesData*>(const_cast<MainControlPreferences*>(this));
    if (!strcmp(_clname, "PreferencesEntry"))
	return static_cast<PreferencesEntry*>(const_cast<MainControlPreferences*>(this));
    return QWidget::qt_metacast(_clname);
}

int BALL::VIEW::MainControlPreferences::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selectFont(); break;
        case 1: setFont((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        }
        _id -= 2;
    }
    return _id;
}
