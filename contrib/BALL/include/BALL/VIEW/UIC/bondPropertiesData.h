/********************************************************************************
** Form generated from reading ui file 'bondProperties.ui'
**
** Created: Wed Mar 19 14:28:17 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef BONDPROPERTIESDATA_H
#define BONDPROPERTIESDATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

class Ui_BondPropertiesData
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QPushButton *ok_button;
    QPushButton *cancel_button;
    QLabel *TextLabel1;
    QLineEdit *name_edit;
    QLineEdit *partner_edit;
    QLineEdit *order_edit;
    QLineEdit *length_edit;
    QLabel *TextLabel2;
    QLabel *TextLabel2_2;
    QLabel *TextLabel8;
    QLabel *TextLabel4;
    QLabel *TextLabel7;
    QLabel *TextLabel5;
    QLineEdit *atom_edit;
    QLineEdit *type_edit;
    QComboBox *bond_box;
    QPushButton *focus_atom;
    QPushButton *focus_partner;

    void setupUi(QDialog *BondPropertiesData)
    {
    BondPropertiesData->setObjectName(QString::fromUtf8("BondPropertiesData"));
    gridLayout = new QGridLayout(BondPropertiesData);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(4);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    spacerItem = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem, 7, 1, 1, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    ok_button = new QPushButton(BondPropertiesData);
    ok_button->setObjectName(QString::fromUtf8("ok_button"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(ok_button->sizePolicy().hasHeightForWidth());
    ok_button->setSizePolicy(sizePolicy);
    ok_button->setMinimumSize(QSize(120, 26));
    ok_button->setDefault(true);

    hboxLayout->addWidget(ok_button);

    cancel_button = new QPushButton(BondPropertiesData);
    cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(cancel_button->sizePolicy().hasHeightForWidth());
    cancel_button->setSizePolicy(sizePolicy1);
    cancel_button->setMinimumSize(QSize(120, 26));
    cancel_button->setDefault(true);

    hboxLayout->addWidget(cancel_button);


    gridLayout->addLayout(hboxLayout, 8, 0, 1, 3);

    TextLabel1 = new QLabel(BondPropertiesData);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));

    gridLayout->addWidget(TextLabel1, 0, 0, 1, 1);

    name_edit = new QLineEdit(BondPropertiesData);
    name_edit->setObjectName(QString::fromUtf8("name_edit"));
    name_edit->setEnabled(false);
    name_edit->setReadOnly(true);

    gridLayout->addWidget(name_edit, 5, 1, 1, 1);

    partner_edit = new QLineEdit(BondPropertiesData);
    partner_edit->setObjectName(QString::fromUtf8("partner_edit"));
    partner_edit->setReadOnly(true);

    gridLayout->addWidget(partner_edit, 2, 1, 1, 1);

    order_edit = new QLineEdit(BondPropertiesData);
    order_edit->setObjectName(QString::fromUtf8("order_edit"));
    order_edit->setReadOnly(true);

    gridLayout->addWidget(order_edit, 3, 1, 1, 1);

    length_edit = new QLineEdit(BondPropertiesData);
    length_edit->setObjectName(QString::fromUtf8("length_edit"));
    length_edit->setEnabled(false);
    length_edit->setReadOnly(true);

    gridLayout->addWidget(length_edit, 6, 1, 1, 1);

    TextLabel2 = new QLabel(BondPropertiesData);
    TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));

    gridLayout->addWidget(TextLabel2, 1, 0, 1, 1);

    TextLabel2_2 = new QLabel(BondPropertiesData);
    TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));

    gridLayout->addWidget(TextLabel2_2, 2, 0, 1, 1);

    TextLabel8 = new QLabel(BondPropertiesData);
    TextLabel8->setObjectName(QString::fromUtf8("TextLabel8"));

    gridLayout->addWidget(TextLabel8, 3, 0, 1, 1);

    TextLabel4 = new QLabel(BondPropertiesData);
    TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));

    gridLayout->addWidget(TextLabel4, 4, 0, 1, 1);

    TextLabel7 = new QLabel(BondPropertiesData);
    TextLabel7->setObjectName(QString::fromUtf8("TextLabel7"));

    gridLayout->addWidget(TextLabel7, 5, 0, 1, 1);

    TextLabel5 = new QLabel(BondPropertiesData);
    TextLabel5->setObjectName(QString::fromUtf8("TextLabel5"));

    gridLayout->addWidget(TextLabel5, 6, 0, 1, 1);

    atom_edit = new QLineEdit(BondPropertiesData);
    atom_edit->setObjectName(QString::fromUtf8("atom_edit"));
    atom_edit->setReadOnly(true);

    gridLayout->addWidget(atom_edit, 0, 1, 1, 1);

    type_edit = new QLineEdit(BondPropertiesData);
    type_edit->setObjectName(QString::fromUtf8("type_edit"));
    type_edit->setReadOnly(true);

    gridLayout->addWidget(type_edit, 4, 1, 1, 1);

    bond_box = new QComboBox(BondPropertiesData);
    bond_box->setObjectName(QString::fromUtf8("bond_box"));

    gridLayout->addWidget(bond_box, 1, 1, 1, 1);

    focus_atom = new QPushButton(BondPropertiesData);
    focus_atom->setObjectName(QString::fromUtf8("focus_atom"));
    focus_atom->setMinimumSize(QSize(36, 23));

    gridLayout->addWidget(focus_atom, 0, 2, 1, 1);

    focus_partner = new QPushButton(BondPropertiesData);
    focus_partner->setObjectName(QString::fromUtf8("focus_partner"));
    focus_partner->setMinimumSize(QSize(36, 23));

    gridLayout->addWidget(focus_partner, 2, 2, 1, 1);

    QWidget::setTabOrder(atom_edit, focus_atom);
    QWidget::setTabOrder(focus_atom, bond_box);
    QWidget::setTabOrder(bond_box, partner_edit);
    QWidget::setTabOrder(partner_edit, focus_partner);
    QWidget::setTabOrder(focus_partner, order_edit);
    QWidget::setTabOrder(order_edit, type_edit);
    QWidget::setTabOrder(type_edit, name_edit);
    QWidget::setTabOrder(name_edit, length_edit);
    QWidget::setTabOrder(length_edit, ok_button);
    QWidget::setTabOrder(ok_button, cancel_button);

    retranslateUi(BondPropertiesData);

    QSize size(426, 290);
    size = size.expandedTo(BondPropertiesData->minimumSizeHint());
    BondPropertiesData->resize(size);


    QMetaObject::connectSlotsByName(BondPropertiesData);
    } // setupUi

    void retranslateUi(QDialog *BondPropertiesData)
    {
    BondPropertiesData->setWindowTitle(QApplication::translate("BondPropertiesData", "Bond Properties", 0, QApplication::UnicodeUTF8));
    ok_button->setText(QApplication::translate("BondPropertiesData", "O&K", 0, QApplication::UnicodeUTF8));
    ok_button->setShortcut(QApplication::translate("BondPropertiesData", "Alt+K", 0, QApplication::UnicodeUTF8));
    cancel_button->setText(QApplication::translate("BondPropertiesData", "C&ancel", 0, QApplication::UnicodeUTF8));
    cancel_button->setShortcut(QApplication::translate("BondPropertiesData", "Alt+A", 0, QApplication::UnicodeUTF8));
    TextLabel1->setText(QApplication::translate("BondPropertiesData", "atom", 0, QApplication::UnicodeUTF8));
    name_edit->setText(QString());
    TextLabel2->setText(QApplication::translate("BondPropertiesData", "select bond", 0, QApplication::UnicodeUTF8));
    TextLabel2_2->setText(QApplication::translate("BondPropertiesData", "partner atom", 0, QApplication::UnicodeUTF8));
    TextLabel8->setText(QApplication::translate("BondPropertiesData", "bond order", 0, QApplication::UnicodeUTF8));
    TextLabel4->setText(QApplication::translate("BondPropertiesData", "bond type", 0, QApplication::UnicodeUTF8));
    TextLabel7->setText(QApplication::translate("BondPropertiesData", "name", 0, QApplication::UnicodeUTF8));
    TextLabel5->setText(QApplication::translate("BondPropertiesData", "length", 0, QApplication::UnicodeUTF8));
    bond_box->setToolTip(QApplication::translate("BondPropertiesData", "Select bond type", 0, QApplication::UnicodeUTF8));
    focus_atom->setToolTip(QApplication::translate("BondPropertiesData", "focus and select atom", 0, QApplication::UnicodeUTF8));
    focus_atom->setText(QApplication::translate("BondPropertiesData", "Select", 0, QApplication::UnicodeUTF8));
    focus_partner->setToolTip(QApplication::translate("BondPropertiesData", "focus and select atom", 0, QApplication::UnicodeUTF8));
    focus_partner->setText(QApplication::translate("BondPropertiesData", "Select", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(BondPropertiesData);
    } // retranslateUi

};

namespace Ui {
    class BondPropertiesData: public Ui_BondPropertiesData {};
} // namespace Ui

#endif // BONDPROPERTIESDATA_H
