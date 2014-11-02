/****************************************************************************
** Meta object code from reading C++ file 'atomOverview.h'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/atomOverview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'atomOverview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__AtomOverview[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x09,
      40,   35,   25,   25, 0x09,
      71,   35,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__AtomOverview[] = {
    "BALL::VIEW::AtomOverview\0\0accept()\0"
    "item\0itemChanged(QTableWidgetItem*)\0"
    "itemActivated(QTableWidgetItem*)\0"
};

const QMetaObject BALL::VIEW::AtomOverview::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__AtomOverview,
      qt_meta_data_BALL__VIEW__AtomOverview, 0 }
};

const QMetaObject *BALL::VIEW::AtomOverview::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::AtomOverview::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__AtomOverview))
	return static_cast<void*>(const_cast<AtomOverview*>(this));
    if (!strcmp(_clname, "Ui_AtomOverviewData"))
	return static_cast<Ui_AtomOverviewData*>(const_cast<AtomOverview*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::AtomOverview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: accept(); break;
        case 1: itemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 2: itemActivated((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        }
        _id -= 3;
    }
    return _id;
}
