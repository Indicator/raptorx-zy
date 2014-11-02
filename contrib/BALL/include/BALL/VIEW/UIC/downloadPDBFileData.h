/********************************************************************************
** Form generated from reading ui file 'downloadPDBFile.ui'
**
** Created: Wed Mar 19 14:28:17 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef DOWNLOADPDBFILEDATA_H
#define DOWNLOADPDBFILEDATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

class Ui_DownloadPDBFileData
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QComboBox *pdbId;
    QPushButton *download;
    QPushButton *buttonClose;
    QPushButton *button_abort;

    void setupUi(QDialog *DownloadPDBFileData)
    {
    DownloadPDBFileData->setObjectName(QString::fromUtf8("DownloadPDBFileData"));
    gridLayout = new QGridLayout(DownloadPDBFileData);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    textLabel1 = new QLabel(DownloadPDBFileData);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    textLabel1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

    pdbId = new QComboBox(DownloadPDBFileData);
    pdbId->setObjectName(QString::fromUtf8("pdbId"));
    pdbId->setEditable(true);
    pdbId->setMaxVisibleItems(100);
    pdbId->setInsertPolicy(QComboBox::InsertAtTop);
    pdbId->setMinimumContentsLength(4);

    gridLayout->addWidget(pdbId, 0, 1, 1, 2);

    download = new QPushButton(DownloadPDBFileData);
    download->setObjectName(QString::fromUtf8("download"));
    download->setEnabled(false);
    download->setMinimumSize(QSize(0, 30));
    download->setDefault(true);

    gridLayout->addWidget(download, 1, 0, 1, 1);

    buttonClose = new QPushButton(DownloadPDBFileData);
    buttonClose->setObjectName(QString::fromUtf8("buttonClose"));
    buttonClose->setMinimumSize(QSize(0, 30));
    buttonClose->setAutoDefault(true);

    gridLayout->addWidget(buttonClose, 1, 2, 1, 1);

    button_abort = new QPushButton(DownloadPDBFileData);
    button_abort->setObjectName(QString::fromUtf8("button_abort"));
    button_abort->setEnabled(false);
    button_abort->setMinimumSize(QSize(0, 30));
    button_abort->setAutoDefault(true);

    gridLayout->addWidget(button_abort, 1, 1, 1, 1);

    QWidget::setTabOrder(pdbId, download);
    QWidget::setTabOrder(download, button_abort);
    QWidget::setTabOrder(button_abort, buttonClose);

    retranslateUi(DownloadPDBFileData);

    QSize size(351, 77);
    size = size.expandedTo(DownloadPDBFileData->minimumSizeHint());
    DownloadPDBFileData->resize(size);


    QMetaObject::connectSlotsByName(DownloadPDBFileData);
    } // setupUi

    void retranslateUi(QDialog *DownloadPDBFileData)
    {
    DownloadPDBFileData->setWindowTitle(QApplication::translate("DownloadPDBFileData", "Download a structure file from www.rcsb.org", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("DownloadPDBFileData", "PDB ID", 0, QApplication::UnicodeUTF8));
    pdbId->setToolTip(QApplication::translate("DownloadPDBFileData", "Enter PDB ID", 0, QApplication::UnicodeUTF8));
    download->setToolTip(QApplication::translate("DownloadPDBFileData", "Download PDB file", 0, QApplication::UnicodeUTF8));
    download->setText(QApplication::translate("DownloadPDBFileData", "Download", 0, QApplication::UnicodeUTF8));
    download->setShortcut(QString());
    buttonClose->setToolTip(QApplication::translate("DownloadPDBFileData", "Close window", 0, QApplication::UnicodeUTF8));
    buttonClose->setText(QApplication::translate("DownloadPDBFileData", "C&ancel", 0, QApplication::UnicodeUTF8));
    buttonClose->setShortcut(QApplication::translate("DownloadPDBFileData", "Alt+A", 0, QApplication::UnicodeUTF8));
    button_abort->setToolTip(QApplication::translate("DownloadPDBFileData", "Abort download", 0, QApplication::UnicodeUTF8));
    button_abort->setText(QApplication::translate("DownloadPDBFileData", "&Abort", 0, QApplication::UnicodeUTF8));
    button_abort->setShortcut(QApplication::translate("DownloadPDBFileData", "Alt+A", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(DownloadPDBFileData);
    } // retranslateUi

};

namespace Ui {
    class DownloadPDBFileData: public Ui_DownloadPDBFileData {};
} // namespace Ui

#endif // DOWNLOADPDBFILEDATA_H
