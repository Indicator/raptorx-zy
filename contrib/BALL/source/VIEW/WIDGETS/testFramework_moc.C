/****************************************************************************
** Meta object code from reading C++ file 'testFramework.h'
**
** Created: Wed Mar 19 14:28:50 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/WIDGETS/testFramework.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testFramework.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__TestFramework[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x0a,
      39,   26,   26,   26, 0x0a,
      50,   26,   26,   26, 0x0a,
      60,   26,   26,   26, 0x0a,
      72,   26,   26,   26, 0x0a,
      83,   26,   26,   26, 0x0a,
     102,   99,   94,   26, 0x0a,
     132,   26,   26,   26, 0x0a,
     142,   26,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__TestFramework[] = {
    "BALL::VIEW::TestFramework\0\0startTest()\0"
    "stopTest()\0runTest()\0abortTest()\0"
    "saveFile()\0loadFile()\0bool\0,e\0"
    "eventFilter(QObject*,QEvent*)\0timeOut()\0"
    "switchRecordMove()\0"
};

const QMetaObject BALL::VIEW::TestFramework::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BALL__VIEW__TestFramework,
      qt_meta_data_BALL__VIEW__TestFramework, 0 }
};

const QMetaObject *BALL::VIEW::TestFramework::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::TestFramework::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__TestFramework))
	return static_cast<void*>(const_cast<TestFramework*>(this));
    if (!strcmp(_clname, "ModularWidget"))
	return static_cast<ModularWidget*>(const_cast<TestFramework*>(this));
    return QWidget::qt_metacast(_clname);
}

int BALL::VIEW::TestFramework::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: startTest(); break;
        case 1: stopTest(); break;
        case 2: runTest(); break;
        case 3: abortTest(); break;
        case 4: saveFile(); break;
        case 5: loadFile(); break;
        case 6: { bool _r = eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: timeOut(); break;
        case 8: switchRecordMove(); break;
        }
        _id -= 9;
    }
    return _id;
}
