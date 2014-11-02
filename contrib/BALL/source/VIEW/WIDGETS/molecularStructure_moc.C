/****************************************************************************
** Meta object code from reading C++ file 'molecularStructure.h'
**
** Created: Wed Mar 19 14:28:50 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/WIDGETS/molecularStructure.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'molecularStructure.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__MolecularStructure[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      42,   32,   31,   31, 0x0a,
      67,   31,   31,   31, 0x2a,
      82,   31,   31,   31, 0x0a,
      95,   31,   31,   31, 0x0a,
     115,   31,  110,   31, 0x0a,
     130,   31,   31,   31, 0x0a,
     155,   31,   31,   31, 0x0a,
     186,   31,   31,   31, 0x0a,
     216,   31,   31,   31, 0x0a,
     230,   31,   31,   31, 0x0a,
     246,   31,   31,   31, 0x0a,
     261,   31,   31,   31, 0x0a,
     279,   31,   31,   31, 0x0a,
     307,   31,   31,   31, 0x0a,
     348,  335,   31,   31, 0x0a,
     370,   31,   31,   31, 0x2a,
     388,  335,   31,   31, 0x0a,
     407,   31,   31,   31, 0x2a,
     422,   31,   31,   31, 0x0a,
     451,   31,   31,   31, 0x0a,
     481,   31,   31,   31, 0x0a,
     511,   31,   31,   31, 0x0a,
     527,   31,   31,   31, 0x0a,
     544,   31,   31,   31, 0x0a,
     562,  559,   31,   31, 0x0a,
     589,   31,   31,   31, 0x0a,
     612,  607,  110,   31, 0x0a,
     632,   31,  110,   31, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__MolecularStructure[] = {
    "BALL::VIEW::MolecularStructure\0\0"
    "composite\0centerCamera(Composite*)\0"
    "centerCamera()\0buildBonds()\0addHydrogens()\0"
    "bool\0checkResidue()\0createGridFromDistance()\0"
    "createGridFromCameraDistance()\0"
    "calculateSecondaryStructure()\0"
    "mapProteins()\0calculateRMSD()\0"
    "buildPeptide()\0calculateHBonds()\0"
    "calculateRamachandranPlot()\0"
    "calculateForceFieldEnergy()\0show_dialog_\0"
    "runMinimization(bool)\0runMinimization()\0"
    "MDSimulation(bool)\0MDSimulation()\0"
    "showAmberForceFieldOptions()\0"
    "showCharmmForceFieldOptions()\0"
    "showMMFF94ForceFieldOptions()\0"
    "chooseAmberFF()\0chooseCharmmFF()\0"
    "chooseMMFF94()\0nr\0chooseForceField(Position)\0"
    "setupForceField()\0show\0calculateFDPB(bool)\0"
    "calculateFDPB()\0"
};

const QMetaObject BALL::VIEW::MolecularStructure::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BALL__VIEW__MolecularStructure,
      qt_meta_data_BALL__VIEW__MolecularStructure, 0 }
};

const QMetaObject *BALL::VIEW::MolecularStructure::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::MolecularStructure::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__MolecularStructure))
	return static_cast<void*>(const_cast<MolecularStructure*>(this));
    if (!strcmp(_clname, "ModularWidget"))
	return static_cast<ModularWidget*>(const_cast<MolecularStructure*>(this));
    return QWidget::qt_metacast(_clname);
}

int BALL::VIEW::MolecularStructure::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: centerCamera((*reinterpret_cast< Composite*(*)>(_a[1]))); break;
        case 1: centerCamera(); break;
        case 2: buildBonds(); break;
        case 3: addHydrogens(); break;
        case 4: { bool _r = checkResidue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: createGridFromDistance(); break;
        case 6: createGridFromCameraDistance(); break;
        case 7: calculateSecondaryStructure(); break;
        case 8: mapProteins(); break;
        case 9: calculateRMSD(); break;
        case 10: buildPeptide(); break;
        case 11: calculateHBonds(); break;
        case 12: calculateRamachandranPlot(); break;
        case 13: calculateForceFieldEnergy(); break;
        case 14: runMinimization((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: runMinimization(); break;
        case 16: MDSimulation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: MDSimulation(); break;
        case 18: showAmberForceFieldOptions(); break;
        case 19: showCharmmForceFieldOptions(); break;
        case 20: showMMFF94ForceFieldOptions(); break;
        case 21: chooseAmberFF(); break;
        case 22: chooseCharmmFF(); break;
        case 23: chooseMMFF94(); break;
        case 24: chooseForceField((*reinterpret_cast< Position(*)>(_a[1]))); break;
        case 25: setupForceField(); break;
        case 26: { bool _r = calculateFDPB((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = calculateFDPB();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        }
        _id -= 28;
    }
    return _id;
}
