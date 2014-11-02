/****************************************************************************
** Meta object code from reading C++ file 'genericControl.h'
**
** Created: Wed Mar 19 14:28:50 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/WIDGETS/genericControl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'genericControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__GenericControl[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x0a,
      49,   27,   27,   27, 0x09,
      74,   27,   27,   27, 0x09,
      94,   92,   27,   27, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__GenericControl[] = {
    "BALL::VIEW::GenericControl\0\0"
    "deleteCurrentItems()\0deselectOtherControls_()\0"
    "updateSelection()\0,\0"
    "onItemClicked(QTreeWidgetItem*,int)\0"
};

const QMetaObject BALL::VIEW::GenericControl::staticMetaObject = {
    { &DockWidget::staticMetaObject, qt_meta_stringdata_BALL__VIEW__GenericControl,
      qt_meta_data_BALL__VIEW__GenericControl, 0 }
};

const QMetaObject *BALL::VIEW::GenericControl::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::GenericControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__GenericControl))
	return static_cast<void*>(const_cast<GenericControl*>(this));
    return DockWidget::qt_metacast(_clname);
}

int BALL::VIEW::GenericControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: deleteCurrentItems(); break;
        case 1: deselectOtherControls_(); break;
        case 2: updateSelection(); break;
        case 3: onItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        }
        _id -= 4;
    }
    return _id;
}
