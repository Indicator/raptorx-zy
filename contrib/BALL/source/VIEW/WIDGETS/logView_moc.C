/****************************************************************************
** Meta object code from reading C++ file 'logView.h'
**
** Created: Wed Mar 19 14:28:50 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/WIDGETS/logView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__DragLogView[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      27,   25,   24,   24, 0x0a,
      68,   25,   24,   24, 0x0a,
     109,   25,   24,   24, 0x0a,
     145,  140,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__DragLogView[] = {
    "BALL::VIEW::DragLogView\0\0e\0"
    "contentsDragEnterEvent(QDragEnterEvent*)\0"
    "contentsDragLeaveEvent(QDragLeaveEvent*)\0"
    "contentsDropEvent(QDropEvent*)\0name\0"
    "setSource(QUrl)\0"
};

const QMetaObject BALL::VIEW::DragLogView::staticMetaObject = {
    { &QTextBrowser::staticMetaObject, qt_meta_stringdata_BALL__VIEW__DragLogView,
      qt_meta_data_BALL__VIEW__DragLogView, 0 }
};

const QMetaObject *BALL::VIEW::DragLogView::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::DragLogView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__DragLogView))
	return static_cast<void*>(const_cast<DragLogView*>(this));
    return QTextBrowser::qt_metacast(_clname);
}

int BALL::VIEW::DragLogView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextBrowser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: contentsDragEnterEvent((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        case 1: contentsDragLeaveEvent((*reinterpret_cast< QDragLeaveEvent*(*)>(_a[1]))); break;
        case 2: contentsDropEvent((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 3: setSource((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        }
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_BALL__VIEW__LogView[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      57,   55,   50,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__LogView[] = {
    "BALL::VIEW::LogView\0\0showGuestContextMenu(QPoint)\0"
    "bool\0,\0eventFilter(QObject*,QEvent*)\0"
};

const QMetaObject BALL::VIEW::LogView::staticMetaObject = {
    { &DockWidget::staticMetaObject, qt_meta_stringdata_BALL__VIEW__LogView,
      qt_meta_data_BALL__VIEW__LogView, 0 }
};

const QMetaObject *BALL::VIEW::LogView::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::LogView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__LogView))
	return static_cast<void*>(const_cast<LogView*>(this));
    if (!strcmp(_clname, "LogStreamNotifier"))
	return static_cast<LogStreamNotifier*>(const_cast<LogView*>(this));
    return DockWidget::qt_metacast(_clname);
}

int BALL::VIEW::LogView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showGuestContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: { bool _r = eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        }
        _id -= 2;
    }
    return _id;
}
