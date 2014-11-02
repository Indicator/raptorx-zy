/****************************************************************************
** Meta object code from reading C++ file 'MMFF94ConfigurationDialog.h'
**
** Created: Wed Mar 19 14:28:19 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/MMFF94ConfigurationDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MMFF94ConfigurationDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__MMFF94ConfigurationDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      39,   38,   38,   38, 0x0a,
      54,   38,   38,   38, 0x0a,
      63,   38,   38,   38, 0x0a,
      77,   72,   38,   38, 0x0a,
      94,   38,   38,   38, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__MMFF94ConfigurationDialog[] = {
    "BALL::VIEW::MMFF94ConfigurationDialog\0"
    "\0resetOptions()\0accept()\0reject()\0"
    "mmff\0applyTo(MMFF94&)\0browseParameterFiles()\0"
};

const QMetaObject BALL::VIEW::MMFF94ConfigurationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__MMFF94ConfigurationDialog,
      qt_meta_data_BALL__VIEW__MMFF94ConfigurationDialog, 0 }
};

const QMetaObject *BALL::VIEW::MMFF94ConfigurationDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::MMFF94ConfigurationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__MMFF94ConfigurationDialog))
	return static_cast<void*>(const_cast<MMFF94ConfigurationDialog*>(this));
    if (!strcmp(_clname, "Ui_MMFF94ConfigurationDialogData"))
	return static_cast<Ui_MMFF94ConfigurationDialogData*>(const_cast<MMFF94ConfigurationDialog*>(this));
    if (!strcmp(_clname, "PreferencesEntry"))
	return static_cast<PreferencesEntry*>(const_cast<MMFF94ConfigurationDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::MMFF94ConfigurationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: resetOptions(); break;
        case 1: accept(); break;
        case 2: reject(); break;
        case 3: applyTo((*reinterpret_cast< MMFF94(*)>(_a[1]))); break;
        case 4: browseParameterFiles(); break;
        }
        _id -= 5;
    }
    return _id;
}
