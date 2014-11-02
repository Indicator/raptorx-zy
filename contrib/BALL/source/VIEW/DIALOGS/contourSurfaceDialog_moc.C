/****************************************************************************
** Meta object code from reading C++ file 'contourSurfaceDialog.h'
**
** Created: Wed Mar 19 14:28:19 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/contourSurfaceDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contourSurfaceDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__ContourSurfaceDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      39,   33,   34,   33, 0x0a,
      46,   33,   33,   33, 0x09,
      62,   33,   33,   33, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__ContourSurfaceDialog[] = {
    "BALL::VIEW::ContourSurfaceDialog\0\0"
    "bool\0exec()\0valuesChanged()\0chooseColor()\0"
};

const QMetaObject BALL::VIEW::ContourSurfaceDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__ContourSurfaceDialog,
      qt_meta_data_BALL__VIEW__ContourSurfaceDialog, 0 }
};

const QMetaObject *BALL::VIEW::ContourSurfaceDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::ContourSurfaceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__ContourSurfaceDialog))
	return static_cast<void*>(const_cast<ContourSurfaceDialog*>(this));
    if (!strcmp(_clname, "Ui_ContourSurfaceDialogData"))
	return static_cast<Ui_ContourSurfaceDialogData*>(const_cast<ContourSurfaceDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::ContourSurfaceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = exec();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: valuesChanged(); break;
        case 2: chooseColor(); break;
        }
        _id -= 3;
    }
    return _id;
}
