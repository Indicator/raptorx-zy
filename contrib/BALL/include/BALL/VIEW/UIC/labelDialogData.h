/********************************************************************************
** Form generated from reading ui file 'labelDialog.ui'
**
** Created: Wed Mar 19 14:28:17 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef LABELDIALOGDATA_H
#define LABELDIALOGDATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>

class Ui_LabelDialogData
{
public:
    QGridLayout *gridLayout;
    QGroupBox *mode_group;
    QGridLayout *gridLayout1;
    QRadioButton *all_items;
    QRadioButton *every_residue;
    QRadioButton *every_item;
    QRadioButton *every_atom;
    QGroupBox *GroupBox1_2;
    QGridLayout *gridLayout2;
    QLabel *color_sample_;
    QPushButton *edit_button;
    QGroupBox *GroupBox1_2_2;
    QGridLayout *gridLayout3;
    QLabel *font_label;
    QPushButton *font_button;
    QPushButton *apply_button_;
    QPushButton *buttonCancel;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout4;
    QComboBox *text_box;
    QComboBox *tag_box;
    QPushButton *add_tag_button;

    void setupUi(QDialog *LabelDialogData)
    {
    LabelDialogData->setObjectName(QString::fromUtf8("LabelDialogData"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(3));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(LabelDialogData->sizePolicy().hasHeightForWidth());
    LabelDialogData->setSizePolicy(sizePolicy);
    LabelDialogData->setMinimumSize(QSize(0, 0));
    LabelDialogData->setMaximumSize(QSize(32767, 3000));
    LabelDialogData->setSizeGripEnabled(false);
    gridLayout = new QGridLayout(LabelDialogData);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(4);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    mode_group = new QGroupBox(LabelDialogData);
    mode_group->setObjectName(QString::fromUtf8("mode_group"));
    gridLayout1 = new QGridLayout(mode_group);
    gridLayout1->setSpacing(4);
    gridLayout1->setMargin(4);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    all_items = new QRadioButton(mode_group);
    all_items->setObjectName(QString::fromUtf8("all_items"));
    all_items->setChecked(true);

    gridLayout1->addWidget(all_items, 0, 0, 1, 1);

    every_residue = new QRadioButton(mode_group);
    every_residue->setObjectName(QString::fromUtf8("every_residue"));

    gridLayout1->addWidget(every_residue, 2, 0, 1, 1);

    every_item = new QRadioButton(mode_group);
    every_item->setObjectName(QString::fromUtf8("every_item"));

    gridLayout1->addWidget(every_item, 3, 0, 1, 1);

    every_atom = new QRadioButton(mode_group);
    every_atom->setObjectName(QString::fromUtf8("every_atom"));

    gridLayout1->addWidget(every_atom, 1, 0, 1, 1);


    gridLayout->addWidget(mode_group, 3, 0, 1, 2);

    GroupBox1_2 = new QGroupBox(LabelDialogData);
    GroupBox1_2->setObjectName(QString::fromUtf8("GroupBox1_2"));
    gridLayout2 = new QGridLayout(GroupBox1_2);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(4);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    color_sample_ = new QLabel(GroupBox1_2);
    color_sample_->setObjectName(QString::fromUtf8("color_sample_"));
    color_sample_->setMinimumSize(QSize(20, 40));
    color_sample_->setAutoFillBackground(true);
    color_sample_->setFrameShape(QFrame::StyledPanel);

    gridLayout2->addWidget(color_sample_, 0, 0, 1, 1);

    edit_button = new QPushButton(GroupBox1_2);
    edit_button->setObjectName(QString::fromUtf8("edit_button"));
    edit_button->setMinimumSize(QSize(0, 28));

    gridLayout2->addWidget(edit_button, 0, 1, 1, 1);


    gridLayout->addWidget(GroupBox1_2, 2, 0, 1, 2);

    GroupBox1_2_2 = new QGroupBox(LabelDialogData);
    GroupBox1_2_2->setObjectName(QString::fromUtf8("GroupBox1_2_2"));
    gridLayout3 = new QGridLayout(GroupBox1_2_2);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(4);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    font_label = new QLabel(GroupBox1_2_2);
    font_label->setObjectName(QString::fromUtf8("font_label"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(3));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(font_label->sizePolicy().hasHeightForWidth());
    font_label->setSizePolicy(sizePolicy1);
    font_label->setMaximumSize(QSize(400, 190));
    QFont font;
    font.setFamily(QString::fromUtf8("Sans Serif"));
    font.setPointSize(9);
    font.setBold(false);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(50);
    font.setStrikeOut(false);
    font_label->setFont(font);
    font_label->setFrameShape(QFrame::Panel);
    font_label->setFrameShadow(QFrame::Sunken);
    font_label->setAlignment(Qt::AlignVCenter);

    gridLayout3->addWidget(font_label, 0, 0, 1, 1);

    font_button = new QPushButton(GroupBox1_2_2);
    font_button->setObjectName(QString::fromUtf8("font_button"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(font_button->sizePolicy().hasHeightForWidth());
    font_button->setSizePolicy(sizePolicy2);
    font_button->setMinimumSize(QSize(0, 28));

    gridLayout3->addWidget(font_button, 0, 1, 1, 1);


    gridLayout->addWidget(GroupBox1_2_2, 1, 0, 1, 2);

    apply_button_ = new QPushButton(LabelDialogData);
    apply_button_->setObjectName(QString::fromUtf8("apply_button_"));
    apply_button_->setEnabled(false);
    apply_button_->setMinimumSize(QSize(0, 30));
    apply_button_->setMaximumSize(QSize(32767, 30));
    apply_button_->setAutoDefault(true);
    apply_button_->setDefault(true);

    gridLayout->addWidget(apply_button_, 4, 0, 1, 1);

    buttonCancel = new QPushButton(LabelDialogData);
    buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
    buttonCancel->setMinimumSize(QSize(0, 30));
    buttonCancel->setMaximumSize(QSize(32767, 30));
    buttonCancel->setAutoDefault(true);

    gridLayout->addWidget(buttonCancel, 4, 1, 1, 1);

    GroupBox1 = new QGroupBox(LabelDialogData);
    GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
    gridLayout4 = new QGridLayout(GroupBox1);
    gridLayout4->setSpacing(6);
    gridLayout4->setMargin(4);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    text_box = new QComboBox(GroupBox1);
    text_box->setObjectName(QString::fromUtf8("text_box"));
    text_box->setEnabled(true);
    text_box->setMinimumSize(QSize(0, 22));
    text_box->setEditable(true);
    text_box->setAutoCompletion(true);
    text_box->setDuplicatesEnabled(false);

    gridLayout4->addWidget(text_box, 0, 0, 1, 2);

    tag_box = new QComboBox(GroupBox1);
    tag_box->setObjectName(QString::fromUtf8("tag_box"));
    tag_box->setEnabled(false);
    tag_box->setMinimumSize(QSize(0, 22));

    gridLayout4->addWidget(tag_box, 1, 0, 1, 1);

    add_tag_button = new QPushButton(GroupBox1);
    add_tag_button->setObjectName(QString::fromUtf8("add_tag_button"));
    add_tag_button->setEnabled(false);

    gridLayout4->addWidget(add_tag_button, 1, 1, 1, 1);


    gridLayout->addWidget(GroupBox1, 0, 0, 1, 2);

    QWidget::setTabOrder(text_box, tag_box);
    QWidget::setTabOrder(tag_box, add_tag_button);
    QWidget::setTabOrder(add_tag_button, font_button);
    QWidget::setTabOrder(font_button, edit_button);
    QWidget::setTabOrder(edit_button, all_items);
    QWidget::setTabOrder(all_items, every_atom);
    QWidget::setTabOrder(every_atom, every_residue);
    QWidget::setTabOrder(every_residue, every_item);
    QWidget::setTabOrder(every_item, apply_button_);
    QWidget::setTabOrder(apply_button_, buttonCancel);

    retranslateUi(LabelDialogData);

    QSize size(321, 423);
    size = size.expandedTo(LabelDialogData->minimumSizeHint());
    LabelDialogData->resize(size);


    QMetaObject::connectSlotsByName(LabelDialogData);
    } // setupUi

    void retranslateUi(QDialog *LabelDialogData)
    {
    LabelDialogData->setWindowTitle(QApplication::translate("LabelDialogData", "Create label", 0, QApplication::UnicodeUTF8));
    mode_group->setTitle(QApplication::translate("LabelDialogData", "Mode", 0, QApplication::UnicodeUTF8));
    all_items->setText(QApplication::translate("LabelDialogData", "one label for all items", 0, QApplication::UnicodeUTF8));
    every_residue->setText(QApplication::translate("LabelDialogData", "one label for every residue", 0, QApplication::UnicodeUTF8));
    every_item->setText(QApplication::translate("LabelDialogData", "one label for every item", 0, QApplication::UnicodeUTF8));
    every_atom->setText(QApplication::translate("LabelDialogData", "one label for every atom", 0, QApplication::UnicodeUTF8));
    GroupBox1_2->setTitle(QApplication::translate("LabelDialogData", "Color", 0, QApplication::UnicodeUTF8));
    color_sample_->setToolTip(QApplication::translate("LabelDialogData", "Label Color", 0, QApplication::UnicodeUTF8));
    color_sample_->setText(QString());
    edit_button->setToolTip(QApplication::translate("LabelDialogData", "Edit label color", 0, QApplication::UnicodeUTF8));
    edit_button->setText(QApplication::translate("LabelDialogData", "Select", 0, QApplication::UnicodeUTF8));
    GroupBox1_2_2->setTitle(QApplication::translate("LabelDialogData", "Font", 0, QApplication::UnicodeUTF8));
    font_label->setToolTip(QApplication::translate("LabelDialogData", "Font Preview", 0, QApplication::UnicodeUTF8));
    font_label->setText(QApplication::translate("LabelDialogData", "Font Test label", 0, QApplication::UnicodeUTF8));
    font_button->setToolTip(QApplication::translate("LabelDialogData", "Select the font", 0, QApplication::UnicodeUTF8));
    font_button->setText(QApplication::translate("LabelDialogData", "Select", 0, QApplication::UnicodeUTF8));
    apply_button_->setToolTip(QApplication::translate("LabelDialogData", "Add the label(s) for all highlighted items in the list of molecules", 0, QApplication::UnicodeUTF8));
    apply_button_->setText(QApplication::translate("LabelDialogData", "&Apply", 0, QApplication::UnicodeUTF8));
    apply_button_->setShortcut(QApplication::translate("LabelDialogData", "Alt+A", 0, QApplication::UnicodeUTF8));
    buttonCancel->setToolTip(QApplication::translate("LabelDialogData", "Close window without creating label", 0, QApplication::UnicodeUTF8));
    buttonCancel->setText(QApplication::translate("LabelDialogData", "&Close", 0, QApplication::UnicodeUTF8));
    buttonCancel->setShortcut(QApplication::translate("LabelDialogData", "Alt+C", 0, QApplication::UnicodeUTF8));
    GroupBox1->setTitle(QApplication::translate("LabelDialogData", "Text", 0, QApplication::UnicodeUTF8));
    text_box->setToolTip(QApplication::translate("LabelDialogData", "Enter a text here", 0, QApplication::UnicodeUTF8));
    tag_box->clear();
    tag_box->addItem(QApplication::translate("LabelDialogData", "Name", 0, QApplication::UnicodeUTF8));
    tag_box->addItem(QApplication::translate("LabelDialogData", "Residue ID", 0, QApplication::UnicodeUTF8));
    tag_box->addItem(QApplication::translate("LabelDialogData", "Atom Type", 0, QApplication::UnicodeUTF8));
    tag_box->addItem(QApplication::translate("LabelDialogData", "Atom Type Name", 0, QApplication::UnicodeUTF8));
    tag_box->addItem(QApplication::translate("LabelDialogData", "Atom Charge", 0, QApplication::UnicodeUTF8));
    tag_box->addItem(QApplication::translate("LabelDialogData", "Element", 0, QApplication::UnicodeUTF8));
    tag_box->setToolTip(QApplication::translate("LabelDialogData", "Select a special text tag to add", 0, QApplication::UnicodeUTF8));
    add_tag_button->setToolTip(QApplication::translate("LabelDialogData", "Add the selected text tag", 0, QApplication::UnicodeUTF8));
    add_tag_button->setText(QApplication::translate("LabelDialogData", "Add", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(LabelDialogData);
    } // retranslateUi

};

namespace Ui {
    class LabelDialogData: public Ui_LabelDialogData {};
} // namespace Ui

#endif // LABELDIALOGDATA_H
