/****************************************************************************
** Meta object code from reading C++ file 'fieldLinesDialog.h'
**
** Created: Wed Mar 19 14:28:19 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/fieldLinesDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fieldLinesDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__FieldLinesDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__FieldLinesDialog[] = {
    "BALL::VIEW::FieldLinesDialog\0\0accept()\0"
};

const QMetaObject BALL::VIEW::FieldLinesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__FieldLinesDialog,
      qt_meta_data_BALL__VIEW__FieldLinesDialog, 0 }
};

const QMetaObject *BALL::VIEW::FieldLinesDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::FieldLinesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__FieldLinesDialog))
	return static_cast<void*>(const_cast<FieldLinesDialog*>(this));
    if (!strcmp(_clname, "Ui::FieldLinesDialogData"))
	return static_cast<Ui::FieldLinesDialogData*>(const_cast<FieldLinesDialog*>(this));
    if (!strcmp(_clname, "FieldLineCreator"))
	return static_cast<FieldLineCreator*>(const_cast<FieldLinesDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::FieldLinesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: accept(); break;
        }
        _id -= 1;
    }
    return _id;
}
