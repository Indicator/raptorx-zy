/****************************************************************************
** Meta object code from reading C++ file 'downloadPDBFile.h'
**
** Created: Wed Mar 19 14:28:19 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/downloadPDBFile.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'downloadPDBFile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__DownloadPDBFile[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x0a,
      44,   28,   28,   28, 0x0a,
      56,   28,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__DownloadPDBFile[] = {
    "BALL::VIEW::DownloadPDBFile\0\0"
    "slotDownload()\0idChanged()\0abort()\0"
};

const QMetaObject BALL::VIEW::DownloadPDBFile::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__DownloadPDBFile,
      qt_meta_data_BALL__VIEW__DownloadPDBFile, 0 }
};

const QMetaObject *BALL::VIEW::DownloadPDBFile::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::DownloadPDBFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__DownloadPDBFile))
	return static_cast<void*>(const_cast<DownloadPDBFile*>(this));
    if (!strcmp(_clname, "Ui_DownloadPDBFileData"))
	return static_cast<Ui_DownloadPDBFileData*>(const_cast<DownloadPDBFile*>(this));
    if (!strcmp(_clname, "ModularWidget"))
	return static_cast<ModularWidget*>(const_cast<DownloadPDBFile*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::DownloadPDBFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotDownload(); break;
        case 1: idChanged(); break;
        case 2: abort(); break;
        }
        _id -= 3;
    }
    return _id;
}
