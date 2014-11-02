/****************************************************************************
** Meta object code from reading C++ file 'displayProperties.h'
**
** Created: Wed Mar 19 14:28:19 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/displayProperties.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'displayProperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__DisplayProperties[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x0a,
      44,   38,   30,   30, 0x0a,
      61,   38,   30,   30, 0x0a,
      77,   38,   30,   30, 0x0a,
     109,  103,   30,   30, 0x0a,
     143,  103,   30,   30, 0x0a,
     168,  103,   30,   30, 0x0a,
     195,  189,   30,   30, 0x0a,
     221,   30,   30,   30, 0x0a,
     229,   30,   30,   30, 0x0a,
     241,   30,   30,   30, 0x0a,
     262,   30,   30,   30, 0x0a,
     287,   30,   30,   30, 0x0a,
     309,   38,   30,   30, 0x0a,
     334,   30,   30,   30, 0x0a,
     362,   30,   30,   30, 0x0a,
     387,   30,   30,   30, 0x0a,
     412,   30,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__DisplayProperties[] = {
    "BALL::VIEW::DisplayProperties\0\0show()\0"
    "index\0selectModel(int)\0selectMode(int)\0"
    "selectColoringMethod(int)\0value\0"
    "setSurfaceDrawingPrecision(float)\0"
    "setDrawingPrecision(int)\0setTransparency(int)\0"
    "color\0setCustomColor(ColorRGBA)\0apply()\0"
    "editColor()\0editSelectionColor()\0"
    "coloringOptionsPressed()\0modelOptionsPressed()\0"
    "precisionBoxChanged(int)\0"
    "transparencySliderChanged()\0"
    "precisionSliderChanged()\0"
    "coloringUpdatesChanged()\0modelUpdatesChanged()\0"
};

const QMetaObject BALL::VIEW::DisplayProperties::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__DisplayProperties,
      qt_meta_data_BALL__VIEW__DisplayProperties, 0 }
};

const QMetaObject *BALL::VIEW::DisplayProperties::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::DisplayProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__DisplayProperties))
	return static_cast<void*>(const_cast<DisplayProperties*>(this));
    if (!strcmp(_clname, "Ui_DisplayPropertiesData"))
	return static_cast<Ui_DisplayPropertiesData*>(const_cast<DisplayProperties*>(this));
    if (!strcmp(_clname, "ModularWidget"))
	return static_cast<ModularWidget*>(const_cast<DisplayProperties*>(this));
    if (!strcmp(_clname, "PreferencesEntry"))
	return static_cast<PreferencesEntry*>(const_cast<DisplayProperties*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::DisplayProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: show(); break;
        case 1: selectModel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: selectMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: selectColoringMethod((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: setSurfaceDrawingPrecision((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: setDrawingPrecision((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: setTransparency((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: setCustomColor((*reinterpret_cast< const ColorRGBA(*)>(_a[1]))); break;
        case 8: apply(); break;
        case 9: editColor(); break;
        case 10: editSelectionColor(); break;
        case 11: coloringOptionsPressed(); break;
        case 12: modelOptionsPressed(); break;
        case 13: precisionBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: transparencySliderChanged(); break;
        case 15: precisionSliderChanged(); break;
        case 16: coloringUpdatesChanged(); break;
        case 17: modelUpdatesChanged(); break;
        }
        _id -= 18;
    }
    return _id;
}
