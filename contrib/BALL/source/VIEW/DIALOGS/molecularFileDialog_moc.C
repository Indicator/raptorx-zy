/****************************************************************************
** Meta object code from reading C++ file 'molecularFileDialog.h'
**
** Created: Wed Mar 19 14:28:19 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/molecularFileDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'molecularFileDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__MolecularFileDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x0a,
      50,   32,   45,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__MolecularFileDialog[] = {
    "BALL::VIEW::MolecularFileDialog\0\0"
    "readFiles()\0bool\0writeFile()\0"
};

const QMetaObject BALL::VIEW::MolecularFileDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BALL__VIEW__MolecularFileDialog,
      qt_meta_data_BALL__VIEW__MolecularFileDialog, 0 }
};

const QMetaObject *BALL::VIEW::MolecularFileDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::MolecularFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__MolecularFileDialog))
	return static_cast<void*>(const_cast<MolecularFileDialog*>(this));
    if (!strcmp(_clname, "ModularWidget"))
	return static_cast<ModularWidget*>(const_cast<MolecularFileDialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int BALL::VIEW::MolecularFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: readFiles(); break;
        case 1: { bool _r = writeFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        }
        _id -= 2;
    }
    return _id;
}
