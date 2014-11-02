/********************************************************************************
** Form generated from reading ui file 'atomOverview.ui'
**
** Created: Wed Mar 19 14:28:17 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef ATOMOVERVIEWDATA_H
#define ATOMOVERVIEWDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>

class Ui_AtomOverviewData
{
public:
    QGridLayout *gridLayout;
    QTableWidget *table;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *AtomOverviewData)
    {
    AtomOverviewData->setObjectName(QString::fromUtf8("AtomOverviewData"));
    gridLayout = new QGridLayout(AtomOverviewData);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    table = new QTableWidget(AtomOverviewData);
    table->setObjectName(QString::fromUtf8("table"));
    table->setAlternatingRowColors(true);
    table->setSelectionMode(QAbstractItemView::NoSelection);

    gridLayout->addWidget(table, 0, 0, 1, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    okButton = new QPushButton(AtomOverviewData);
    okButton->setObjectName(QString::fromUtf8("okButton"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
    okButton->setSizePolicy(sizePolicy);

    hboxLayout->addWidget(okButton);

    cancelButton = new QPushButton(AtomOverviewData);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
    cancelButton->setSizePolicy(sizePolicy1);

    hboxLayout->addWidget(cancelButton);


    gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);


    retranslateUi(AtomOverviewData);

    QSize size(508, 483);
    size = size.expandedTo(AtomOverviewData->minimumSizeHint());
    AtomOverviewData->resize(size);

    QObject::connect(okButton, SIGNAL(clicked()), AtomOverviewData, SLOT(accept()));
    QObject::connect(cancelButton, SIGNAL(clicked()), AtomOverviewData, SLOT(reject()));

    QMetaObject::connectSlotsByName(AtomOverviewData);
    } // setupUi

    void retranslateUi(QDialog *AtomOverviewData)
    {
    AtomOverviewData->setWindowTitle(QApplication::translate("AtomOverviewData", "Atom Overiew", 0, QApplication::UnicodeUTF8));
    okButton->setText(QApplication::translate("AtomOverviewData", "OK", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("AtomOverviewData", "Cancel", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(AtomOverviewData);
    } // retranslateUi

};

namespace Ui {
    class AtomOverviewData: public Ui_AtomOverviewData {};
} // namespace Ui

#endif // ATOMOVERVIEWDATA_H
