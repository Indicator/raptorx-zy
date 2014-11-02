/********************************************************************************
** Form generated from reading ui file 'dockProgressDialog.ui'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef DOCKPROGRESSDIALOGDATA_H
#define DOCKPROGRESSDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>

class Ui_DockProgressDialogData
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QTextEdit *general_params;
    QSpacerItem *spacerItem;
    QGridLayout *gridLayout1;
    QLabel *remaining_time;
    QPushButton *pause_button;
    QProgressBar *progress_bar;
    QLabel *time_label;
    QPushButton *abort_button;
    QTextEdit *options;

    void setupUi(QDialog *DockProgressDialogData)
    {
    DockProgressDialogData->setObjectName(QString::fromUtf8("DockProgressDialogData"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(DockProgressDialogData->sizePolicy().hasHeightForWidth());
    DockProgressDialogData->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(DockProgressDialogData);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    textLabel1 = new QLabel(DockProgressDialogData);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
    textLabel1->setSizePolicy(sizePolicy1);

    gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

    general_params = new QTextEdit(DockProgressDialogData);
    general_params->setObjectName(QString::fromUtf8("general_params"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(1));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(general_params->sizePolicy().hasHeightForWidth());
    general_params->setSizePolicy(sizePolicy2);
    general_params->setMinimumSize(QSize(250, 120));
    general_params->setMaximumSize(QSize(32767, 120));
    general_params->setReadOnly(true);

    gridLayout->addWidget(general_params, 1, 0, 1, 1);

    spacerItem = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem, 2, 0, 1, 1);

    gridLayout1 = new QGridLayout();
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(0);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    remaining_time = new QLabel(DockProgressDialogData);
    remaining_time->setObjectName(QString::fromUtf8("remaining_time"));

    gridLayout1->addWidget(remaining_time, 0, 1, 1, 1);

    pause_button = new QPushButton(DockProgressDialogData);
    pause_button->setObjectName(QString::fromUtf8("pause_button"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(pause_button->sizePolicy().hasHeightForWidth());
    pause_button->setSizePolicy(sizePolicy3);
    pause_button->setMinimumSize(QSize(110, 0));

    gridLayout1->addWidget(pause_button, 2, 0, 1, 1);

    progress_bar = new QProgressBar(DockProgressDialogData);
    progress_bar->setObjectName(QString::fromUtf8("progress_bar"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(progress_bar->sizePolicy().hasHeightForWidth());
    progress_bar->setSizePolicy(sizePolicy4);
    progress_bar->setMinimumSize(QSize(200, 0));
    progress_bar->setOrientation(Qt::Horizontal);

    gridLayout1->addWidget(progress_bar, 1, 0, 1, 2);

    time_label = new QLabel(DockProgressDialogData);
    time_label->setObjectName(QString::fromUtf8("time_label"));

    gridLayout1->addWidget(time_label, 0, 0, 1, 1);

    abort_button = new QPushButton(DockProgressDialogData);
    abort_button->setObjectName(QString::fromUtf8("abort_button"));
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(abort_button->sizePolicy().hasHeightForWidth());
    abort_button->setSizePolicy(sizePolicy5);
    abort_button->setMinimumSize(QSize(110, 0));

    gridLayout1->addWidget(abort_button, 2, 1, 1, 1);


    gridLayout->addLayout(gridLayout1, 3, 0, 1, 1);

    options = new QTextEdit(DockProgressDialogData);
    options->setObjectName(QString::fromUtf8("options"));
    options->setMinimumSize(QSize(350, 300));
    options->setReadOnly(true);

    gridLayout->addWidget(options, 1, 1, 3, 1);


    retranslateUi(DockProgressDialogData);

    QSize size(630, 388);
    size = size.expandedTo(DockProgressDialogData->minimumSizeHint());
    DockProgressDialogData->resize(size);


    QMetaObject::connectSlotsByName(DockProgressDialogData);
    } // setupUi

    void retranslateUi(QDialog *DockProgressDialogData)
    {
    DockProgressDialogData->setWindowTitle(QApplication::translate("DockProgressDialogData", "Docking Progress", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("DockProgressDialogData", "<b>Chosen Parameters</b>", 0, QApplication::UnicodeUTF8));
    remaining_time->setText(QString());
    pause_button->setText(QApplication::translate("DockProgressDialogData", "Pause", 0, QApplication::UnicodeUTF8));
    time_label->setText(QApplication::translate("DockProgressDialogData", "Remaining time:", 0, QApplication::UnicodeUTF8));
    abort_button->setText(QApplication::translate("DockProgressDialogData", "Abort", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(DockProgressDialogData);
    } // retranslateUi

};

namespace Ui {
    class DockProgressDialogData: public Ui_DockProgressDialogData {};
} // namespace Ui

#endif // DOCKPROGRESSDIALOGDATA_H
