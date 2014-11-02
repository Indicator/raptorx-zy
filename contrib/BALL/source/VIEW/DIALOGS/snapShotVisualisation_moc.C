/****************************************************************************
** Meta object code from reading C++ file 'snapShotVisualisation.h'
**
** Created: Wed Mar 19 14:28:20 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/BALL/VIEW/DIALOGS/snapShotVisualisation.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'snapShotVisualisation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_BALL__VIEW__SnapshotVisualisationDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      41,   40,   40,   40, 0x0a,
      48,   40,   40,   40, 0x0a,
      71,   40,   40,   40, 0x0a,
      91,   40,   40,   40, 0x0a,
     112,   40,   40,   40, 0x0a,
     132,   40,   40,   40, 0x0a,
     153,   40,   40,   40, 0x0a,
     177,   40,   40,   40, 0x0a,
     202,   40,   40,   40, 0x0a,
     224,   40,   40,   40, 0x0a,
     241,   40,   40,   40, 0x0a,
     261,   40,   40,   40, 0x0a,
     280,   40,   40,   40, 0x0a,
     304,   40,   40,   40, 0x0a,
     318,   40,   40,   40, 0x0a,
     330,   40,   40,   40, 0x0a,
     342,   40,   40,   40, 0x0a,
     358,   40,   40,   40, 0x09,
     379,   40,   40,   40, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BALL__VIEW__SnapshotVisualisationDialog[] = {
    "BALL::VIEW::SnapshotVisualisationDialog\0"
    "\0show()\0firstSnapshotClicked()\0"
    "oneForwardClicked()\0oneBackwardClicked()\0"
    "tenForwardClicked()\0tenBackwardClicked()\0"
    "hundredForwardClicked()\0"
    "hundredBackwardClicked()\0lastSnapshotClicked()\0"
    "animateClicked()\0snapShotInputTest()\0"
    "sliderMovedToPos()\0animationSpeedChanged()\0"
    "checkNoLoop()\0checkLoop()\0checkRock()\0"
    "cancelPressed()\0sliderDragStarted_()\0"
    "sliderDragEnded_()\0"
};

const QMetaObject BALL::VIEW::SnapshotVisualisationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BALL__VIEW__SnapshotVisualisationDialog,
      qt_meta_data_BALL__VIEW__SnapshotVisualisationDialog, 0 }
};

const QMetaObject *BALL::VIEW::SnapshotVisualisationDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BALL::VIEW::SnapshotVisualisationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BALL__VIEW__SnapshotVisualisationDialog))
	return static_cast<void*>(const_cast<SnapshotVisualisationDialog*>(this));
    if (!strcmp(_clname, "Ui_SnapshotVisualisationDialogData"))
	return static_cast<Ui_SnapshotVisualisationDialogData*>(const_cast<SnapshotVisualisationDialog*>(this));
    if (!strcmp(_clname, "ModularWidget"))
	return static_cast<ModularWidget*>(const_cast<SnapshotVisualisationDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BALL::VIEW::SnapshotVisualisationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: show(); break;
        case 1: firstSnapshotClicked(); break;
        case 2: oneForwardClicked(); break;
        case 3: oneBackwardClicked(); break;
        case 4: tenForwardClicked(); break;
        case 5: tenBackwardClicked(); break;
        case 6: hundredForwardClicked(); break;
        case 7: hundredBackwardClicked(); break;
        case 8: lastSnapshotClicked(); break;
        case 9: animateClicked(); break;
        case 10: snapShotInputTest(); break;
        case 11: sliderMovedToPos(); break;
        case 12: animationSpeedChanged(); break;
        case 13: checkNoLoop(); break;
        case 14: checkLoop(); break;
        case 15: checkRock(); break;
        case 16: cancelPressed(); break;
        case 17: sliderDragStarted_(); break;
        case 18: sliderDragEnded_(); break;
        }
        _id -= 19;
    }
    return _id;
}
