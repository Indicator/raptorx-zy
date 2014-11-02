/****************************************************************************
** Meta object code from reading C++ file 'stageSettings.h'
**
** Created: Wed Mar 19 14:28:20 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/stageSettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stageSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__StageSettings[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x0a,
      42,   26,   26,   26, 0x0a,
      64,   26,   26,   26, 0x08,
      85,   26,   26,   26, 0x08,
     108,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__StageSettings[] = {
    "BALL::VIEW::StageSettings\0\0colorPressed()\0"
    "cappingColorPressed()\0eyeDistanceChanged()\0"
    "focalDistanceChanged()\0fogStateChanged()\0"
};

const QMetaObject BALL::VIEW::StageSettings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BALL__VIEW__StageSettings,
      qt_meta_data_BALL__VIEW__StageSettings, 0 }
};

const QMetaObject *BALL::VIEW::StageSettings::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::StageSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__StageSettings))
	return static_cast<void*>(const_cast<StageSettings*>(this));
    if (!strcmp(_clname, "Ui_StageSettingsData"))
	return static_cast<Ui_StageSettingsData*>(const_cast<StageSettings*>(this));
    if (!strcmp(_clname, "PreferencesEntry"))
	return static_cast<PreferencesEntry*>(const_cast<StageSettings*>(this));
    return QWidget::qt_metacast(_clname);
}

int BALL::VIEW::StageSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: colorPressed(); break;
        case 1: cappingColorPressed(); break;
        case 2: eyeDistanceChanged(); break;
        case 3: focalDistanceChanged(); break;
        case 4: fogStateChanged(); break;
        }
        _id -= 5;
    }
    return _id;
}
