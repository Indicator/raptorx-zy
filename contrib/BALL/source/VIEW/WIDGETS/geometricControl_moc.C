/****************************************************************************
** Meta object code from reading C++ file 'geometricControl.h'
**
** Created: Wed Mar 19 14:28:50 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/WIDGETS/geometricControl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'geometricControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__GeometricControl[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x0a,
      53,   29,   29,   29, 0x0a,
      88,   67,   29,   29, 0x0a,
     133,   29,   29,   29, 0x0a,
     151,   29,   29,   29, 0x0a,
     159,   29,   29,   29, 0x0a,
     175,   29,   29,   29, 0x0a,
     197,   29,   29,   29, 0x0a,
     217,   29,   29,   29, 0x0a,
     239,   29,   29,   29, 0x0a,
     259,   29,   29,   29, 0x0a,
     279,   29,   29,   29, 0x0a,
     299,   29,   29,   29, 0x0a,
     323,   29,   29,   29, 0x0a,
     351,   29,   29,   29, 0x0a,
     376,   29,   29,   29, 0x0a,
     388,   29,   29,   29, 0x0a,
     402,   29,   29,   29, 0x0a,
     444,   29,  416,   29, 0x0a,
     469,   29,   29,   29, 0x09,
     497,  493,   29,   29, 0x09,
     536,   29,   29,   29, 0x09,
     566,  557,   29,   29, 0x09,
     606,  602,   29,   29, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__GeometricControl[] = {
    "BALL::VIEW::GeometricControl\0\0"
    "renameRepresentation()\0selectAtoms()\0"
    "representation,state\0"
    "selectedRepresentation(Representation&,bool)\0"
    "updateSelection()\0focus()\0enterMoveMode()\0"
    "flipClippingCapping()\0flipClippingPlane()\0"
    "setClippingPosition()\0setClippingPlaneX()\0"
    "setClippingPlaneY()\0setClippingPlaneZ()\0"
    "hideShowClippingPlane()\0"
    "selectClipRepresentations()\0"
    "createNewClippingPlane()\0duplicate()\0"
    "saveSurface()\0loadSurface()\0"
    "ModifyRepresentationDialog*\0"
    "getModifySurfaceDialog()\0"
    "modifyRepresentation_()\0rep\0"
    "generateListViewItem_(Representation&)\0"
    "deleteCurrentItems()\0item,col\0"
    "onItemClicked(QTreeWidgetItem*,int)\0"
    "pos\0showGuestContextMenu(QPoint)\0"
};

const QMetaObject BALL::VIEW::GeometricControl::staticMetaObject = {
    { &GenericControl::staticMetaObject, qt_meta_stringdata_BALL__VIEW__GeometricControl,
      qt_meta_data_BALL__VIEW__GeometricControl, 0 }
};

const QMetaObject *BALL::VIEW::GeometricControl::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::GeometricControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__GeometricControl))
	return static_cast<void*>(const_cast<GeometricControl*>(this));
    return GenericControl::qt_metacast(_clname);
}

int BALL::VIEW::GeometricControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GenericControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: renameRepresentation(); break;
        case 1: selectAtoms(); break;
        case 2: selectedRepresentation((*reinterpret_cast< Representation(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: updateSelection(); break;
        case 4: focus(); break;
        case 5: enterMoveMode(); break;
        case 6: flipClippingCapping(); break;
        case 7: flipClippingPlane(); break;
        case 8: setClippingPosition(); break;
        case 9: setClippingPlaneX(); break;
        case 10: setClippingPlaneY(); break;
        case 11: setClippingPlaneZ(); break;
        case 12: hideShowClippingPlane(); break;
        case 13: selectClipRepresentations(); break;
        case 14: createNewClippingPlane(); break;
        case 15: duplicate(); break;
        case 16: saveSurface(); break;
        case 17: loadSurface(); break;
        case 18: { ModifyRepresentationDialog* _r = getModifySurfaceDialog();
            if (_a[0]) *reinterpret_cast< ModifyRepresentationDialog**>(_a[0]) = _r; }  break;
        case 19: modifyRepresentation_(); break;
        case 20: generateListViewItem_((*reinterpret_cast< Representation(*)>(_a[1]))); break;
        case 21: deleteCurrentItems(); break;
        case 22: onItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: showGuestContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        }
        _id -= 24;
    }
    return _id;
}
