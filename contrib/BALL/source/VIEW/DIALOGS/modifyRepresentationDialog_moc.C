/****************************************************************************
** Meta object code from reading C++ file 'modifyRepresentationDialog.h'
**
** Created: Wed Mar 19 14:28:19 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/modifyRepresentationDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifyRepresentationDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__ModifyRepresentationDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      40,   39,   39,   39, 0x0a,
      55,   39,   39,   39, 0x0a,
      71,   39,   39,   39, 0x0a,
      84,   39,   39,   39, 0x0a,
      97,   39,   39,   39, 0x0a,
     110,   39,   39,   39, 0x0a,
     126,   39,   39,   39, 0x0a,
     142,   39,   39,   39, 0x0a,
     155,   39,   39,   39, 0x0a,
     167,   39,   39,   39, 0x0a,
     183,   39,   39,   39, 0x0a,
     198,   39,   39,   39, 0x0a,
     205,   39,   39,   39, 0x0a,
     218,   39,   39,   39, 0x09,
     244,   39,   39,   39, 0x09,
     277,   39,   39,   39, 0x09,
     316,   39,   39,   39, 0x09,
     337,   39,   39,   39, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__ModifyRepresentationDialog[] = {
    "BALL::VIEW::ModifyRepresentationDialog\0"
    "\0applyPressed()\0cancelPressed()\0"
    "maxPressed()\0midPressed()\0minPressed()\0"
    "minMinPressed()\0maxMaxPressed()\0"
    "tabChanged()\0autoScale()\0choosePressed()\0"
    "gridSelected()\0show()\0applySplit()\0"
    "gridTransparencyChanged()\0"
    "customColorTransparencyChanged()\0"
    "changeDrawingModeTransparencyChanged()\0"
    "splitMethodChanged()\0normalizationChanged()\0"
};

const QMetaObject BALL::VIEW::ModifyRepresentationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__ModifyRepresentationDialog,
      qt_meta_data_BALL__VIEW__ModifyRepresentationDialog, 0 }
};

const QMetaObject *BALL::VIEW::ModifyRepresentationDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::ModifyRepresentationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__ModifyRepresentationDialog))
	return static_cast<void*>(const_cast<ModifyRepresentationDialog*>(this));
    if (!strcmp(_clname, "Ui_ModifyRepresentationDialogData"))
	return static_cast<Ui_ModifyRepresentationDialogData*>(const_cast<ModifyRepresentationDialog*>(this));
    if (!strcmp(_clname, "ModularWidget"))
	return static_cast<ModularWidget*>(const_cast<ModifyRepresentationDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::ModifyRepresentationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: applyPressed(); break;
        case 1: cancelPressed(); break;
        case 2: maxPressed(); break;
        case 3: midPressed(); break;
        case 4: minPressed(); break;
        case 5: minMinPressed(); break;
        case 6: maxMaxPressed(); break;
        case 7: tabChanged(); break;
        case 8: autoScale(); break;
        case 9: choosePressed(); break;
        case 10: gridSelected(); break;
        case 11: show(); break;
        case 12: applySplit(); break;
        case 13: gridTransparencyChanged(); break;
        case 14: customColorTransparencyChanged(); break;
        case 15: changeDrawingModeTransparencyChanged(); break;
        case 16: splitMethodChanged(); break;
        case 17: normalizationChanged(); break;
        }
        _id -= 18;
    }
    return _id;
}
