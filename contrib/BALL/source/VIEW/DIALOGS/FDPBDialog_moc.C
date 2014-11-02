/****************************************************************************
** Meta object code from reading C++ file 'FDPBDialog.h'
**
** Created: Wed Mar 19 14:28:19 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/FDPBDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FDPBDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__FDPBDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,
      44,   23,   23,   23, 0x0a,
      65,   23,   23,   23, 0x0a,
      83,   23,   23,   23, 0x0a,
     102,   23,   23,   23, 0x0a,
     118,   23,   23,   23, 0x0a,
     130,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__FDPBDialog[] = {
    "BALL::VIEW::FDPBDialog\0\0browseChargesData()\0"
    "browseChargesRules()\0browseRadiiData()\0"
    "browseRadiiRules()\0cancelPressed()\0"
    "okPressed()\0resetPressed()\0"
};

const QMetaObject BALL::VIEW::FDPBDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__FDPBDialog,
      qt_meta_data_BALL__VIEW__FDPBDialog, 0 }
};

const QMetaObject *BALL::VIEW::FDPBDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::FDPBDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__FDPBDialog))
	return static_cast<void*>(const_cast<FDPBDialog*>(this));
    if (!strcmp(_clname, "Ui_FDPBDialogData"))
	return static_cast<Ui_FDPBDialogData*>(const_cast<FDPBDialog*>(this));
    if (!strcmp(_clname, "ModularWidget"))
	return static_cast<ModularWidget*>(const_cast<FDPBDialog*>(this));
    if (!strcmp(_clname, "PreferencesEntry"))
	return static_cast<PreferencesEntry*>(const_cast<FDPBDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::FDPBDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: browseChargesData(); break;
        case 1: browseChargesRules(); break;
        case 2: browseRadiiData(); break;
        case 3: browseRadiiRules(); break;
        case 4: cancelPressed(); break;
        case 5: okPressed(); break;
        case 6: resetPressed(); break;
        }
        _id -= 7;
    }
    return _id;
}
