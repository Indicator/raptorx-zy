/****************************************************************************
** Meta object code from reading C++ file 'geometricFitDialog.h'
**
** Created: Wed Mar 19 14:28:20 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/geometricFitDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'geometricFitDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__GeometricFitDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      32,   31,   31,   31, 0x0a,
      39,   31,   31,   31, 0x0a,
      47,   31,   31,   31, 0x0a,
      56,   31,   31,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__GeometricFitDialog[] = {
    "BALL::VIEW::GeometricFitDialog\0\0show()\0"
    "reset()\0reject()\0accept()\0"
};

const QMetaObject BALL::VIEW::GeometricFitDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__GeometricFitDialog,
      qt_meta_data_BALL__VIEW__GeometricFitDialog, 0 }
};

const QMetaObject *BALL::VIEW::GeometricFitDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::GeometricFitDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__GeometricFitDialog))
	return static_cast<void*>(const_cast<GeometricFitDialog*>(this));
    if (!strcmp(_clname, "Ui_GeometricFitDialogData"))
	return static_cast<Ui_GeometricFitDialogData*>(const_cast<GeometricFitDialog*>(this));
    if (!strcmp(_clname, "PreferencesEntry"))
	return static_cast<PreferencesEntry*>(const_cast<GeometricFitDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::GeometricFitDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: show(); break;
        case 1: reset(); break;
        case 2: reject(); break;
        case 3: accept(); break;
        }
        _id -= 4;
    }
    return _id;
}
