/****************************************************************************
** Meta object code from reading C++ file 'demoTutorialDialog.h'
**
** Created: Wed Mar 19 14:31:24 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "demoTutorialDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'demoTutorialDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__DemoTutorialDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      32,   31,   31,   31, 0x0a,
      39,   31,   31,   31, 0x0a,
      50,   31,   31,   31, 0x0a,
      65,   31,   31,   31, 0x0a,
      96,   83,   31,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__DemoTutorialDialog[] = {
    "BALL::VIEW::DemoTutorialDialog\0\0show()\0"
    "showDemo()\0showTutorial()\0nextStepClicked()\0"
    "main_control\0checkMenu(MainControl&)\0"
};

const QMetaObject BALL::VIEW::DemoTutorialDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__DemoTutorialDialog,
      qt_meta_data_BALL__VIEW__DemoTutorialDialog, 0 }
};

const QMetaObject *BALL::VIEW::DemoTutorialDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::DemoTutorialDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__DemoTutorialDialog))
	return static_cast<void*>(const_cast<DemoTutorialDialog*>(this));
    if (!strcmp(_clname, "Ui_DemoTutorialDialogData"))
	return static_cast<Ui_DemoTutorialDialogData*>(const_cast<DemoTutorialDialog*>(this));
    if (!strcmp(_clname, "ModularWidget"))
	return static_cast<ModularWidget*>(const_cast<DemoTutorialDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::DemoTutorialDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: show(); break;
        case 1: showDemo(); break;
        case 2: showTutorial(); break;
        case 3: nextStepClicked(); break;
        case 4: checkMenu((*reinterpret_cast< MainControl(*)>(_a[1]))); break;
        }
        _id -= 5;
    }
    return _id;
}
