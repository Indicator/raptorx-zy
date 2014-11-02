/****************************************************************************
** Meta object code from reading C++ file 'peptideDialog.h'
**
** Created: Wed Mar 19 14:28:20 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/peptideDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'peptideDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__PeptideDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x0a,
      41,   26,   26,   26, 0x0a,
      55,   26,   26,   26, 0x0a,
      69,   26,   26,   26, 0x0a,
      83,   26,   26,   26, 0x0a,
      97,   26,   26,   26, 0x0a,
     111,   26,   26,   26, 0x0a,
     125,   26,   26,   26, 0x0a,
     139,   26,   26,   26, 0x0a,
     153,   26,   26,   26, 0x0a,
     167,   26,   26,   26, 0x0a,
     181,   26,   26,   26, 0x0a,
     195,   26,   26,   26, 0x0a,
     209,   26,   26,   26, 0x0a,
     223,   26,   26,   26, 0x0a,
     237,   26,   26,   26, 0x0a,
     251,   26,   26,   26, 0x0a,
     265,   26,   26,   26, 0x0a,
     279,   26,   26,   26, 0x0a,
     293,   26,   26,   26, 0x0a,
     307,   26,   26,   26, 0x0a,
     322,   26,   26,   26, 0x0a,
     338,   26,   26,   26, 0x0a,
     354,   26,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__PeptideDialog[] = {
    "BALL::VIEW::PeptideDialog\0\0ala_pressed()\0"
    "arg_pressed()\0asn_pressed()\0asp_pressed()\0"
    "cys_pressed()\0gln_pressed()\0glu_pressed()\0"
    "gly_pressed()\0his_pressed()\0ile_pressed()\0"
    "leu_pressed()\0lys_pressed()\0met_pressed()\0"
    "phe_pressed()\0pro_pressed()\0ser_pressed()\0"
    "thr_pressed()\0trp_pressed()\0tyr_pressed()\0"
    "val_pressed()\0back_pressed()\0"
    "close_pressed()\0angle_changed()\0"
    "insert_seq()\0"
};

const QMetaObject BALL::VIEW::PeptideDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__PeptideDialog,
      qt_meta_data_BALL__VIEW__PeptideDialog, 0 }
};

const QMetaObject *BALL::VIEW::PeptideDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::PeptideDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__PeptideDialog))
	return static_cast<void*>(const_cast<PeptideDialog*>(this));
    if (!strcmp(_clname, "Ui_PeptideDialogData"))
	return static_cast<Ui_PeptideDialogData*>(const_cast<PeptideDialog*>(this));
    if (!strcmp(_clname, "Peptides::PeptideBuilder"))
	return static_cast<Peptides::PeptideBuilder*>(const_cast<PeptideDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::PeptideDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ala_pressed(); break;
        case 1: arg_pressed(); break;
        case 2: asn_pressed(); break;
        case 3: asp_pressed(); break;
        case 4: cys_pressed(); break;
        case 5: gln_pressed(); break;
        case 6: glu_pressed(); break;
        case 7: gly_pressed(); break;
        case 8: his_pressed(); break;
        case 9: ile_pressed(); break;
        case 10: leu_pressed(); break;
        case 11: lys_pressed(); break;
        case 12: met_pressed(); break;
        case 13: phe_pressed(); break;
        case 14: pro_pressed(); break;
        case 15: ser_pressed(); break;
        case 16: thr_pressed(); break;
        case 17: trp_pressed(); break;
        case 18: tyr_pressed(); break;
        case 19: val_pressed(); break;
        case 20: back_pressed(); break;
        case 21: close_pressed(); break;
        case 22: angle_changed(); break;
        case 23: insert_seq(); break;
        }
        _id -= 24;
    }
    return _id;
}
