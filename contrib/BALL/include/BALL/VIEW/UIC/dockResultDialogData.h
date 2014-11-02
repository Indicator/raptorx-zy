/********************************************************************************
** Form generated from reading ui file 'dockResultDialog.ui'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef DOCKRESULTDIALOGDATA_H
#define DOCKRESULTDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>

class Ui_DockResultDialogData
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QGridLayout *gridLayout1;
    QPushButton *downwardButton;
    QPushButton *upwardButton;
    QPushButton *show_button;
    QPushButton *delete_score;
    QPushButton *scoring_opt;
    QSpacerItem *spacerItem1;
    QPushButton *close_button;
    QPushButton *redock;
    QPushButton *dock_opt_button;
    QGroupBox *reranking_group;
    QGridLayout *gridLayout2;
    QPushButton *scoring_button;
    QPushButton *advanced_button;
    QComboBox *scoring_functions;
    QSpacerItem *spacerItem2;
    QTableWidget *result_table;

    void setupUi(QDialog *DockResultDialogData)
    {
    DockResultDialogData->setObjectName(QString::fromUtf8("DockResultDialogData"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(DockResultDialogData->sizePolicy().hasHeightForWidth());
    DockResultDialogData->setSizePolicy(sizePolicy);
    DockResultDialogData->setModal(false);
    gridLayout = new QGridLayout(DockResultDialogData);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    spacerItem = new QSpacerItem(234, 44, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem, 3, 1, 1, 1);

    gridLayout1 = new QGridLayout();
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(0);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    downwardButton = new QPushButton(DockResultDialogData);
    downwardButton->setObjectName(QString::fromUtf8("downwardButton"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(downwardButton->sizePolicy().hasHeightForWidth());
    downwardButton->setSizePolicy(sizePolicy1);
    QFont font;
    font.setFamily(QString::fromUtf8("Sans Serif"));
    font.setPointSize(9);
    font.setBold(false);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(50);
    font.setStrikeOut(false);
    downwardButton->setFont(font);

    gridLayout1->addWidget(downwardButton, 1, 1, 1, 1);

    upwardButton = new QPushButton(DockResultDialogData);
    upwardButton->setObjectName(QString::fromUtf8("upwardButton"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(upwardButton->sizePolicy().hasHeightForWidth());
    upwardButton->setSizePolicy(sizePolicy2);
    QFont font1;
    font1.setFamily(QString::fromUtf8("Sans Serif"));
    font1.setPointSize(9);
    font1.setBold(false);
    font1.setItalic(false);
    font1.setUnderline(false);
    font1.setWeight(50);
    font1.setStrikeOut(false);
    upwardButton->setFont(font1);

    gridLayout1->addWidget(upwardButton, 1, 0, 1, 1);

    show_button = new QPushButton(DockResultDialogData);
    show_button->setObjectName(QString::fromUtf8("show_button"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(show_button->sizePolicy().hasHeightForWidth());
    show_button->setSizePolicy(sizePolicy3);

    gridLayout1->addWidget(show_button, 0, 0, 1, 2);


    gridLayout->addLayout(gridLayout1, 7, 1, 1, 1);

    delete_score = new QPushButton(DockResultDialogData);
    delete_score->setObjectName(QString::fromUtf8("delete_score"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(delete_score->sizePolicy().hasHeightForWidth());
    delete_score->setSizePolicy(sizePolicy4);

    gridLayout->addWidget(delete_score, 2, 1, 1, 1);

    scoring_opt = new QPushButton(DockResultDialogData);
    scoring_opt->setObjectName(QString::fromUtf8("scoring_opt"));
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(scoring_opt->sizePolicy().hasHeightForWidth());
    scoring_opt->setSizePolicy(sizePolicy5);

    gridLayout->addWidget(scoring_opt, 1, 1, 1, 1);

    spacerItem1 = new QSpacerItem(234, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem1, 6, 1, 1, 1);

    close_button = new QPushButton(DockResultDialogData);
    close_button->setObjectName(QString::fromUtf8("close_button"));
    QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
    sizePolicy6.setHorizontalStretch(0);
    sizePolicy6.setVerticalStretch(0);
    sizePolicy6.setHeightForWidth(close_button->sizePolicy().hasHeightForWidth());
    close_button->setSizePolicy(sizePolicy6);

    gridLayout->addWidget(close_button, 9, 1, 1, 1);

    redock = new QPushButton(DockResultDialogData);
    redock->setObjectName(QString::fromUtf8("redock"));
    QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
    sizePolicy7.setHorizontalStretch(0);
    sizePolicy7.setVerticalStretch(0);
    sizePolicy7.setHeightForWidth(redock->sizePolicy().hasHeightForWidth());
    redock->setSizePolicy(sizePolicy7);

    gridLayout->addWidget(redock, 5, 1, 1, 1);

    dock_opt_button = new QPushButton(DockResultDialogData);
    dock_opt_button->setObjectName(QString::fromUtf8("dock_opt_button"));
    QSizePolicy sizePolicy8(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
    sizePolicy8.setHorizontalStretch(0);
    sizePolicy8.setVerticalStretch(0);
    sizePolicy8.setHeightForWidth(dock_opt_button->sizePolicy().hasHeightForWidth());
    dock_opt_button->setSizePolicy(sizePolicy8);

    gridLayout->addWidget(dock_opt_button, 4, 1, 1, 1);

    reranking_group = new QGroupBox(DockResultDialogData);
    reranking_group->setObjectName(QString::fromUtf8("reranking_group"));
    QSizePolicy sizePolicy9(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(1));
    sizePolicy9.setHorizontalStretch(0);
    sizePolicy9.setVerticalStretch(0);
    sizePolicy9.setHeightForWidth(reranking_group->sizePolicy().hasHeightForWidth());
    reranking_group->setSizePolicy(sizePolicy9);
    reranking_group->setMinimumSize(QSize(234, 16));
    gridLayout2 = new QGridLayout(reranking_group);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(9);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    scoring_button = new QPushButton(reranking_group);
    scoring_button->setObjectName(QString::fromUtf8("scoring_button"));
    QSizePolicy sizePolicy10(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
    sizePolicy10.setHorizontalStretch(0);
    sizePolicy10.setVerticalStretch(0);
    sizePolicy10.setHeightForWidth(scoring_button->sizePolicy().hasHeightForWidth());
    scoring_button->setSizePolicy(sizePolicy10);

    gridLayout2->addWidget(scoring_button, 2, 0, 1, 1);

    advanced_button = new QPushButton(reranking_group);
    advanced_button->setObjectName(QString::fromUtf8("advanced_button"));
    advanced_button->setEnabled(false);
    QSizePolicy sizePolicy11(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
    sizePolicy11.setHorizontalStretch(0);
    sizePolicy11.setVerticalStretch(0);
    sizePolicy11.setHeightForWidth(advanced_button->sizePolicy().hasHeightForWidth());
    advanced_button->setSizePolicy(sizePolicy11);

    gridLayout2->addWidget(advanced_button, 1, 0, 1, 1);

    scoring_functions = new QComboBox(reranking_group);
    scoring_functions->setObjectName(QString::fromUtf8("scoring_functions"));
    QSizePolicy sizePolicy12(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
    sizePolicy12.setHorizontalStretch(0);
    sizePolicy12.setVerticalStretch(0);
    sizePolicy12.setHeightForWidth(scoring_functions->sizePolicy().hasHeightForWidth());
    scoring_functions->setSizePolicy(sizePolicy12);
    scoring_functions->setMinimumSize(QSize(140, 0));

    gridLayout2->addWidget(scoring_functions, 0, 0, 1, 1);


    gridLayout->addWidget(reranking_group, 0, 1, 1, 1);

    spacerItem2 = new QSpacerItem(234, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem2, 8, 1, 1, 1);

    result_table = new QTableWidget(DockResultDialogData);
    result_table->setObjectName(QString::fromUtf8("result_table"));
    result_table->setEnabled(true);
    QSizePolicy sizePolicy13(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy13.setHorizontalStretch(0);
    sizePolicy13.setVerticalStretch(0);
    sizePolicy13.setHeightForWidth(result_table->sizePolicy().hasHeightForWidth());
    result_table->setSizePolicy(sizePolicy13);
    result_table->setMinimumSize(QSize(216, 0));
    result_table->setMouseTracking(false);
    result_table->setFocusPolicy(Qt::WheelFocus);
    result_table->setAcceptDrops(false);

    gridLayout->addWidget(result_table, 0, 0, 10, 1);

    QWidget::setTabOrder(result_table, scoring_functions);
    QWidget::setTabOrder(scoring_functions, advanced_button);
    QWidget::setTabOrder(advanced_button, scoring_button);
    QWidget::setTabOrder(scoring_button, scoring_opt);
    QWidget::setTabOrder(scoring_opt, delete_score);
    QWidget::setTabOrder(delete_score, dock_opt_button);
    QWidget::setTabOrder(dock_opt_button, redock);
    QWidget::setTabOrder(redock, show_button);
    QWidget::setTabOrder(show_button, upwardButton);
    QWidget::setTabOrder(upwardButton, downwardButton);
    QWidget::setTabOrder(downwardButton, close_button);

    retranslateUi(DockResultDialogData);

    QSize size(518, 546);
    size = size.expandedTo(DockResultDialogData->minimumSizeHint());
    DockResultDialogData->resize(size);


    QMetaObject::connectSlotsByName(DockResultDialogData);
    } // setupUi

    void retranslateUi(QDialog *DockResultDialogData)
    {
    DockResultDialogData->setWindowTitle(QApplication::translate("DockResultDialogData", "Docking Results", 0, QApplication::UnicodeUTF8));
    downwardButton->setText(QApplication::translate("DockResultDialogData", "Down", 0, QApplication::UnicodeUTF8));
    upwardButton->setText(QApplication::translate("DockResultDialogData", "Up", 0, QApplication::UnicodeUTF8));
    show_button->setText(QApplication::translate("DockResultDialogData", "Show snapshot", 0, QApplication::UnicodeUTF8));
    delete_score->setText(QApplication::translate("DockResultDialogData", "Delete Scoring", 0, QApplication::UnicodeUTF8));
    scoring_opt->setText(QApplication::translate("DockResultDialogData", "Scoring Options", 0, QApplication::UnicodeUTF8));
    close_button->setText(QApplication::translate("DockResultDialogData", "Close", 0, QApplication::UnicodeUTF8));
    redock->setText(QApplication::translate("DockResultDialogData", "Redock", 0, QApplication::UnicodeUTF8));
    dock_opt_button->setText(QApplication::translate("DockResultDialogData", "Docking Options", 0, QApplication::UnicodeUTF8));
    reranking_group->setTitle(QApplication::translate("DockResultDialogData", "Reranking", 0, QApplication::UnicodeUTF8));
    scoring_button->setText(QApplication::translate("DockResultDialogData", "New Scoring", 0, QApplication::UnicodeUTF8));
    advanced_button->setText(QApplication::translate("DockResultDialogData", "Advanced...", 0, QApplication::UnicodeUTF8));
    if (result_table->columnCount() < 1)
        result_table->setColumnCount(1);

    QTableWidgetItem *__colItem = new QTableWidgetItem();
    __colItem->setText(QApplication::translate("DockResultDialogData", "snapshot", 0, QApplication::UnicodeUTF8));
    result_table->setHorizontalHeaderItem(0, __colItem);
    Q_UNUSED(DockResultDialogData);
    } // retranslateUi

};

namespace Ui {
    class DockResultDialogData: public Ui_DockResultDialogData {};
} // namespace Ui

#endif // DOCKRESULTDIALOGDATA_H
