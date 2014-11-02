/****************************************************************************
** Meta object code from reading C++ file 'modelSettingsDialog.h'
**
** Created: Wed Mar 19 14:28:19 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/modelSettingsDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modelSettingsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__ModelSettingsDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x09,
      54,   32,   32,   32, 0x09,
      73,   32,   32,   32, 0x09,
     104,   32,   32,   32, 0x09,
     137,   32,   32,   32, 0x09,
     158,   32,   32,   32, 0x09,
     178,   32,   32,   32, 0x09,
     205,   32,   32,   32, 0x09,
     233,   32,   32,   32, 0x09,
     266,   32,   32,   32, 0x09,
     295,   32,   32,   32, 0x09,
     323,   32,   32,   32, 0x09,
     354,   32,   32,   32, 0x09,
     384,   32,   32,   32, 0x09,
     416,   32,   32,   32, 0x09,
     438,   32,   32,   32, 0x09,
     460,   32,   32,   32, 0x09,
     484,   32,   32,   32, 0x09,
     503,   32,   32,   32, 0x09,
     530,  524,   32,   32, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__ModelSettingsDialog[] = {
    "BALL::VIEW::ModelSettingsDialog\0\0"
    "stickRadiusChanged()\0VDWfactorChanged()\0"
    "ballStickSphereRadiusChanged()\0"
    "ballStickCylinderRadiusChanged()\0"
    "probeRadiusChanged()\0tubeRadiusChanged()\0"
    "cartoonTubeRadiusChanged()\0"
    "cartoonHelixRadiusChanged()\0"
    "cartoonStrandArrowWidthChanged()\0"
    "cartoonStrandHeightChanged()\0"
    "cartoonStrandWidthChanged()\0"
    "cartoonDNAHelixRadiusChanged()\0"
    "cartoonDNABaseRadiusChanged()\0"
    "cartoonDNALadderRadiusChanged()\0"
    "hbondsRadiusChanged()\0forceScalingChanged()\0"
    "forceMaxLengthChanged()\0forceBaseChanged()\0"
    "forceOffsetChanged()\0state\0"
    "changedNAMode_(bool)\0"
};

const QMetaObject BALL::VIEW::ModelSettingsDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BALL__VIEW__ModelSettingsDialog,
      qt_meta_data_BALL__VIEW__ModelSettingsDialog, 0 }
};

const QMetaObject *BALL::VIEW::ModelSettingsDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::ModelSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__ModelSettingsDialog))
	return static_cast<void*>(const_cast<ModelSettingsDialog*>(this));
    if (!strcmp(_clname, "Ui_ModelSettingsDialogData"))
	return static_cast<Ui_ModelSettingsDialogData*>(const_cast<ModelSettingsDialog*>(this));
    if (!strcmp(_clname, "PreferencesEntry"))
	return static_cast<PreferencesEntry*>(const_cast<ModelSettingsDialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int BALL::VIEW::ModelSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: stickRadiusChanged(); break;
        case 1: VDWfactorChanged(); break;
        case 2: ballStickSphereRadiusChanged(); break;
        case 3: ballStickCylinderRadiusChanged(); break;
        case 4: probeRadiusChanged(); break;
        case 5: tubeRadiusChanged(); break;
        case 6: cartoonTubeRadiusChanged(); break;
        case 7: cartoonHelixRadiusChanged(); break;
        case 8: cartoonStrandArrowWidthChanged(); break;
        case 9: cartoonStrandHeightChanged(); break;
        case 10: cartoonStrandWidthChanged(); break;
        case 11: cartoonDNAHelixRadiusChanged(); break;
        case 12: cartoonDNABaseRadiusChanged(); break;
        case 13: cartoonDNALadderRadiusChanged(); break;
        case 14: hbondsRadiusChanged(); break;
        case 15: forceScalingChanged(); break;
        case 16: forceMaxLengthChanged(); break;
        case 17: forceBaseChanged(); break;
        case 18: forceOffsetChanged(); break;
        case 19: changedNAMode_((*reinterpret_cast< bool(*)>(_a[1]))); break;
        }
        _id -= 20;
    }
    return _id;
}
