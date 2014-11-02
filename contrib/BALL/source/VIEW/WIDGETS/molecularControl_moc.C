/****************************************************************************
** Meta object code from reading C++ file 'molecularControl.h'
**
** Created: Wed Mar 19 14:28:50 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/WIDGETS/molecularControl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'molecularControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__MolecularControl[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x0a,
      53,   29,   29,   29, 0x0a,
      75,   29,   29,   29, 0x0a,
      92,   29,   29,   29, 0x0a,
     107,   29,   29,   29, 0x0a,
     120,   29,   29,   29, 0x0a,
     135,   29,   29,   29, 0x0a,
     148,   29,   29,   29, 0x0a,
     163,   29,   29,   29, 0x0a,
     181,   29,   29,   29, 0x0a,
     212,  202,   29,   29, 0x0a,
     240,   29,   29,   29, 0x0a,
     246,   29,   29,   29, 0x0a,
     253,   29,   29,   29, 0x0a,
     261,   29,   29,   29, 0x0a,
     278,   29,   29,   29, 0x0a,
     287,   29,   29,   29, 0x0a,
     298,   29,   29,   29, 0x0a,
     310,   29,   29,   29, 0x0a,
     324,   29,   29,   29, 0x0a,
     341,   29,  336,   29, 0x0a,
     357,   29,   29,   29, 0x0a,
     376,   29,   29,   29, 0x0a,
     397,   29,   29,   29, 0x0a,
     413,   29,   29,   29, 0x0a,
     444,   29,   29,   29, 0x0a,
     463,   29,   29,   29, 0x0a,
     494,   29,   29,   29, 0x0a,
     509,   29,   29,   29, 0x0a,
     525,  521,   29,   29, 0x09,
     561,  554,   29,   29, 0x09,
     586,   29,   29,   29, 0x09,
     616,  610,   29,   29, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__MolecularControl[] = {
    "BALL::VIEW::MolecularControl\0\0"
    "createRepresentation()\0compositeProperties()\0"
    "bondProperties()\0checkResidue()\0"
    "buildBonds()\0centerCamera()\0countItems()\0"
    "showFilename()\0updateSelection()\0"
    "highlightSelection()\0composite\0"
    "highlight(List<Composite*>)\0cut()\0"
    "copy()\0paste()\0clearClipboard()\0"
    "select()\0deselect()\0moveItems()\0"
    "collapseAll()\0expandAll()\0Size\0"
    "applySelector()\0showSelectorHelp()\0"
    "deleteCurrentItems()\0clearSelector()\0"
    "switchShowSecondaryStructure()\0"
    "showAtomOverview()\0showAtomOverviewForSelection()\0"
    "showDistance()\0showAngle()\0pos\0"
    "showGuestContextMenu(QPoint)\0action\0"
    "activatedItem_(QAction*)\0"
    "createRepresentation_()\0item,\0"
    "onItemClicked(QTreeWidgetItem*,int)\0"
};

const QMetaObject BALL::VIEW::MolecularControl::staticMetaObject = {
    { &GenericControl::staticMetaObject, qt_meta_stringdata_BALL__VIEW__MolecularControl,
      qt_meta_data_BALL__VIEW__MolecularControl, 0 }
};

const QMetaObject *BALL::VIEW::MolecularControl::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::MolecularControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__MolecularControl))
	return static_cast<void*>(const_cast<MolecularControl*>(this));
    return GenericControl::qt_metacast(_clname);
}

int BALL::VIEW::MolecularControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GenericControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: createRepresentation(); break;
        case 1: compositeProperties(); break;
        case 2: bondProperties(); break;
        case 3: checkResidue(); break;
        case 4: buildBonds(); break;
        case 5: centerCamera(); break;
        case 6: countItems(); break;
        case 7: showFilename(); break;
        case 8: updateSelection(); break;
        case 9: highlightSelection(); break;
        case 10: highlight((*reinterpret_cast< const List<Composite*>(*)>(_a[1]))); break;
        case 11: cut(); break;
        case 12: copy(); break;
        case 13: paste(); break;
        case 14: clearClipboard(); break;
        case 15: select(); break;
        case 16: deselect(); break;
        case 17: moveItems(); break;
        case 18: collapseAll(); break;
        case 19: expandAll(); break;
        case 20: { Size _r = applySelector();
            if (_a[0]) *reinterpret_cast< Size*>(_a[0]) = _r; }  break;
        case 21: showSelectorHelp(); break;
        case 22: deleteCurrentItems(); break;
        case 23: clearSelector(); break;
        case 24: switchShowSecondaryStructure(); break;
        case 25: showAtomOverview(); break;
        case 26: showAtomOverviewForSelection(); break;
        case 27: showDistance(); break;
        case 28: showAngle(); break;
        case 29: showGuestContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 30: activatedItem_((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 31: createRepresentation_(); break;
        case 32: onItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        }
        _id -= 33;
    }
    return _id;
}
