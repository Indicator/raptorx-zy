/****************************************************************************
** Meta object code from reading C++ file 'dataset.h'
**
** Created: Wed Mar 19 14:28:35 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DATATYPE/dataset.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__DatasetController[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      36,   30,   31,   30, 0x0a,
      44,   30,   31,   30, 0x0a,
      51,   30,   31,   30, 0x0a,
      68,   30,   31,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__DatasetController[] = {
    "BALL::VIEW::DatasetController\0\0bool\0"
    "write()\0open()\0deleteDatasets()\0"
    "deleteDataset()\0"
};

const QMetaObject BALL::VIEW::DatasetController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BALL__VIEW__DatasetController,
      qt_meta_data_BALL__VIEW__DatasetController, 0 }
};

const QMetaObject *BALL::VIEW::DatasetController::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::DatasetController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__DatasetController))
	return static_cast<void*>(const_cast<DatasetController*>(this));
    if (!strcmp(_clname, "Embeddable"))
	return static_cast<Embeddable*>(const_cast<DatasetController*>(this));
    return QObject::qt_metacast(_clname);
}

int BALL::VIEW::DatasetController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = write();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = open();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = deleteDatasets();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = deleteDataset();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        }
        _id -= 4;
    }
    return _id;
}
