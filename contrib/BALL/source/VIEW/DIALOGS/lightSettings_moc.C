/****************************************************************************
** Meta object code from reading C++ file 'lightSettings.h'
**
** Created: Wed Mar 19 14:28:19 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/lightSettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lightSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__LightSettings[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x0a,
      45,   26,   26,   26, 0x0a,
      60,   26,   26,   26, 0x0a,
      78,   26,   26,   26, 0x0a,
      94,   26,   26,   26, 0x0a,
     115,   26,   26,   26, 0x0a,
     130,   26,   26,   26, 0x0a,
     149,   26,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__LightSettings[] = {
    "BALL::VIEW::LightSettings\0\0addLightPressed()\0"
    "colorPressed()\0defaultsPressed()\0"
    "lightSelected()\0removeLightPressed()\0"
    "typeSelected()\0intensityChanged()\0"
    "positionTypeChanged()\0"
};

const QMetaObject BALL::VIEW::LightSettings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BALL__VIEW__LightSettings,
      qt_meta_data_BALL__VIEW__LightSettings, 0 }
};

const QMetaObject *BALL::VIEW::LightSettings::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::LightSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__LightSettings))
	return static_cast<void*>(const_cast<LightSettings*>(this));
    if (!strcmp(_clname, "Ui_LightSettingsData"))
	return static_cast<Ui_LightSettingsData*>(const_cast<LightSettings*>(this));
    if (!strcmp(_clname, "PreferencesEntry"))
	return static_cast<PreferencesEntry*>(const_cast<LightSettings*>(this));
    return QWidget::qt_metacast(_clname);
}

int BALL::VIEW::LightSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addLightPressed(); break;
        case 1: colorPressed(); break;
        case 2: defaultsPressed(); break;
        case 3: lightSelected(); break;
        case 4: removeLightPressed(); break;
        case 5: typeSelected(); break;
        case 6: intensityChanged(); break;
        case 7: positionTypeChanged(); break;
        }
        _id -= 8;
    }
    return _id;
}
