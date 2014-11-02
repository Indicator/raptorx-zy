/****************************************************************************
** Meta object code from reading C++ file 'editableScene.h'
**
** Created: Wed Mar 19 14:28:50 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/WIDGETS/editableScene.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editableScene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__EditableScene[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      30,   27,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
      80,   78,   26,   26, 0x0a,
     110,   78,   26,   26, 0x0a,
     139,   78,   26,   26, 0x0a,
     184,  171,   26,   26, 0x0a,
     209,   26,   26,   26, 0x0a,
     229,   26,   26,   26, 0x0a,
     253,   26,   26,   26, 0x0a,
     288,  273,   26,   26, 0x0a,
     316,   26,  312,   26, 0x0a,
     337,   26,   26,   26, 0x09,
     349,   26,   26,   26, 0x09,
     363,   26,   26,   26, 0x09,
     380,   26,   26,   26, 0x09,
     394,   26,   26,   26, 0x09,
     420,  413,   26,   26, 0x09,
     450,   26,   26,   26, 0x09,
     462,   26,   26,   26, 0x09,
     480,   26,   26,   26, 0x09,
     498,   26,   26,   26, 0x09,
     514,   26,   26,   26, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__EditableScene[] = {
    "BALL::VIEW::EditableScene\0\0eo\0"
    "newEditOperation(EditableScene::EditOperation&)\0"
    "e\0mousePressEvent(QMouseEvent*)\0"
    "mouseMoveEvent(QMouseEvent*)\0"
    "mouseReleaseEvent(QMouseEvent*)\0"
    "qmouse_event\0wheelEvent(QWheelEvent*)\0"
    "createNewMolecule()\0saturateWithHydrogens()\0"
    "optimizeStructure()\0element_number\0"
    "setEditElementType(int)\0int\0"
    "getEditElementType()\0editMode_()\0"
    "deleteAtom_()\0changeElement_()\0"
    "deleteBond_()\0changeBondOrder_()\0"
    "action\0activatedOrderItem_(QAction*)\0"
    "moveAtom_()\0atomProperties_()\0"
    "createMolecule_()\0addStructure_()\0"
    "setFormalCharge_()\0"
};

const QMetaObject BALL::VIEW::EditableScene::staticMetaObject = {
    { &Scene::staticMetaObject, qt_meta_stringdata_BALL__VIEW__EditableScene,
      qt_meta_data_BALL__VIEW__EditableScene, 0 }
};

const QMetaObject *BALL::VIEW::EditableScene::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::EditableScene::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__EditableScene))
	return static_cast<void*>(const_cast<EditableScene*>(this));
    return Scene::qt_metacast(_clname);
}

int BALL::VIEW::EditableScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Scene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: newEditOperation((*reinterpret_cast< EditableScene::EditOperation(*)>(_a[1]))); break;
        case 1: mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: wheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 5: createNewMolecule(); break;
        case 6: saturateWithHydrogens(); break;
        case 7: optimizeStructure(); break;
        case 8: setEditElementType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: { int _r = getEditElementType();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: editMode_(); break;
        case 11: deleteAtom_(); break;
        case 12: changeElement_(); break;
        case 13: deleteBond_(); break;
        case 14: changeBondOrder_(); break;
        case 15: activatedOrderItem_((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 16: moveAtom_(); break;
        case 17: atomProperties_(); break;
        case 18: createMolecule_(); break;
        case 19: addStructure_(); break;
        case 20: setFormalCharge_(); break;
        }
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void BALL::VIEW::EditableScene::newEditOperation(EditableScene::EditOperation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
