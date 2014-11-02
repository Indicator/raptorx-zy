/****************************************************************************
** Meta object code from reading C++ file 'pubchemDialog.h'
**
** Created: Wed Mar 19 14:28:20 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/pubchemDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pubchemDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__PubChemDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x0a,
      34,   26,   26,   26, 0x0a,
      58,   26,   26,   26, 0x0a,
      85,   73,   26,   26, 0x0a,
     118,   26,   26,   26, 0x0a,
     133,   26,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__PubChemDialog[] = {
    "BALL::VIEW::PubChemDialog\0\0show()\0"
    "generateButtonClicked()\0queryPubChem()\0"
    "item,column\0switchView(QTreeWidgetItem*,int)\0"
    "clearEntries()\0finished()\0"
};

const QMetaObject BALL::VIEW::PubChemDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__PubChemDialog,
      qt_meta_data_BALL__VIEW__PubChemDialog, 0 }
};

const QMetaObject *BALL::VIEW::PubChemDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::PubChemDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__PubChemDialog))
	return static_cast<void*>(const_cast<PubChemDialog*>(this));
    if (!strcmp(_clname, "Ui_PubChemDialogData"))
	return static_cast<Ui_PubChemDialogData*>(const_cast<PubChemDialog*>(this));
    if (!strcmp(_clname, "ModularWidget"))
	return static_cast<ModularWidget*>(const_cast<PubChemDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::PubChemDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: show(); break;
        case 1: generateButtonClicked(); break;
        case 2: queryPubChem(); break;
        case 3: switchView((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: clearEntries(); break;
        case 5: finished(); break;
        }
        _id -= 6;
    }
    return _id;
}
