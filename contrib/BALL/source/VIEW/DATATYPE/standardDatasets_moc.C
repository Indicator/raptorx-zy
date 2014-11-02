/****************************************************************************
** Meta object code from reading C++ file 'standardDatasets.h'
**
** Created: Wed Mar 19 14:28:35 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DATATYPE/standardDatasets.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'standardDatasets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__RegularData3DController[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      42,   36,   37,   36, 0x0a,
      61,   36,   36,   36, 0x0a,
      88,   36,   36,   36, 0x0a,
     101,   36,   36,   36, 0x0a,
     123,   36,   36,   36, 0x0a,
     139,   36,   36,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__RegularData3DController[] = {
    "BALL::VIEW::RegularData3DController\0"
    "\0bool\0createVectorGrid()\0"
    "computeIsoContourSurface()\0resizeGrid()\0"
    "createHistogramGrid()\0visualizeGrid()\0"
    "createSphere()\0"
};

const QMetaObject BALL::VIEW::RegularData3DController::staticMetaObject = {
    { &DatasetController::staticMetaObject, qt_meta_stringdata_BALL__VIEW__RegularData3DController,
      qt_meta_data_BALL__VIEW__RegularData3DController, 0 }
};

const QMetaObject *BALL::VIEW::RegularData3DController::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::RegularData3DController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__RegularData3DController))
	return static_cast<void*>(const_cast<RegularData3DController*>(this));
    return DatasetController::qt_metacast(_clname);
}

int BALL::VIEW::RegularData3DController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DatasetController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = createVectorGrid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: computeIsoContourSurface(); break;
        case 2: resizeGrid(); break;
        case 3: createHistogramGrid(); break;
        case 4: visualizeGrid(); break;
        case 5: createSphere(); break;
        }
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_BALL__VIEW__TrajectoryController[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      39,   33,   34,   33, 0x0a,
      61,   33,   34,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__TrajectoryController[] = {
    "BALL::VIEW::TrajectoryController\0\0"
    "bool\0visualizeTrajectory()\0"
    "bufferTrajectory()\0"
};

const QMetaObject BALL::VIEW::TrajectoryController::staticMetaObject = {
    { &DatasetController::staticMetaObject, qt_meta_stringdata_BALL__VIEW__TrajectoryController,
      qt_meta_data_BALL__VIEW__TrajectoryController, 0 }
};

const QMetaObject *BALL::VIEW::TrajectoryController::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::TrajectoryController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__TrajectoryController))
	return static_cast<void*>(const_cast<TrajectoryController*>(this));
    return DatasetController::qt_metacast(_clname);
}

int BALL::VIEW::TrajectoryController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DatasetController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = visualizeTrajectory();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = bufferTrajectory();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_BALL__VIEW__DockResultController[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x0a,
      56,   33,   51,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__DockResultController[] = {
    "BALL::VIEW::DockResultController\0\0"
    "showDockResult()\0bool\0saveDockTrajectory()\0"
};

const QMetaObject BALL::VIEW::DockResultController::staticMetaObject = {
    { &DatasetController::staticMetaObject, qt_meta_stringdata_BALL__VIEW__DockResultController,
      qt_meta_data_BALL__VIEW__DockResultController, 0 }
};

const QMetaObject *BALL::VIEW::DockResultController::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::DockResultController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__DockResultController))
	return static_cast<void*>(const_cast<DockResultController*>(this));
    return DatasetController::qt_metacast(_clname);
}

int BALL::VIEW::DockResultController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DatasetController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showDockResult(); break;
        case 1: { bool _r = saveDockTrajectory();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_BALL__VIEW__VectorGridController[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      39,   33,   34,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__VectorGridController[] = {
    "BALL::VIEW::VectorGridController\0\0"
    "bool\0visualizeFieldLines()\0"
};

const QMetaObject BALL::VIEW::VectorGridController::staticMetaObject = {
    { &DatasetController::staticMetaObject, qt_meta_stringdata_BALL__VIEW__VectorGridController,
      qt_meta_data_BALL__VIEW__VectorGridController, 0 }
};

const QMetaObject *BALL::VIEW::VectorGridController::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::VectorGridController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__VectorGridController))
	return static_cast<void*>(const_cast<VectorGridController*>(this));
    return DatasetController::qt_metacast(_clname);
}

int BALL::VIEW::VectorGridController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DatasetController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = visualizeFieldLines();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        }
        _id -= 1;
    }
    return _id;
}
