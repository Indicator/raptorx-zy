/****************************************************************************
** Meta object code from reading C++ file 'charmmConfigurationDialog.h'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/charmmConfigurationDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'charmmConfigurationDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__CharmmConfigurationDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      39,   38,   38,   38, 0x0a,
      54,   38,   38,   38, 0x0a,
      63,   38,   38,   38, 0x0a,
      79,   72,   38,   38, 0x0a,
      98,   38,   38,   38, 0x0a,
     118,   38,   38,   38, 0x0a,
     144,   38,   38,   38, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__CharmmConfigurationDialog[] = {
    "BALL::VIEW::CharmmConfigurationDialog\0"
    "\0resetOptions()\0accept()\0reject()\0"
    "charmm\0applyTo(CharmmFF&)\0chooseSolventFile()\0"
    "periodicBoundaryClicked()\0"
    "browseParameterFiles()\0"
};

const QMetaObject BALL::VIEW::CharmmConfigurationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__CharmmConfigurationDialog,
      qt_meta_data_BALL__VIEW__CharmmConfigurationDialog, 0 }
};

const QMetaObject *BALL::VIEW::CharmmConfigurationDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::CharmmConfigurationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__CharmmConfigurationDialog))
	return static_cast<void*>(const_cast<CharmmConfigurationDialog*>(this));
    if (!strcmp(_clname, "Ui_CharmmConfigurationDialogData"))
	return static_cast<Ui_CharmmConfigurationDialogData*>(const_cast<CharmmConfigurationDialog*>(this));
    if (!strcmp(_clname, "PreferencesEntry"))
	return static_cast<PreferencesEntry*>(const_cast<CharmmConfigurationDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::CharmmConfigurationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: resetOptions(); break;
        case 1: accept(); break;
        case 2: reject(); break;
        case 3: applyTo((*reinterpret_cast< CharmmFF(*)>(_a[1]))); break;
        case 4: chooseSolventFile(); break;
        case 5: periodicBoundaryClicked(); break;
        case 6: browseParameterFiles(); break;
        }
        _id -= 7;
    }
    return _id;
}
