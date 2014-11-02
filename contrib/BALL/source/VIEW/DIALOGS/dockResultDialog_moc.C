/****************************************************************************
** Meta object code from reading C++ file 'dockResultDialog.h'
**
** Created: Wed Mar 19 14:28:19 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/dockResultDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockResultDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__DockResultDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x0a,
      37,   29,   29,   29, 0x0a,
      59,   52,   29,   29, 0x0a,
      74,   29,   29,   29, 0x0a,
      95,   29,   29,   29, 0x0a,
     111,   29,   29,   29, 0x0a,
     129,   29,   29,   29, 0x0a,
     149,   29,   29,   29, 0x0a,
     167,   29,   29,   29, 0x0a,
     184,   29,   29,   29, 0x0a,
     199,   29,   29,   29, 0x09,
     219,   29,   29,   29, 0x09,
     235,   29,   29,   29, 0x09,
     257,   29,   29,   29, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__DockResultDialog[] = {
    "BALL::VIEW::DockResultDialog\0\0show()\0"
    "showSnapshot()\0column\0sortTable(int)\0"
    "showDockingOptions()\0upwardClicked()\0"
    "downwardClicked()\0scoringFuncChosen()\0"
    "advancedClicked()\0scoringClicked()\0"
    "closeClicked()\0selectionChanged_()\0"
    "deleteColumn_()\0showScoringOptions_()\0"
    "redock_()\0"
};

const QMetaObject BALL::VIEW::DockResultDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__DockResultDialog,
      qt_meta_data_BALL__VIEW__DockResultDialog, 0 }
};

const QMetaObject *BALL::VIEW::DockResultDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::DockResultDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__DockResultDialog))
	return static_cast<void*>(const_cast<DockResultDialog*>(this));
    if (!strcmp(_clname, "Ui_DockResultDialogData"))
	return static_cast<Ui_DockResultDialogData*>(const_cast<DockResultDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::DockResultDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: show(); break;
        case 1: showSnapshot(); break;
        case 2: sortTable((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: showDockingOptions(); break;
        case 4: upwardClicked(); break;
        case 5: downwardClicked(); break;
        case 6: scoringFuncChosen(); break;
        case 7: advancedClicked(); break;
        case 8: scoringClicked(); break;
        case 9: closeClicked(); break;
        case 10: selectionChanged_(); break;
        case 11: deleteColumn_(); break;
        case 12: showScoringOptions_(); break;
        case 13: redock_(); break;
        }
        _id -= 14;
    }
    return _id;
}
