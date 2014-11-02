/****************************************************************************
** Meta object code from reading C++ file 'coloringSettingsDialog.h'
**
** Created: Wed Mar 19 14:28:19 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/coloringSettingsDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coloringSettingsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__QColorTable[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      33,   25,   24,   24, 0x08,
      58,   52,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__QColorTable[] = {
    "BALL::VIEW::QColorTable\0\0row,col\0"
    "beginEdit(int,int)\0event\0"
    "mousePressEvent(QMouseEvent*)\0"
};

const QMetaObject BALL::VIEW::QColorTable::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_BALL__VIEW__QColorTable,
      qt_meta_data_BALL__VIEW__QColorTable, 0 }
};

const QMetaObject *BALL::VIEW::QColorTable::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::QColorTable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__QColorTable))
	return static_cast<void*>(const_cast<QColorTable*>(this));
    if (!strcmp(_clname, "PreferencesEntry::ExtendedPreferencesObject"))
	return static_cast<PreferencesEntry::ExtendedPreferencesObject*>(const_cast<QColorTable*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int BALL::VIEW::QColorTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: beginEdit((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_BALL__VIEW__ColoringSettingsDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      36,   35,   35,   35, 0x09,
      64,   35,   35,   35, 0x09,
      90,   35,   35,   35, 0x09,
     117,   35,   35,   35, 0x09,
     146,   35,   35,   35, 0x09,
     174,   35,   35,   35, 0x09,
     203,   35,   35,   35, 0x09,
     230,   35,   35,   35, 0x09,
     256,   35,   35,   35, 0x09,
     280,   35,   35,   35, 0x09,
     304,   35,   35,   35, 0x09,
     331,   35,   35,   35, 0x09,
     362,   35,   35,   35, 0x09,
     393,   35,   35,   35, 0x09,
     427,   35,   35,   35, 0x09,
     447,   35,   35,   35, 0x09,
     466,   35,   35,   35, 0x09,
     487,   35,   35,   35, 0x09,
     506,   35,   35,   35, 0x09,
     529,   35,   35,   35, 0x09,
     552,   35,   35,   35, 0x09,
     573,   35,   35,   35, 0x09,
     596,   35,   35,   35, 0x09,
     616,   35,   35,   35, 0x09,
     636,   35,   35,   35, 0x09,
     656,   35,   35,   35, 0x09,
     682,   35,   35,   35, 0x09,
     703,   35,   35,   35, 0x09,
     718,   35,   35,   35, 0x09,
     741,   35,   35,   35, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__ColoringSettingsDialog[] = {
    "BALL::VIEW::ColoringSettingsDialog\0\0"
    "middleResidueColorPressed()\0"
    "lastResidueColorPressed()\0"
    "firstResidueColorPressed()\0"
    "negativeChargeColorPressed()\0"
    "neutralChargeColorPressed()\0"
    "positiveChargeColorPressed()\0"
    "nullDistanceColorPressed()\0"
    "maxDistanceColorPressed()\0"
    "minimumTFColorPressed()\0maximumTFColorPressed()\0"
    "unassignedTFColorPressed()\0"
    "minimumOccupancyColorPressed()\0"
    "maximumOccupancyColorPressed()\0"
    "unassignedOccupancyColorPressed()\0"
    "helixColorPressed()\0turnColorPressed()\0"
    "strandColorPressed()\0coilColorPressed()\0"
    "forceMaxColorPressed()\0forceMinColorPressed()\0"
    "acidicColorPressed()\0aromaticColorPressed()\0"
    "basicColorPressed()\0otherColorPressed()\0"
    "polarColorPressed()\0hydrophobicColorPressed()\0"
    "maxDistanceChanged()\0maxTFChanged()\0"
    "forceMaxValueChanged()\0forceMinValueChanged()\0"
};

const QMetaObject BALL::VIEW::ColoringSettingsDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BALL__VIEW__ColoringSettingsDialog,
      qt_meta_data_BALL__VIEW__ColoringSettingsDialog, 0 }
};

const QMetaObject *BALL::VIEW::ColoringSettingsDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::ColoringSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__ColoringSettingsDialog))
	return static_cast<void*>(const_cast<ColoringSettingsDialog*>(this));
    if (!strcmp(_clname, "Ui_ColoringSettingsDialogData"))
	return static_cast<Ui_ColoringSettingsDialogData*>(const_cast<ColoringSettingsDialog*>(this));
    if (!strcmp(_clname, "PreferencesEntry"))
	return static_cast<PreferencesEntry*>(const_cast<ColoringSettingsDialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int BALL::VIEW::ColoringSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: middleResidueColorPressed(); break;
        case 1: lastResidueColorPressed(); break;
        case 2: firstResidueColorPressed(); break;
        case 3: negativeChargeColorPressed(); break;
        case 4: neutralChargeColorPressed(); break;
        case 5: positiveChargeColorPressed(); break;
        case 6: nullDistanceColorPressed(); break;
        case 7: maxDistanceColorPressed(); break;
        case 8: minimumTFColorPressed(); break;
        case 9: maximumTFColorPressed(); break;
        case 10: unassignedTFColorPressed(); break;
        case 11: minimumOccupancyColorPressed(); break;
        case 12: maximumOccupancyColorPressed(); break;
        case 13: unassignedOccupancyColorPressed(); break;
        case 14: helixColorPressed(); break;
        case 15: turnColorPressed(); break;
        case 16: strandColorPressed(); break;
        case 17: coilColorPressed(); break;
        case 18: forceMaxColorPressed(); break;
        case 19: forceMinColorPressed(); break;
        case 20: acidicColorPressed(); break;
        case 21: aromaticColorPressed(); break;
        case 22: basicColorPressed(); break;
        case 23: otherColorPressed(); break;
        case 24: polarColorPressed(); break;
        case 25: hydrophobicColorPressed(); break;
        case 26: maxDistanceChanged(); break;
        case 27: maxTFChanged(); break;
        case 28: forceMaxValueChanged(); break;
        case 29: forceMinValueChanged(); break;
        }
        _id -= 30;
    }
    return _id;
}
