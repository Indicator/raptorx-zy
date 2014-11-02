/****************************************************************************
** Meta object code from reading C++ file 'amberConfigurationDialog.h'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/amberConfigurationDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'amberConfigurationDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__AmberConfigurationDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      38,   37,   37,   37, 0x0a,
      47,   37,   37,   37, 0x0a,
      56,   37,   37,   37, 0x0a,
      77,   71,   37,   37, 0x0a,
      95,   37,   37,   37, 0x0a,
     121,   37,   37,   37, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__AmberConfigurationDialog[] = {
    "BALL::VIEW::AmberConfigurationDialog\0"
    "\0accept()\0reject()\0resetOptions()\0"
    "amber\0applyTo(AmberFF&)\0"
    "periodicBoundaryClicked()\0"
    "browseParameterFiles()\0"
};

const QMetaObject BALL::VIEW::AmberConfigurationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__AmberConfigurationDialog,
      qt_meta_data_BALL__VIEW__AmberConfigurationDialog, 0 }
};

const QMetaObject *BALL::VIEW::AmberConfigurationDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::AmberConfigurationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__AmberConfigurationDialog))
	return static_cast<void*>(const_cast<AmberConfigurationDialog*>(this));
    if (!strcmp(_clname, "Ui_AmberConfigurationDialogData"))
	return static_cast<Ui_AmberConfigurationDialogData*>(const_cast<AmberConfigurationDialog*>(this));
    if (!strcmp(_clname, "PreferencesEntry"))
	return static_cast<PreferencesEntry*>(const_cast<AmberConfigurationDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::AmberConfigurationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: accept(); break;
        case 1: reject(); break;
        case 2: resetOptions(); break;
        case 3: applyTo((*reinterpret_cast< AmberFF(*)>(_a[1]))); break;
        case 4: periodicBoundaryClicked(); break;
        case 5: browseParameterFiles(); break;
        }
        _id -= 6;
    }
    return _id;
}
