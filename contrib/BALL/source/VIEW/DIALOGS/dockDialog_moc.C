/****************************************************************************
** Meta object code from reading C++ file 'dockDialog.h'
**
** Created: Wed Mar 19 14:28:19 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/dockDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__DockDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      29,   23,   24,   23, 0x0a,
      36,   23,   23,   23, 0x0a,
      51,   23,   23,   23, 0x0a,
      63,   23,   23,   23, 0x0a,
      79,   23,   23,   23, 0x0a,
     100,   23,   23,   23, 0x0a,
     125,   23,   23,   23, 0x0a,
     142,   23,   23,   23, 0x0a,
     159,   23,   23,   23, 0x0a,
     179,   23,   23,   23, 0x0a,
     197,   23,   23,   23, 0x0a,
     217,   23,   23,   23, 0x0a,
     238,   23,   23,   23, 0x0a,
     256,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__DockDialog[] = {
    "BALL::VIEW::DockDialog\0\0bool\0exec()\0"
    "resetPressed()\0okPressed()\0cancelPressed()\0"
    "algAdvancedPressed()\0scoringAdvancedPressed()\0"
    "partner1Chosen()\0partner2Chosen()\0"
    "scoringFuncChosen()\0algorithmChosen()\0"
    "browseChargesData()\0browseChargesRules()\0"
    "browseRadiiData()\0browseRadiiRules()\0"
};

const QMetaObject BALL::VIEW::DockDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__DockDialog,
      qt_meta_data_BALL__VIEW__DockDialog, 0 }
};

const QMetaObject *BALL::VIEW::DockDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::DockDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__DockDialog))
	return static_cast<void*>(const_cast<DockDialog*>(this));
    if (!strcmp(_clname, "Ui_DockDialogData"))
	return static_cast<Ui_DockDialogData*>(const_cast<DockDialog*>(this));
    if (!strcmp(_clname, "PreferencesEntry"))
	return static_cast<PreferencesEntry*>(const_cast<DockDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::DockDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = exec();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: resetPressed(); break;
        case 2: okPressed(); break;
        case 3: cancelPressed(); break;
        case 4: algAdvancedPressed(); break;
        case 5: scoringAdvancedPressed(); break;
        case 6: partner1Chosen(); break;
        case 7: partner2Chosen(); break;
        case 8: scoringFuncChosen(); break;
        case 9: algorithmChosen(); break;
        case 10: browseChargesData(); break;
        case 11: browseChargesRules(); break;
        case 12: browseRadiiData(); break;
        case 13: browseRadiiRules(); break;
        }
        _id -= 14;
    }
    return _id;
}
