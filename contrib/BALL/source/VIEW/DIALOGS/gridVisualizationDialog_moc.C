/****************************************************************************
** Meta object code from reading C++ file 'gridVisualizationDialog.h'
**
** Created: Wed Mar 19 14:28:19 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/gridVisualizationDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gridVisualizationDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__GridVisualizationDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      37,   36,   36,   36, 0x0a,
      46,   36,   36,   36, 0x0a,
      59,   36,   36,   36, 0x0a,
      72,   36,   36,   36, 0x0a,
      85,   36,   36,   36, 0x0a,
     101,   36,   36,   36, 0x0a,
     117,   36,   36,   36, 0x0a,
     129,   36,   36,   36, 0x0a,
     149,   36,  144,   36, 0x0a,
     156,   36,   36,   36, 0x09,
     182,   36,   36,   36, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__GridVisualizationDialog[] = {
    "BALL::VIEW::GridVisualizationDialog\0"
    "\0accept()\0maxPressed()\0midPressed()\0"
    "minPressed()\0minMinPressed()\0"
    "maxMaxPressed()\0autoScale()\0gridSelected()\0"
    "bool\0exec()\0gridTransparencyChanged()\0"
    "normalizationChanged()\0"
};

const QMetaObject BALL::VIEW::GridVisualizationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__GridVisualizationDialog,
      qt_meta_data_BALL__VIEW__GridVisualizationDialog, 0 }
};

const QMetaObject *BALL::VIEW::GridVisualizationDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::GridVisualizationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__GridVisualizationDialog))
	return static_cast<void*>(const_cast<GridVisualizationDialog*>(this));
    if (!strcmp(_clname, "Ui_GridVisualizationDialogData"))
	return static_cast<Ui_GridVisualizationDialogData*>(const_cast<GridVisualizationDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::GridVisualizationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: accept(); break;
        case 1: maxPressed(); break;
        case 2: midPressed(); break;
        case 3: minPressed(); break;
        case 4: minMinPressed(); break;
        case 5: maxMaxPressed(); break;
        case 6: autoScale(); break;
        case 7: gridSelected(); break;
        case 8: { bool _r = exec();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: gridTransparencyChanged(); break;
        case 10: normalizationChanged(); break;
        }
        _id -= 11;
    }
    return _id;
}
