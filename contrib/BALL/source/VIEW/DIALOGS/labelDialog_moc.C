/****************************************************************************
** Meta object code from reading C++ file 'labelDialog.h'
**
** Created: Wed Mar 19 14:28:19 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/labelDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'labelDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__LabelDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x0a,
      32,   24,   24,   24, 0x09,
      41,   24,   24,   24, 0x09,
      53,   24,   24,   24, 0x09,
      62,   24,   24,   24, 0x09,
      77,   24,   24,   24, 0x09,
      91,   24,   24,   24, 0x09,
     118,  105,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__LabelDialog[] = {
    "BALL::VIEW::LabelDialog\0\0show()\0"
    "accept()\0editColor()\0addTag()\0"
    "fontSelected()\0modeChanged()\0textChanged()\0"
    "main_control\0checkMenu(MainControl&)\0"
};

const QMetaObject BALL::VIEW::LabelDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__LabelDialog,
      qt_meta_data_BALL__VIEW__LabelDialog, 0 }
};

const QMetaObject *BALL::VIEW::LabelDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::LabelDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__LabelDialog))
	return static_cast<void*>(const_cast<LabelDialog*>(this));
    if (!strcmp(_clname, "Ui_LabelDialogData"))
	return static_cast<Ui_LabelDialogData*>(const_cast<LabelDialog*>(this));
    if (!strcmp(_clname, "ModularWidget"))
	return static_cast<ModularWidget*>(const_cast<LabelDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::LabelDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: show(); break;
        case 1: accept(); break;
        case 2: editColor(); break;
        case 3: addTag(); break;
        case 4: fontSelected(); break;
        case 5: modeChanged(); break;
        case 6: textChanged(); break;
        case 7: checkMenu((*reinterpret_cast< MainControl(*)>(_a[1]))); break;
        }
        _id -= 8;
    }
    return _id;
}
