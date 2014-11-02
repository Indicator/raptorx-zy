/********************************************************************************
** Form generated from reading ui file 'editSettings.ui'
**
** Created: Wed Mar 19 14:28:17 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef EDITSETTINGSDATA_H
#define EDITSETTINGSDATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QWidget>

class Ui_EditSettingsData
{
public:
    QCheckBox *only_highlighted;

    void setupUi(QWidget *EditSettingsData)
    {
    EditSettingsData->setObjectName(QString::fromUtf8("EditSettingsData"));
    only_highlighted = new QCheckBox(EditSettingsData);
    only_highlighted->setObjectName(QString::fromUtf8("only_highlighted"));
    only_highlighted->setGeometry(QRect(10, 10, 379, 24));
    only_highlighted->setChecked(true);

    retranslateUi(EditSettingsData);

    QSize size(563, 435);
    size = size.expandedTo(EditSettingsData->minimumSizeHint());
    EditSettingsData->resize(size);


    QMetaObject::connectSlotsByName(EditSettingsData);
    } // setupUi

    void retranslateUi(QWidget *EditSettingsData)
    {
    EditSettingsData->setWindowTitle(QApplication::translate("EditSettingsData", "Editing", 0, QApplication::UnicodeUTF8));
    only_highlighted->setText(QApplication::translate("EditSettingsData", "only select atoms in highlighted container", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(EditSettingsData);
    } // retranslateUi

};

namespace Ui {
    class EditSettingsData: public Ui_EditSettingsData {};
} // namespace Ui

#endif // EDITSETTINGSDATA_H
