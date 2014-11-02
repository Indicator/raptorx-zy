/********************************************************************************
** Form generated from reading ui file 'compositeProperties.ui'
**
** Created: Wed Mar 19 14:28:17 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef COMPOSITEPROPERTIESDATA_H
#define COMPOSITEPROPERTIESDATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

class Ui_CompositePropertiesData
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *ok_button;
    QPushButton *cancel_button;
    QGroupBox *atoms_box;
    QGridLayout *gridLayout1;
    QLabel *TextLabel7;
    QLineEdit *formal_charge_edit;
    QLabel *TextLabel4_2;
    QLineEdit *charge_edit;
    QLabel *TextLabel4;
    QLineEdit *force_edit;
    QLabel *TextLabel6;
    QLabel *TextLabel5;
    QLineEdit *position_edit;
    QLineEdit *velocity_edit;
    QLineEdit *type_name_edit;
    QLineEdit *radius_edit;
    QLabel *TextLabel8;
    QLineEdit *type_edit;
    QLabel *TextLabel3;
    QComboBox *element_box;
    QLabel *TextLabel2_2;
    QLabel *TextLabel2;
    QSpacerItem *spacerItem;
    QGroupBox *residues_box;
    QLabel *textLabel1_2;
    QLineEdit *id_edit;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel1;
    QLineEdit *name_edit;

    void setupUi(QDialog *CompositePropertiesData)
    {
    CompositePropertiesData->setObjectName(QString::fromUtf8("CompositePropertiesData"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(CompositePropertiesData->sizePolicy().hasHeightForWidth());
    CompositePropertiesData->setSizePolicy(sizePolicy);
    CompositePropertiesData->setMinimumSize(QSize(400, 517));
    CompositePropertiesData->setMaximumSize(QSize(400, 517));
    gridLayout = new QGridLayout(CompositePropertiesData);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    ok_button = new QPushButton(CompositePropertiesData);
    ok_button->setObjectName(QString::fromUtf8("ok_button"));
    ok_button->setMinimumSize(QSize(186, 30));
    ok_button->setMaximumSize(QSize(32767, 30));
    ok_button->setDefault(true);

    hboxLayout->addWidget(ok_button);

    cancel_button = new QPushButton(CompositePropertiesData);
    cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
    cancel_button->setMinimumSize(QSize(186, 30));
    cancel_button->setMaximumSize(QSize(32767, 30));

    hboxLayout->addWidget(cancel_button);


    gridLayout->addLayout(hboxLayout, 5, 0, 1, 2);

    atoms_box = new QGroupBox(CompositePropertiesData);
    atoms_box->setObjectName(QString::fromUtf8("atoms_box"));
    gridLayout1 = new QGridLayout(atoms_box);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(9);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    TextLabel7 = new QLabel(atoms_box);
    TextLabel7->setObjectName(QString::fromUtf8("TextLabel7"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(TextLabel7->sizePolicy().hasHeightForWidth());
    TextLabel7->setSizePolicy(sizePolicy1);
    TextLabel7->setMinimumSize(QSize(90, 0));
    TextLabel7->setMaximumSize(QSize(100, 32767));
    TextLabel7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout1->addWidget(TextLabel7, 6, 0, 1, 1);

    formal_charge_edit = new QLineEdit(atoms_box);
    formal_charge_edit->setObjectName(QString::fromUtf8("formal_charge_edit"));

    gridLayout1->addWidget(formal_charge_edit, 5, 1, 1, 1);

    TextLabel4_2 = new QLabel(atoms_box);
    TextLabel4_2->setObjectName(QString::fromUtf8("TextLabel4_2"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(TextLabel4_2->sizePolicy().hasHeightForWidth());
    TextLabel4_2->setSizePolicy(sizePolicy2);
    TextLabel4_2->setMinimumSize(QSize(90, 0));
    TextLabel4_2->setMaximumSize(QSize(100, 32767));
    TextLabel4_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout1->addWidget(TextLabel4_2, 5, 0, 1, 1);

    charge_edit = new QLineEdit(atoms_box);
    charge_edit->setObjectName(QString::fromUtf8("charge_edit"));

    gridLayout1->addWidget(charge_edit, 4, 1, 1, 1);

    TextLabel4 = new QLabel(atoms_box);
    TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(TextLabel4->sizePolicy().hasHeightForWidth());
    TextLabel4->setSizePolicy(sizePolicy3);
    TextLabel4->setMinimumSize(QSize(90, 0));
    TextLabel4->setMaximumSize(QSize(100, 32767));
    TextLabel4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout1->addWidget(TextLabel4, 4, 0, 1, 1);

    force_edit = new QLineEdit(atoms_box);
    force_edit->setObjectName(QString::fromUtf8("force_edit"));

    gridLayout1->addWidget(force_edit, 8, 1, 1, 1);

    TextLabel6 = new QLabel(atoms_box);
    TextLabel6->setObjectName(QString::fromUtf8("TextLabel6"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(TextLabel6->sizePolicy().hasHeightForWidth());
    TextLabel6->setSizePolicy(sizePolicy4);
    TextLabel6->setMinimumSize(QSize(90, 0));
    TextLabel6->setMaximumSize(QSize(100, 32767));
    TextLabel6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout1->addWidget(TextLabel6, 8, 0, 1, 1);

    TextLabel5 = new QLabel(atoms_box);
    TextLabel5->setObjectName(QString::fromUtf8("TextLabel5"));
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(TextLabel5->sizePolicy().hasHeightForWidth());
    TextLabel5->setSizePolicy(sizePolicy5);
    TextLabel5->setMinimumSize(QSize(90, 0));
    TextLabel5->setMaximumSize(QSize(100, 32767));
    TextLabel5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout1->addWidget(TextLabel5, 7, 0, 1, 1);

    position_edit = new QLineEdit(atoms_box);
    position_edit->setObjectName(QString::fromUtf8("position_edit"));

    gridLayout1->addWidget(position_edit, 6, 1, 1, 1);

    velocity_edit = new QLineEdit(atoms_box);
    velocity_edit->setObjectName(QString::fromUtf8("velocity_edit"));

    gridLayout1->addWidget(velocity_edit, 7, 1, 1, 1);

    type_name_edit = new QLineEdit(atoms_box);
    type_name_edit->setObjectName(QString::fromUtf8("type_name_edit"));

    gridLayout1->addWidget(type_name_edit, 0, 1, 1, 1);

    radius_edit = new QLineEdit(atoms_box);
    radius_edit->setObjectName(QString::fromUtf8("radius_edit"));

    gridLayout1->addWidget(radius_edit, 3, 1, 1, 1);

    TextLabel8 = new QLabel(atoms_box);
    TextLabel8->setObjectName(QString::fromUtf8("TextLabel8"));
    QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
    sizePolicy6.setHorizontalStretch(0);
    sizePolicy6.setVerticalStretch(0);
    sizePolicy6.setHeightForWidth(TextLabel8->sizePolicy().hasHeightForWidth());
    TextLabel8->setSizePolicy(sizePolicy6);
    TextLabel8->setMinimumSize(QSize(90, 0));
    TextLabel8->setMaximumSize(QSize(100, 32767));
    TextLabel8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout1->addWidget(TextLabel8, 3, 0, 1, 1);

    type_edit = new QLineEdit(atoms_box);
    type_edit->setObjectName(QString::fromUtf8("type_edit"));

    gridLayout1->addWidget(type_edit, 1, 1, 1, 1);

    TextLabel3 = new QLabel(atoms_box);
    TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
    QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
    sizePolicy7.setHorizontalStretch(0);
    sizePolicy7.setVerticalStretch(0);
    sizePolicy7.setHeightForWidth(TextLabel3->sizePolicy().hasHeightForWidth());
    TextLabel3->setSizePolicy(sizePolicy7);
    TextLabel3->setMinimumSize(QSize(90, 0));
    TextLabel3->setMaximumSize(QSize(100, 32767));
    TextLabel3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout1->addWidget(TextLabel3, 2, 0, 1, 1);

    element_box = new QComboBox(atoms_box);
    element_box->setObjectName(QString::fromUtf8("element_box"));

    gridLayout1->addWidget(element_box, 2, 1, 1, 1);

    TextLabel2_2 = new QLabel(atoms_box);
    TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));
    QSizePolicy sizePolicy8(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
    sizePolicy8.setHorizontalStretch(0);
    sizePolicy8.setVerticalStretch(0);
    sizePolicy8.setHeightForWidth(TextLabel2_2->sizePolicy().hasHeightForWidth());
    TextLabel2_2->setSizePolicy(sizePolicy8);
    TextLabel2_2->setMinimumSize(QSize(90, 0));
    TextLabel2_2->setMaximumSize(QSize(100, 32767));
    TextLabel2_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout1->addWidget(TextLabel2_2, 1, 0, 1, 1);

    TextLabel2 = new QLabel(atoms_box);
    TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
    QSizePolicy sizePolicy9(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
    sizePolicy9.setHorizontalStretch(0);
    sizePolicy9.setVerticalStretch(0);
    sizePolicy9.setHeightForWidth(TextLabel2->sizePolicy().hasHeightForWidth());
    TextLabel2->setSizePolicy(sizePolicy9);
    TextLabel2->setMinimumSize(QSize(90, 0));
    TextLabel2->setMaximumSize(QSize(100, 32767));
    TextLabel2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout1->addWidget(TextLabel2, 0, 0, 1, 1);


    gridLayout->addWidget(atoms_box, 4, 0, 1, 2);

    spacerItem = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem, 3, 0, 1, 1);

    residues_box = new QGroupBox(CompositePropertiesData);
    residues_box->setObjectName(QString::fromUtf8("residues_box"));
    residues_box->setMinimumSize(QSize(16, 50));
    textLabel1_2 = new QLabel(residues_box);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
    textLabel1_2->setGeometry(QRect(10, 20, 110, 24));
    QSizePolicy sizePolicy10(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
    sizePolicy10.setHorizontalStretch(0);
    sizePolicy10.setVerticalStretch(0);
    sizePolicy10.setHeightForWidth(textLabel1_2->sizePolicy().hasHeightForWidth());
    textLabel1_2->setSizePolicy(sizePolicy10);
    textLabel1_2->setMinimumSize(QSize(110, 0));
    textLabel1_2->setMaximumSize(QSize(110, 32767));
    textLabel1_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
    id_edit = new QLineEdit(residues_box);
    id_edit->setObjectName(QString::fromUtf8("id_edit"));
    id_edit->setGeometry(QRect(120, 20, 250, 24));
    QSizePolicy sizePolicy11(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy11.setHorizontalStretch(0);
    sizePolicy11.setVerticalStretch(0);
    sizePolicy11.setHeightForWidth(id_edit->sizePolicy().hasHeightForWidth());
    id_edit->setSizePolicy(sizePolicy11);
    id_edit->setMinimumSize(QSize(0, 20));

    gridLayout->addWidget(residues_box, 2, 0, 1, 2);

    spacerItem1 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem1, 1, 1, 1, 1);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(0);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    textLabel1 = new QLabel(CompositePropertiesData);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    QSizePolicy sizePolicy12(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(1));
    sizePolicy12.setHorizontalStretch(0);
    sizePolicy12.setVerticalStretch(0);
    sizePolicy12.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
    textLabel1->setSizePolicy(sizePolicy12);
    textLabel1->setMinimumSize(QSize(100, 0));
    textLabel1->setMaximumSize(QSize(100, 32767));
    textLabel1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    hboxLayout1->addWidget(textLabel1);

    name_edit = new QLineEdit(CompositePropertiesData);
    name_edit->setObjectName(QString::fromUtf8("name_edit"));
    QSizePolicy sizePolicy13(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(1));
    sizePolicy13.setHorizontalStretch(0);
    sizePolicy13.setVerticalStretch(0);
    sizePolicy13.setHeightForWidth(name_edit->sizePolicy().hasHeightForWidth());
    name_edit->setSizePolicy(sizePolicy13);

    hboxLayout1->addWidget(name_edit);


    gridLayout->addLayout(hboxLayout1, 0, 0, 1, 2);

    QWidget::setTabOrder(name_edit, id_edit);
    QWidget::setTabOrder(id_edit, type_name_edit);
    QWidget::setTabOrder(type_name_edit, type_edit);
    QWidget::setTabOrder(type_edit, element_box);
    QWidget::setTabOrder(element_box, radius_edit);
    QWidget::setTabOrder(radius_edit, charge_edit);
    QWidget::setTabOrder(charge_edit, formal_charge_edit);
    QWidget::setTabOrder(formal_charge_edit, position_edit);
    QWidget::setTabOrder(position_edit, velocity_edit);
    QWidget::setTabOrder(velocity_edit, force_edit);
    QWidget::setTabOrder(force_edit, ok_button);
    QWidget::setTabOrder(ok_button, cancel_button);

    retranslateUi(CompositePropertiesData);

    QSize size(400, 517);
    size = size.expandedTo(CompositePropertiesData->minimumSizeHint());
    CompositePropertiesData->resize(size);


    QMetaObject::connectSlotsByName(CompositePropertiesData);
    } // setupUi

    void retranslateUi(QDialog *CompositePropertiesData)
    {
    CompositePropertiesData->setWindowTitle(QApplication::translate("CompositePropertiesData", "Properties", 0, QApplication::UnicodeUTF8));
    ok_button->setText(QApplication::translate("CompositePropertiesData", "OK", 0, QApplication::UnicodeUTF8));
    cancel_button->setText(QApplication::translate("CompositePropertiesData", "Cancel", 0, QApplication::UnicodeUTF8));
    atoms_box->setTitle(QApplication::translate("CompositePropertiesData", "Atoms", 0, QApplication::UnicodeUTF8));
    TextLabel7->setText(QApplication::translate("CompositePropertiesData", "Position (\303\205)", 0, QApplication::UnicodeUTF8));
    TextLabel4_2->setText(QApplication::translate("CompositePropertiesData", "Formal charge", 0, QApplication::UnicodeUTF8));
    TextLabel4->setText(QApplication::translate("CompositePropertiesData", "Charge (e)", 0, QApplication::UnicodeUTF8));
    TextLabel6->setText(QApplication::translate("CompositePropertiesData", "Force (pN)", 0, QApplication::UnicodeUTF8));
    TextLabel5->setText(QApplication::translate("CompositePropertiesData", "Velocity (\303\205/ps)", 0, QApplication::UnicodeUTF8));
    position_edit->setText(QString());
    TextLabel8->setText(QApplication::translate("CompositePropertiesData", "Radius (\303\205)", 0, QApplication::UnicodeUTF8));
    TextLabel3->setText(QApplication::translate("CompositePropertiesData", "Element", 0, QApplication::UnicodeUTF8));
    TextLabel2_2->setText(QApplication::translate("CompositePropertiesData", "Type", 0, QApplication::UnicodeUTF8));
    TextLabel2->setText(QApplication::translate("CompositePropertiesData", "Type name", 0, QApplication::UnicodeUTF8));
    residues_box->setTitle(QApplication::translate("CompositePropertiesData", "Residues", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("CompositePropertiesData", "ID", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("CompositePropertiesData", "Name", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(CompositePropertiesData);
    } // retranslateUi

};

namespace Ui {
    class CompositePropertiesData: public Ui_CompositePropertiesData {};
} // namespace Ui

#endif // COMPOSITEPROPERTIESDATA_H
