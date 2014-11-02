/****************************************************************************
** Meta object code from reading C++ file 'materialSettings.h'
**
** Created: Wed Mar 19 14:28:19 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/materialSettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'materialSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__MaterialSettings[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x0a,
      47,   29,   29,   29, 0x0a,
      64,   29,   29,   29, 0x0a,
      82,   29,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__MaterialSettings[] = {
    "BALL::VIEW::MaterialSettings\0\0"
    "ambientChanged()\0diffuseChanged()\0"
    "specularChanged()\0shininessChanged()\0"
};

const QMetaObject BALL::VIEW::MaterialSettings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BALL__VIEW__MaterialSettings,
      qt_meta_data_BALL__VIEW__MaterialSettings, 0 }
};

const QMetaObject *BALL::VIEW::MaterialSettings::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::MaterialSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__MaterialSettings))
	return static_cast<void*>(const_cast<MaterialSettings*>(this));
    if (!strcmp(_clname, "Ui_MaterialSettingsData"))
	return static_cast<Ui_MaterialSettingsData*>(const_cast<MaterialSettings*>(this));
    if (!strcmp(_clname, "PreferencesEntry"))
	return static_cast<PreferencesEntry*>(const_cast<MaterialSettings*>(this));
    return QWidget::qt_metacast(_clname);
}

int BALL::VIEW::MaterialSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ambientChanged(); break;
        case 1: diffuseChanged(); break;
        case 2: specularChanged(); break;
        case 3: shininessChanged(); break;
        }
        _id -= 4;
    }
    return _id;
}
