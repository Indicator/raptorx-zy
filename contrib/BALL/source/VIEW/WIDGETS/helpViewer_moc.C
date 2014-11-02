/****************************************************************************
** Meta object code from reading C++ file 'helpViewer.h'
**
** Created: Wed Mar 19 14:28:50 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/WIDGETS/helpViewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'helpViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__MyTextBrowser[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__MyTextBrowser[] = {
    "BALL::VIEW::MyTextBrowser\0"
};

const QMetaObject BALL::VIEW::MyTextBrowser::staticMetaObject = {
    { &QTextBrowser::staticMetaObject, qt_meta_stringdata_BALL__VIEW__MyTextBrowser,
      qt_meta_data_BALL__VIEW__MyTextBrowser, 0 }
};

const QMetaObject *BALL::VIEW::MyTextBrowser::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::MyTextBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__MyTextBrowser))
	return static_cast<void*>(const_cast<MyTextBrowser*>(this));
    return QTextBrowser::qt_metacast(_clname);
}

int BALL::VIEW::MyTextBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextBrowser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_BALL__VIEW__HelpViewer[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,
      35,   23,   23,   23, 0x0a,
      56,   23,   23,   23, 0x0a,
      87,   81,   76,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__HelpViewer[] = {
    "BALL::VIEW::HelpViewer\0\0showHelp()\0"
    "enterWhatsThisMode()\0exitWhatsThisMode()\0"
    "bool\0obj,e\0eventFilter(QObject*,QEvent*)\0"
};

const QMetaObject BALL::VIEW::HelpViewer::staticMetaObject = {
    { &DockWidget::staticMetaObject, qt_meta_stringdata_BALL__VIEW__HelpViewer,
      qt_meta_data_BALL__VIEW__HelpViewer, 0 }
};

const QMetaObject *BALL::VIEW::HelpViewer::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::HelpViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__HelpViewer))
	return static_cast<void*>(const_cast<HelpViewer*>(this));
    return DockWidget::qt_metacast(_clname);
}

int BALL::VIEW::HelpViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showHelp(); break;
        case 1: enterWhatsThisMode(); break;
        case 2: exitWhatsThisMode(); break;
        case 3: { bool _r = eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        }
        _id -= 4;
    }
    return _id;
}
