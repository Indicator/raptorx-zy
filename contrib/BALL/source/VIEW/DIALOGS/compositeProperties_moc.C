/****************************************************************************
** Meta object code from reading C++ file 'compositeProperties.h'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/compositeProperties.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'compositeProperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__CompositeProperties[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__CompositeProperties[] = {
    "BALL::VIEW::CompositeProperties\0\0"
    "accept()\0"
};

const QMetaObject BALL::VIEW::CompositeProperties::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__CompositeProperties,
      qt_meta_data_BALL__VIEW__CompositeProperties, 0 }
};

const QMetaObject *BALL::VIEW::CompositeProperties::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::CompositeProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__CompositeProperties))
	return static_cast<void*>(const_cast<CompositeProperties*>(this));
    if (!strcmp(_clname, "Ui_CompositePropertiesData"))
	return static_cast<Ui_CompositePropertiesData*>(const_cast<CompositeProperties*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::CompositeProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: accept(); break;
        }
        _id -= 1;
    }
    return _id;
}
