/****************************************************************************
** Meta object code from reading C++ file 'mainframe.h'
**
** Created: Wed Mar 19 14:31:24 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainframe.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__Mainframe[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      32,   29,   24,   16, 0x0a,
      62,   16,   16,   16, 0x0a,
      70,   16,   16,   16, 0x0a,
      78,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__Mainframe[] = {
    "BALL::Mainframe\0\0show()\0bool\0,e\0"
    "eventFilter(QObject*,QEvent*)\0reset()\0"
    "about()\0howToCite()\0"
};

const QMetaObject BALL::Mainframe::staticMetaObject = {
    { &BALL::VIEW::MainControl::staticMetaObject, qt_meta_stringdata_BALL__Mainframe,
      qt_meta_data_BALL__Mainframe, 0 }
};

const QMetaObject *BALL::Mainframe::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::Mainframe::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__Mainframe))
	return static_cast<void*>(const_cast<Mainframe*>(this));
    typedef BALL::VIEW::MainControl QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int BALL::Mainframe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef BALL::VIEW::MainControl QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: show(); break;
        case 1: { bool _r = eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: reset(); break;
        case 3: about(); break;
        case 4: howToCite(); break;
        }
        _id -= 5;
    }
    return _id;
}
