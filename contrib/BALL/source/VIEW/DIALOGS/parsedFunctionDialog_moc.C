/****************************************************************************
** Meta object code from reading C++ file 'parsedFunctionDialog.h'
**
** Created: Wed Mar 19 14:28:19 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/parsedFunctionDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parsedFunctionDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__ParsedFunctionDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__ParsedFunctionDialog[] = {
    "BALL::VIEW::ParsedFunctionDialog\0"
};

const QMetaObject BALL::VIEW::ParsedFunctionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__ParsedFunctionDialog,
      qt_meta_data_BALL__VIEW__ParsedFunctionDialog, 0 }
};

const QMetaObject *BALL::VIEW::ParsedFunctionDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::ParsedFunctionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__ParsedFunctionDialog))
	return static_cast<void*>(const_cast<ParsedFunctionDialog*>(this));
    if (!strcmp(_clname, "Ui_ParsedFunctionDialogData"))
	return static_cast<Ui_ParsedFunctionDialogData*>(const_cast<ParsedFunctionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::ParsedFunctionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
