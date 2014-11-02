/****************************************************************************
** Meta object code from reading C++ file 'fileObserver.h'
**
** Created: Wed Mar 19 14:28:50 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/WIDGETS/fileObserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileObserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__FileObserver[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x0a,
      39,   25,   25,   25, 0x0a,
      47,   25,   25,   25, 0x0a,
      54,   25,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__FileObserver[] = {
    "BALL::VIEW::FileObserver\0\0updateFile()\0"
    "start()\0stop()\0chooseFile()\0"
};

const QMetaObject BALL::VIEW::FileObserver::staticMetaObject = {
    { &DockWidget::staticMetaObject, qt_meta_stringdata_BALL__VIEW__FileObserver,
      qt_meta_data_BALL__VIEW__FileObserver, 0 }
};

const QMetaObject *BALL::VIEW::FileObserver::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::FileObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__FileObserver))
	return static_cast<void*>(const_cast<FileObserver*>(this));
    return DockWidget::qt_metacast(_clname);
}

int BALL::VIEW::FileObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateFile(); break;
        case 1: start(); break;
        case 2: stop(); break;
        case 3: chooseFile(); break;
        }
        _id -= 4;
    }
    return _id;
}
