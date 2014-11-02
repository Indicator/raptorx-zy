/****************************************************************************
** Meta object code from reading C++ file 'scene.h'
**
** Created: Wed Mar 19 14:28:50 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/WIDGETS/scene.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__Scene[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      44,   18,   18,   18, 0x0a,
      84,   18,   77,   18, 0x0a,
      96,   18,   18,   18, 0x0a,
     111,   18,   18,   18, 0x0a,
     130,   18,   18,   18, 0x0a,
     143,   18,   18,   18, 0x0a,
     165,   18,   18,   18, 0x0a,
     194,  188,   18,   18, 0x0a,
     211,   18,   18,   18, 0x0a,
     230,   18,   18,   18, 0x0a,
     243,   18,   18,   18, 0x0a,
     263,   18,   18,   18, 0x0a,
     281,   18,   18,   18, 0x0a,
     306,   18,   18,   18, 0x0a,
     323,   18,   18,   18, 0x0a,
     339,   18,   18,   18, 0x0a,
     358,   18,   18,   18, 0x0a,
     375,   18,   18,   18, 0x0a,
     387,   18,   18,   18, 0x0a,
     405,   18,   18,   18, 0x0a,
     436,   18,   18,   18, 0x0a,
     453,   18,   18,   18, 0x0a,
     472,   18,   18,   18, 0x09,
     486,   18,   18,   18, 0x09,
     501,   18,   18,   18, 0x09,
     513,   18,   18,   18, 0x09,
     530,   18,   18,   18, 0x09,
     546,   18,   18,   18, 0x09,
     561,   18,   18,   18, 0x09,
     579,  577,   18,   18, 0x09,
     602,  577,   18,   18, 0x09,
     635,   18,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__Scene[] = {
    "BALL::VIEW::Scene\0\0createCoordinateSystem()\0"
    "createCoordinateSystemAtOrigin()\0"
    "String\0exportPNG()\0exportPOVRay()\0"
    "exportNextPOVRay()\0printScene()\0"
    "showExportPNGDialog()\0showExportVRMLDialog()\0"
    "state\0setPreview(bool)\0switchShowWidget()\0"
    "exitStereo()\0enterActiveStereo()\0"
    "enterDualStereo()\0clearRecordedAnimation()\0"
    "startAnimation()\0stopAnimation()\0"
    "switchToLastMode()\0switchShowGrid()\0"
    "showInfos()\0setupViewVolume()\0"
    "disableViewVolumeRestriction()\0"
    "storeViewPoint()\0restoreViewPoint()\0"
    "rotateMode_()\0pickingMode_()\0moveMode_()\0"
    "showViewPoint_()\0setViewPoint_()\0"
    "resetCamera_()\0updateCamera_()\0e\0"
    "dropEvent(QDropEvent*)\0"
    "dragEnterEvent(QDragEnterEvent*)\0"
    "dummySlot()\0"
};

const QMetaObject BALL::VIEW::Scene::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_BALL__VIEW__Scene,
      qt_meta_data_BALL__VIEW__Scene, 0 }
};

const QMetaObject *BALL::VIEW::Scene::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::Scene::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__Scene))
	return static_cast<void*>(const_cast<Scene*>(this));
    if (!strcmp(_clname, "ModularWidget"))
	return static_cast<ModularWidget*>(const_cast<Scene*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int BALL::VIEW::Scene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: createCoordinateSystem(); break;
        case 1: createCoordinateSystemAtOrigin(); break;
        case 2: { String _r = exportPNG();
            if (_a[0]) *reinterpret_cast< String*>(_a[0]) = _r; }  break;
        case 3: exportPOVRay(); break;
        case 4: exportNextPOVRay(); break;
        case 5: printScene(); break;
        case 6: showExportPNGDialog(); break;
        case 7: showExportVRMLDialog(); break;
        case 8: setPreview((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: switchShowWidget(); break;
        case 10: exitStereo(); break;
        case 11: enterActiveStereo(); break;
        case 12: enterDualStereo(); break;
        case 13: clearRecordedAnimation(); break;
        case 14: startAnimation(); break;
        case 15: stopAnimation(); break;
        case 16: switchToLastMode(); break;
        case 17: switchShowGrid(); break;
        case 18: showInfos(); break;
        case 19: setupViewVolume(); break;
        case 20: disableViewVolumeRestriction(); break;
        case 21: storeViewPoint(); break;
        case 22: restoreViewPoint(); break;
        case 23: rotateMode_(); break;
        case 24: pickingMode_(); break;
        case 25: moveMode_(); break;
        case 26: showViewPoint_(); break;
        case 27: setViewPoint_(); break;
        case 28: resetCamera_(); break;
        case 29: updateCamera_(); break;
        case 30: dropEvent((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 31: dragEnterEvent((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        case 32: dummySlot(); break;
        }
        _id -= 33;
    }
    return _id;
}
