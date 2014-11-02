/****************************************************************************
** Meta object code from reading C++ file 'dockWidget.h'
**
** Created: Wed Mar 19 14:28:49 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/WIDGETS/dockWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__DockWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      26,   24,   23,   23, 0x0a,
      49,   24,   23,   23, 0x0a,
      82,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__DockWidget[] = {
    "BALL::VIEW::DockWidget\0\0e\0"
    "dropEvent(QDropEvent*)\0"
    "dragEnterEvent(QDragEnterEvent*)\0"
    "showGuestContextMenu(QPoint)\0"
};

const QMetaObject BALL::VIEW::DockWidget::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_BALL__VIEW__DockWidget,
      qt_meta_data_BALL__VIEW__DockWidget, 0 }
};

const QMetaObject *BALL::VIEW::DockWidget::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::DockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__DockWidget))
	return static_cast<void*>(const_cast<DockWidget*>(this));
    if (!strcmp(_clname, "ModularWidget"))
	return static_cast<ModularWidget*>(const_cast<DockWidget*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int BALL::VIEW::DockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: dropEvent((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 1: dragEnterEvent((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        case 2: showGuestContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        }
        _id -= 3;
    }
    return _id;
}
