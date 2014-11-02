/********************************************************************************
** Form generated from reading ui file 'pubchemDialog.ui'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef PUBCHEMDIALOGDATA_H
#define PUBCHEMDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeWidget>

class Ui_PubChemDialogData
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *ok_button;
    QPushButton *clear_button;
    QPushButton *cancel_button;
    QFrame *SDFrame;
    QTextEdit *text_field;
    QGridLayout *gridLayout1;
    QLineEdit *pubchem_label;
    QLabel *label;
    QPushButton *generate_button;
    QPushButton *search_button;
    QLineEdit *smiles_label;
    QLabel *label_2;
    QTreeWidget *queries;

    void setupUi(QDialog *PubChemDialogData)
    {
    PubChemDialogData->setObjectName(QString::fromUtf8("PubChemDialogData"));
    gridLayout = new QGridLayout(PubChemDialogData);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(3);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    ok_button = new QPushButton(PubChemDialogData);
    ok_button->setObjectName(QString::fromUtf8("ok_button"));
    ok_button->setEnabled(false);
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(ok_button->sizePolicy().hasHeightForWidth());
    ok_button->setSizePolicy(sizePolicy);

    hboxLayout->addWidget(ok_button);

    clear_button = new QPushButton(PubChemDialogData);
    clear_button->setObjectName(QString::fromUtf8("clear_button"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(clear_button->sizePolicy().hasHeightForWidth());
    clear_button->setSizePolicy(sizePolicy1);

    hboxLayout->addWidget(clear_button);

    cancel_button = new QPushButton(PubChemDialogData);
    cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(cancel_button->sizePolicy().hasHeightForWidth());
    cancel_button->setSizePolicy(sizePolicy2);

    hboxLayout->addWidget(cancel_button);


    gridLayout->addLayout(hboxLayout, 3, 0, 1, 2);

    SDFrame = new QFrame(PubChemDialogData);
    SDFrame->setObjectName(QString::fromUtf8("SDFrame"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(3));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(SDFrame->sizePolicy().hasHeightForWidth());
    SDFrame->setSizePolicy(sizePolicy3);
    QPalette palette;
    QBrush brush(QColor(255, 255, 255, 255));
    brush.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Base, brush);
    QBrush brush1(QColor(255, 255, 255, 255));
    brush1.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Window, brush1);
    QBrush brush2(QColor(255, 255, 255, 255));
    brush2.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
    QBrush brush3(QColor(255, 255, 255, 255));
    brush3.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
    QBrush brush4(QColor(255, 255, 255, 255));
    brush4.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Base, brush4);
    QBrush brush5(QColor(255, 255, 255, 255));
    brush5.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Window, brush5);
    SDFrame->setPalette(palette);
    SDFrame->setAutoFillBackground(true);
    SDFrame->setFrameShape(QFrame::StyledPanel);
    SDFrame->setFrameShadow(QFrame::Raised);

    gridLayout->addWidget(SDFrame, 0, 1, 1, 1);

    text_field = new QTextEdit(PubChemDialogData);
    text_field->setObjectName(QString::fromUtf8("text_field"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(3));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(text_field->sizePolicy().hasHeightForWidth());
    text_field->setSizePolicy(sizePolicy4);

    gridLayout->addWidget(text_field, 1, 1, 1, 1);

    gridLayout1 = new QGridLayout();
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(0);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    pubchem_label = new QLineEdit(PubChemDialogData);
    pubchem_label->setObjectName(QString::fromUtf8("pubchem_label"));

    gridLayout1->addWidget(pubchem_label, 0, 1, 1, 1);

    label = new QLabel(PubChemDialogData);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout1->addWidget(label, 1, 0, 1, 1);

    generate_button = new QPushButton(PubChemDialogData);
    generate_button->setObjectName(QString::fromUtf8("generate_button"));
    generate_button->setMaximumSize(QSize(200, 16777215));

    gridLayout1->addWidget(generate_button, 1, 2, 1, 1);

    search_button = new QPushButton(PubChemDialogData);
    search_button->setObjectName(QString::fromUtf8("search_button"));
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(search_button->sizePolicy().hasHeightForWidth());
    search_button->setSizePolicy(sizePolicy5);
    search_button->setMaximumSize(QSize(200, 16777215));

    gridLayout1->addWidget(search_button, 0, 2, 1, 1);

    smiles_label = new QLineEdit(PubChemDialogData);
    smiles_label->setObjectName(QString::fromUtf8("smiles_label"));

    gridLayout1->addWidget(smiles_label, 1, 1, 1, 1);

    label_2 = new QLabel(PubChemDialogData);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout1->addWidget(label_2, 0, 0, 1, 1);


    gridLayout->addLayout(gridLayout1, 2, 0, 1, 2);

    queries = new QTreeWidget(PubChemDialogData);
    queries->setObjectName(QString::fromUtf8("queries"));
    QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(7));
    sizePolicy6.setHorizontalStretch(0);
    sizePolicy6.setVerticalStretch(0);
    sizePolicy6.setHeightForWidth(queries->sizePolicy().hasHeightForWidth());
    queries->setSizePolicy(sizePolicy6);

    gridLayout->addWidget(queries, 0, 0, 2, 1);

    QWidget::setTabOrder(pubchem_label, search_button);
    QWidget::setTabOrder(search_button, smiles_label);
    QWidget::setTabOrder(smiles_label, generate_button);
    QWidget::setTabOrder(generate_button, ok_button);
    QWidget::setTabOrder(ok_button, clear_button);
    QWidget::setTabOrder(clear_button, cancel_button);
    QWidget::setTabOrder(cancel_button, queries);
    QWidget::setTabOrder(queries, text_field);

    retranslateUi(PubChemDialogData);

    QSize size(648, 721);
    size = size.expandedTo(PubChemDialogData->minimumSizeHint());
    PubChemDialogData->resize(size);

    QObject::connect(ok_button, SIGNAL(clicked()), PubChemDialogData, SLOT(accept()));
    QObject::connect(cancel_button, SIGNAL(clicked()), PubChemDialogData, SLOT(reject()));

    QMetaObject::connectSlotsByName(PubChemDialogData);
    } // setupUi

    void retranslateUi(QDialog *PubChemDialogData)
    {
    PubChemDialogData->setWindowTitle(QApplication::translate("PubChemDialogData", "Dialog", 0, QApplication::UnicodeUTF8));
    ok_button->setText(QApplication::translate("PubChemDialogData", "Add", 0, QApplication::UnicodeUTF8));
    clear_button->setText(QApplication::translate("PubChemDialogData", "Clear Results", 0, QApplication::UnicodeUTF8));
    cancel_button->setText(QApplication::translate("PubChemDialogData", "Cancel", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("PubChemDialogData", "SMILES", 0, QApplication::UnicodeUTF8));
    generate_button->setText(QApplication::translate("PubChemDialogData", "Generate", 0, QApplication::UnicodeUTF8));
    search_button->setText(QApplication::translate("PubChemDialogData", "PubChem", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("PubChemDialogData", "PubChem", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(PubChemDialogData);
    } // retranslateUi

};

namespace Ui {
    class PubChemDialogData: public Ui_PubChemDialogData {};
} // namespace Ui

#endif // PUBCHEMDIALOGDATA_H
