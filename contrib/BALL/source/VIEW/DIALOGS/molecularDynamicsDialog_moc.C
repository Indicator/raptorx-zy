/****************************************************************************
** Meta object code from reading C++ file 'molecularDynamicsDialog.h'
**
** Created: Wed Mar 19 14:28:19 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/molecularDynamicsDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'molecularDynamicsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__MolecularDynamicsDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      37,   36,   36,   36, 0x0a,
      46,   36,   36,   36, 0x09,
      70,   36,   36,   36, 0x09,
      88,   36,   36,   36, 0x09,
     104,   36,   36,   36, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__MolecularDynamicsDialog[] = {
    "BALL::VIEW::MolecularDynamicsDialog\0"
    "\0accept()\0enableDCDFileSelected()\0"
    "advancedOptions()\0chooseDCDFile()\0"
    "timeChanged()\0"
};

const QMetaObject BALL::VIEW::MolecularDynamicsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__MolecularDynamicsDialog,
      qt_meta_data_BALL__VIEW__MolecularDynamicsDialog, 0 }
};

const QMetaObject *BALL::VIEW::MolecularDynamicsDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::MolecularDynamicsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__MolecularDynamicsDialog))
	return static_cast<void*>(const_cast<MolecularDynamicsDialog*>(this));
    if (!strcmp(_clname, "Ui_MolecularDynamicsDialogData"))
	return static_cast<Ui_MolecularDynamicsDialogData*>(const_cast<MolecularDynamicsDialog*>(this));
    if (!strcmp(_clname, "PreferencesEntry"))
	return static_cast<PreferencesEntry*>(const_cast<MolecularDynamicsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::MolecularDynamicsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: accept(); break;
        case 1: enableDCDFileSelected(); break;
        case 2: advancedOptions(); break;
        case 3: chooseDCDFile(); break;
        case 4: timeChanged(); break;
        }
        _id -= 5;
    }
    return _id;
}
