/********************************************************************************
** Form generated from reading ui file 'modifyRepresentationDialog.ui'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef MODIFYREPRESENTATIONDIALOGDATA_H
#define MODIFYREPRESENTATIONDIALOGDATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

class Ui_ModifyRepresentationDialogData
{
public:
    QPushButton *apply_button;
    QPushButton *cancel_button;
    QTabWidget *surface_tab;
    QWidget *by_grid;
    QWidget *layout106;
    QHBoxLayout *hboxLayout;
    QLabel *TextLabel1_3;
    QComboBox *grids;
    QWidget *layout109;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *TextLabel15;
    QSpinBox *min_alpha;
    QSpinBox *max_max_alpha;
    QLabel *TextLabel7_2;
    QLabel *TextLabel14_2;
    QLabel *min_min_label;
    QSpinBox *mid_alpha;
    QLineEdit *min_box;
    QLabel *mid_label;
    QPushButton *max_button;
    QLineEdit *max_box;
    QPushButton *mid_button;
    QLabel *max_max_label;
    QPushButton *max_max_button;
    QLineEdit *mid_box;
    QLabel *TextLabel14_3;
    QSpinBox *min_min_alpha;
    QSpinBox *max_alpha;
    QPushButton *autoscale;
    QLabel *min_label;
    QLabel *TextLabel13;
    QLabel *max_label;
    QPushButton *min_min_button;
    QPushButton *min_button;
    QLabel *TextLabel14;
    QLabel *TextLabel1_2;
    QLabel *TextLabel1;
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout1;
    QLabel *TextLabel7;
    QSpinBox *levels_box;
    QCheckBox *normalization;
    QCheckBox *grid_transparency;
    QWidget *by_color;
    QWidget *layout72;
    QHBoxLayout *hboxLayout2;
    QLabel *custom_color_label;
    QPushButton *choose_button;
    QSlider *transparency_slider;
    QLabel *textLabel1_2_2_2;
    QLabel *transparency_label;
    QCheckBox *color_only_selection;
    QWidget *drawing_mode;
    QLabel *textLabel1_2_2;
    QLabel *textLabel1_2_2_2_2;
    QSlider *transparency_slider_2;
    QLabel *transparency_label_2;
    QComboBox *mode_combobox;
    QWidget *split;
    QGroupBox *split_group;
    QRadioButton *split_by_distance;
    QLineEdit *distance_edit;
    QLabel *textLabel1;
    QRadioButton *split_by_selection;

    void setupUi(QDialog *ModifyRepresentationDialogData)
    {
    ModifyRepresentationDialogData->setObjectName(QString::fromUtf8("ModifyRepresentationDialogData"));
    ModifyRepresentationDialogData->setMinimumSize(QSize(540, 370));
    ModifyRepresentationDialogData->setMaximumSize(QSize(540, 340));
    apply_button = new QPushButton(ModifyRepresentationDialogData);
    apply_button->setObjectName(QString::fromUtf8("apply_button"));
    apply_button->setEnabled(false);
    apply_button->setGeometry(QRect(90, 330, 130, 30));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(apply_button->sizePolicy().hasHeightForWidth());
    apply_button->setSizePolicy(sizePolicy);
    apply_button->setMinimumSize(QSize(130, 30));
    apply_button->setMaximumSize(QSize(32767, 30));
    apply_button->setDefault(true);
    cancel_button = new QPushButton(ModifyRepresentationDialogData);
    cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
    cancel_button->setGeometry(QRect(320, 330, 130, 30));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(7));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(cancel_button->sizePolicy().hasHeightForWidth());
    cancel_button->setSizePolicy(sizePolicy1);
    cancel_button->setMinimumSize(QSize(130, 30));
    cancel_button->setMaximumSize(QSize(32767, 30));
    cancel_button->setDefault(false);
    surface_tab = new QTabWidget(ModifyRepresentationDialogData);
    surface_tab->setObjectName(QString::fromUtf8("surface_tab"));
    surface_tab->setGeometry(QRect(0, 0, 537, 321));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(surface_tab->sizePolicy().hasHeightForWidth());
    surface_tab->setSizePolicy(sizePolicy2);
    by_grid = new QWidget();
    by_grid->setObjectName(QString::fromUtf8("by_grid"));
    layout106 = new QWidget(by_grid);
    layout106->setObjectName(QString::fromUtf8("layout106"));
    layout106->setGeometry(QRect(10, 20, 520, 23));
    hboxLayout = new QHBoxLayout(layout106);
    hboxLayout->setSpacing(9);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    TextLabel1_3 = new QLabel(layout106);
    TextLabel1_3->setObjectName(QString::fromUtf8("TextLabel1_3"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(TextLabel1_3->sizePolicy().hasHeightForWidth());
    TextLabel1_3->setSizePolicy(sizePolicy3);
    TextLabel1_3->setMinimumSize(QSize(0, 15));
    TextLabel1_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    hboxLayout->addWidget(TextLabel1_3);

    grids = new QComboBox(layout106);
    grids->setObjectName(QString::fromUtf8("grids"));

    hboxLayout->addWidget(grids);

    layout109 = new QWidget(by_grid);
    layout109->setObjectName(QString::fromUtf8("layout109"));
    layout109->setGeometry(QRect(60, 60, 464, 148));
    layout109->setAutoFillBackground(true);
    widget = new QWidget(layout109);
    widget->setObjectName(QString::fromUtf8("widget"));
    widget->setGeometry(QRect(0, 0, 461, 149));
    gridLayout = new QGridLayout(widget);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(0);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    TextLabel15 = new QLabel(widget);
    TextLabel15->setObjectName(QString::fromUtf8("TextLabel15"));
    TextLabel15->setMaximumSize(QSize(32767, 18));
    TextLabel15->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(TextLabel15, 0, 3, 1, 1);

    min_alpha = new QSpinBox(widget);
    min_alpha->setObjectName(QString::fromUtf8("min_alpha"));
    min_alpha->setEnabled(false);
    min_alpha->setMinimumSize(QSize(84, 24));
    min_alpha->setMaximumSize(QSize(84, 24));
    min_alpha->setMaximum(255);
    min_alpha->setValue(255);

    gridLayout->addWidget(min_alpha, 3, 1, 1, 1);

    max_max_alpha = new QSpinBox(widget);
    max_max_alpha->setObjectName(QString::fromUtf8("max_max_alpha"));
    max_max_alpha->setEnabled(false);
    max_max_alpha->setMinimumSize(QSize(84, 24));
    max_max_alpha->setMaximumSize(QSize(84, 24));
    max_max_alpha->setMaximum(255);
    max_max_alpha->setValue(255);

    gridLayout->addWidget(max_max_alpha, 3, 4, 1, 1);

    TextLabel7_2 = new QLabel(widget);
    TextLabel7_2->setObjectName(QString::fromUtf8("TextLabel7_2"));
    TextLabel7_2->setMinimumSize(QSize(84, 24));
    TextLabel7_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    gridLayout->addWidget(TextLabel7_2, 4, 0, 1, 1);

    TextLabel14_2 = new QLabel(widget);
    TextLabel14_2->setObjectName(QString::fromUtf8("TextLabel14_2"));
    TextLabel14_2->setMaximumSize(QSize(32767, 18));
    TextLabel14_2->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(TextLabel14_2, 0, 2, 1, 1);

    min_min_label = new QLabel(widget);
    min_min_label->setObjectName(QString::fromUtf8("min_min_label"));
    min_min_label->setMinimumSize(QSize(0, 28));
    min_min_label->setMaximumSize(QSize(32767, 28));
    QPalette palette;
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(255, 0, 0));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(103, 141, 178));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(255, 0, 0));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(103, 141, 178));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(128, 128, 128));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(199, 199, 199));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(128, 128, 128));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(255, 0, 0));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(255, 0, 0));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(86, 117, 148));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    min_min_label->setPalette(palette);
    min_min_label->setAutoFillBackground(true);
    min_min_label->setFrameShape(QFrame::Panel);

    gridLayout->addWidget(min_min_label, 1, 0, 1, 1);

    mid_alpha = new QSpinBox(widget);
    mid_alpha->setObjectName(QString::fromUtf8("mid_alpha"));
    mid_alpha->setEnabled(false);
    mid_alpha->setMinimumSize(QSize(84, 24));
    mid_alpha->setMaximumSize(QSize(84, 24));
    mid_alpha->setMaximum(255);
    mid_alpha->setValue(255);

    gridLayout->addWidget(mid_alpha, 3, 2, 1, 1);

    min_box = new QLineEdit(widget);
    min_box->setObjectName(QString::fromUtf8("min_box"));
    min_box->setMinimumSize(QSize(84, 24));
    min_box->setMaximumSize(QSize(84, 24));
    min_box->setAlignment(Qt::AlignRight);

    gridLayout->addWidget(min_box, 4, 1, 1, 1);

    mid_label = new QLabel(widget);
    mid_label->setObjectName(QString::fromUtf8("mid_label"));
    mid_label->setMinimumSize(QSize(0, 28));
    mid_label->setMaximumSize(QSize(32767, 28));
    QPalette palette1;
    palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
    palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
    palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
    palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
    palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
    palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
    palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
    palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(255, 255, 255));
    palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(103, 141, 178));
    palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
    palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
    palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
    palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
    palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
    palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
    palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
    palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(255, 255, 255));
    palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(103, 141, 178));
    palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(128, 128, 128));
    palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
    palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
    palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
    palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(199, 199, 199));
    palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(128, 128, 128));
    palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
    palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(255, 255, 255));
    palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(86, 117, 148));
    palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    mid_label->setPalette(palette1);
    mid_label->setAutoFillBackground(true);
    mid_label->setFrameShape(QFrame::Panel);

    gridLayout->addWidget(mid_label, 1, 2, 1, 1);

    max_button = new QPushButton(widget);
    max_button->setObjectName(QString::fromUtf8("max_button"));
    max_button->setMinimumSize(QSize(0, 28));
    max_button->setMaximumSize(QSize(32767, 28));

    gridLayout->addWidget(max_button, 2, 3, 1, 1);

    max_box = new QLineEdit(widget);
    max_box->setObjectName(QString::fromUtf8("max_box"));
    max_box->setMinimumSize(QSize(84, 24));
    max_box->setMaximumSize(QSize(84, 24));
    max_box->setAlignment(Qt::AlignRight);

    gridLayout->addWidget(max_box, 4, 3, 1, 1);

    mid_button = new QPushButton(widget);
    mid_button->setObjectName(QString::fromUtf8("mid_button"));
    mid_button->setMinimumSize(QSize(0, 28));
    mid_button->setMaximumSize(QSize(32767, 28));

    gridLayout->addWidget(mid_button, 2, 2, 1, 1);

    max_max_label = new QLabel(widget);
    max_max_label->setObjectName(QString::fromUtf8("max_max_label"));
    max_max_label->setMinimumSize(QSize(0, 28));
    max_max_label->setMaximumSize(QSize(32767, 28));
    QPalette palette2;
    palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
    palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
    palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
    palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
    palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
    palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
    palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
    palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(0, 0, 255));
    palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(103, 141, 178));
    palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
    palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
    palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
    palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
    palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
    palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
    palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
    palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(0, 0, 255));
    palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(103, 141, 178));
    palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(128, 128, 128));
    palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
    palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
    palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
    palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(199, 199, 199));
    palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(128, 128, 128));
    palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(0, 0, 255));
    palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(0, 0, 255));
    palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(86, 117, 148));
    palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    max_max_label->setPalette(palette2);
    max_max_label->setAutoFillBackground(true);
    max_max_label->setFrameShape(QFrame::Panel);

    gridLayout->addWidget(max_max_label, 1, 4, 1, 1);

    max_max_button = new QPushButton(widget);
    max_max_button->setObjectName(QString::fromUtf8("max_max_button"));
    max_max_button->setMinimumSize(QSize(0, 28));
    max_max_button->setMaximumSize(QSize(32767, 28));

    gridLayout->addWidget(max_max_button, 2, 4, 1, 1);

    mid_box = new QLineEdit(widget);
    mid_box->setObjectName(QString::fromUtf8("mid_box"));
    mid_box->setMinimumSize(QSize(84, 24));
    mid_box->setMaximumSize(QSize(84, 24));
    mid_box->setAlignment(Qt::AlignRight);

    gridLayout->addWidget(mid_box, 4, 2, 1, 1);

    TextLabel14_3 = new QLabel(widget);
    TextLabel14_3->setObjectName(QString::fromUtf8("TextLabel14_3"));
    TextLabel14_3->setMaximumSize(QSize(32767, 18));
    TextLabel14_3->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(TextLabel14_3, 0, 0, 1, 1);

    min_min_alpha = new QSpinBox(widget);
    min_min_alpha->setObjectName(QString::fromUtf8("min_min_alpha"));
    min_min_alpha->setEnabled(false);
    min_min_alpha->setMinimumSize(QSize(84, 24));
    min_min_alpha->setMaximumSize(QSize(84, 24));
    min_min_alpha->setMaximum(255);
    min_min_alpha->setValue(255);

    gridLayout->addWidget(min_min_alpha, 3, 0, 1, 1);

    max_alpha = new QSpinBox(widget);
    max_alpha->setObjectName(QString::fromUtf8("max_alpha"));
    max_alpha->setEnabled(false);
    max_alpha->setMinimumSize(QSize(84, 24));
    max_alpha->setMaximumSize(QSize(84, 24));
    max_alpha->setMaximum(255);
    max_alpha->setValue(255);

    gridLayout->addWidget(max_alpha, 3, 3, 1, 1);

    autoscale = new QPushButton(widget);
    autoscale->setObjectName(QString::fromUtf8("autoscale"));
    autoscale->setEnabled(false);
    autoscale->setMinimumSize(QSize(0, 25));
    autoscale->setMaximumSize(QSize(32767, 24));

    gridLayout->addWidget(autoscale, 4, 4, 1, 1);

    min_label = new QLabel(widget);
    min_label->setObjectName(QString::fromUtf8("min_label"));
    min_label->setMinimumSize(QSize(0, 28));
    min_label->setMaximumSize(QSize(32767, 28));
    QPalette palette3;
    palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
    palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
    palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
    palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
    palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
    palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
    palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
    palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(255, 0, 0));
    palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(103, 141, 178));
    palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
    palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
    palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
    palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
    palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
    palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
    palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
    palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(255, 0, 0));
    palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(103, 141, 178));
    palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(128, 128, 128));
    palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
    palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
    palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
    palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(199, 199, 199));
    palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(128, 128, 128));
    palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(255, 0, 0));
    palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(255, 0, 0));
    palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(86, 117, 148));
    palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    min_label->setPalette(palette3);
    min_label->setAutoFillBackground(true);
    min_label->setFrameShape(QFrame::Panel);

    gridLayout->addWidget(min_label, 1, 1, 1, 1);

    TextLabel13 = new QLabel(widget);
    TextLabel13->setObjectName(QString::fromUtf8("TextLabel13"));
    TextLabel13->setMaximumSize(QSize(32767, 18));
    TextLabel13->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(TextLabel13, 0, 4, 1, 1);

    max_label = new QLabel(widget);
    max_label->setObjectName(QString::fromUtf8("max_label"));
    max_label->setMinimumSize(QSize(0, 28));
    max_label->setMaximumSize(QSize(32767, 28));
    QPalette palette4;
    palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
    palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
    palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
    palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
    palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
    palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
    palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
    palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(0, 0, 255));
    palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(103, 141, 178));
    palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
    palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
    palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
    palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
    palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
    palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
    palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
    palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(0, 0, 255));
    palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(103, 141, 178));
    palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(128, 128, 128));
    palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
    palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
    palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
    palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(199, 199, 199));
    palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(128, 128, 128));
    palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(0, 0, 255));
    palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(0, 0, 255));
    palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(86, 117, 148));
    palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    max_label->setPalette(palette4);
    max_label->setAutoFillBackground(true);
    max_label->setFrameShape(QFrame::Panel);

    gridLayout->addWidget(max_label, 1, 3, 1, 1);

    min_min_button = new QPushButton(widget);
    min_min_button->setObjectName(QString::fromUtf8("min_min_button"));
    min_min_button->setMinimumSize(QSize(0, 28));
    min_min_button->setMaximumSize(QSize(32767, 28));

    gridLayout->addWidget(min_min_button, 2, 0, 1, 1);

    min_button = new QPushButton(widget);
    min_button->setObjectName(QString::fromUtf8("min_button"));
    min_button->setMinimumSize(QSize(0, 28));
    min_button->setMaximumSize(QSize(32767, 28));

    gridLayout->addWidget(min_button, 2, 1, 1, 1);

    TextLabel14 = new QLabel(widget);
    TextLabel14->setObjectName(QString::fromUtf8("TextLabel14"));
    TextLabel14->setMaximumSize(QSize(32767, 18));
    TextLabel14->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(TextLabel14, 0, 1, 1, 1);

    TextLabel1_2 = new QLabel(by_grid);
    TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
    TextLabel1_2->setGeometry(QRect(20, 150, 35, 31));
    TextLabel1_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
    TextLabel1 = new QLabel(by_grid);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    TextLabel1->setGeometry(QRect(0, 80, 56, 31));
    TextLabel1->setTextFormat(Qt::AutoText);
    TextLabel1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
    layoutWidget = new QWidget(by_grid);
    layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
    layoutWidget->setGeometry(QRect(10, 240, 221, 31));
    hboxLayout1 = new QHBoxLayout(layoutWidget);
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(0);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    TextLabel7 = new QLabel(layoutWidget);
    TextLabel7->setObjectName(QString::fromUtf8("TextLabel7"));
    TextLabel7->setMinimumSize(QSize(0, 22));
    TextLabel7->setMaximumSize(QSize(32767, 22));
    TextLabel7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    hboxLayout1->addWidget(TextLabel7);

    levels_box = new QSpinBox(layoutWidget);
    levels_box->setObjectName(QString::fromUtf8("levels_box"));
    levels_box->setMinimumSize(QSize(30, 24));
    levels_box->setMaximumSize(QSize(70, 24));
    levels_box->setMaximum(999);
    levels_box->setValue(10);

    hboxLayout1->addWidget(levels_box);

    normalization = new QCheckBox(by_grid);
    normalization->setObjectName(QString::fromUtf8("normalization"));
    normalization->setGeometry(QRect(260, 230, 261, 24));
    grid_transparency = new QCheckBox(by_grid);
    grid_transparency->setObjectName(QString::fromUtf8("grid_transparency"));
    grid_transparency->setGeometry(QRect(260, 260, 261, 24));
    surface_tab->addTab(by_grid, QApplication::translate("ModifyRepresentationDialogData", "Color By Grid", 0, QApplication::UnicodeUTF8));
    by_color = new QWidget();
    by_color->setObjectName(QString::fromUtf8("by_color"));
    layout72 = new QWidget(by_color);
    layout72->setObjectName(QString::fromUtf8("layout72"));
    layout72->setGeometry(QRect(10, 20, 310, 32));
    hboxLayout2 = new QHBoxLayout(layout72);
    hboxLayout2->setSpacing(6);
    hboxLayout2->setMargin(0);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    custom_color_label = new QLabel(layout72);
    custom_color_label->setObjectName(QString::fromUtf8("custom_color_label"));
    custom_color_label->setMaximumSize(QSize(32767, 30));
    QPalette palette5;
    palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
    palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
    palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
    palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
    palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
    palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
    palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
    palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(0, 170, 255));
    palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(103, 141, 178));
    palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
    palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
    palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
    palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
    palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
    palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
    palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
    palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(0, 170, 255));
    palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(103, 141, 178));
    palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(128, 128, 128));
    palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
    palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
    palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
    palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(199, 199, 199));
    palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(128, 128, 128));
    palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(0, 170, 255));
    palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(0, 170, 255));
    palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(86, 117, 148));
    palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    custom_color_label->setPalette(palette5);
    custom_color_label->setAutoFillBackground(true);
    custom_color_label->setFrameShape(QFrame::Panel);

    hboxLayout2->addWidget(custom_color_label);

    choose_button = new QPushButton(layout72);
    choose_button->setObjectName(QString::fromUtf8("choose_button"));
    choose_button->setMinimumSize(QSize(30, 30));
    choose_button->setMaximumSize(QSize(32767, 30));

    hboxLayout2->addWidget(choose_button);

    transparency_slider = new QSlider(by_color);
    transparency_slider->setObjectName(QString::fromUtf8("transparency_slider"));
    transparency_slider->setGeometry(QRect(20, 90, 206, 21));
    transparency_slider->setMinimumSize(QSize(0, 21));
    transparency_slider->setMinimum(0);
    transparency_slider->setMaximum(100);
    transparency_slider->setSingleStep(1);
    transparency_slider->setValue(0);
    transparency_slider->setOrientation(Qt::Horizontal);
    transparency_slider->setTickInterval(10);
    textLabel1_2_2_2 = new QLabel(by_color);
    textLabel1_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2"));
    textLabel1_2_2_2->setGeometry(QRect(20, 60, 260, 16));
    textLabel1_2_2_2->setAlignment(Qt::AlignCenter);
    transparency_label = new QLabel(by_color);
    transparency_label->setObjectName(QString::fromUtf8("transparency_label"));
    transparency_label->setGeometry(QRect(230, 90, 50, 21));
    transparency_label->setAlignment(Qt::AlignCenter);
    color_only_selection = new QCheckBox(by_color);
    color_only_selection->setObjectName(QString::fromUtf8("color_only_selection"));
    color_only_selection->setGeometry(QRect(20, 140, 288, 28));
    surface_tab->addTab(by_color, QApplication::translate("ModifyRepresentationDialogData", "Custom Color", 0, QApplication::UnicodeUTF8));
    drawing_mode = new QWidget();
    drawing_mode->setObjectName(QString::fromUtf8("drawing_mode"));
    textLabel1_2_2 = new QLabel(drawing_mode);
    textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));
    textLabel1_2_2->setGeometry(QRect(10, 20, 260, 21));
    textLabel1_2_2->setAlignment(Qt::AlignCenter);
    textLabel1_2_2_2_2 = new QLabel(drawing_mode);
    textLabel1_2_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2"));
    textLabel1_2_2_2_2->setGeometry(QRect(10, 70, 260, 16));
    textLabel1_2_2_2_2->setAlignment(Qt::AlignCenter);
    transparency_slider_2 = new QSlider(drawing_mode);
    transparency_slider_2->setObjectName(QString::fromUtf8("transparency_slider_2"));
    transparency_slider_2->setGeometry(QRect(10, 100, 206, 21));
    transparency_slider_2->setMinimumSize(QSize(0, 21));
    transparency_slider_2->setMinimum(0);
    transparency_slider_2->setMaximum(100);
    transparency_slider_2->setSingleStep(1);
    transparency_slider_2->setValue(0);
    transparency_slider_2->setOrientation(Qt::Horizontal);
    transparency_slider_2->setTickInterval(10);
    transparency_label_2 = new QLabel(drawing_mode);
    transparency_label_2->setObjectName(QString::fromUtf8("transparency_label_2"));
    transparency_label_2->setGeometry(QRect(230, 90, 50, 21));
    transparency_label_2->setAlignment(Qt::AlignCenter);
    mode_combobox = new QComboBox(drawing_mode);
    mode_combobox->setObjectName(QString::fromUtf8("mode_combobox"));
    mode_combobox->setGeometry(QRect(10, 40, 263, 24));
    mode_combobox->setMinimumSize(QSize(200, 24));
    mode_combobox->setMaximumSize(QSize(1600, 24));
    mode_combobox->setFocusPolicy(Qt::StrongFocus);
    mode_combobox->setMaxCount(2147483647);
    mode_combobox->setInsertPolicy(QComboBox::InsertAtBottom);
    mode_combobox->setDuplicatesEnabled(true);
    surface_tab->addTab(drawing_mode, QApplication::translate("ModifyRepresentationDialogData", "Drawing Mode", 0, QApplication::UnicodeUTF8));
    split = new QWidget();
    split->setObjectName(QString::fromUtf8("split"));
    split_group = new QGroupBox(split);
    split_group->setObjectName(QString::fromUtf8("split_group"));
    split_group->setGeometry(QRect(20, 10, 370, 80));
    split_by_distance = new QRadioButton(split_group);
    split_by_distance->setObjectName(QString::fromUtf8("split_by_distance"));
    split_by_distance->setGeometry(QRect(10, 50, 238, 23));
    distance_edit = new QLineEdit(split_group);
    distance_edit->setObjectName(QString::fromUtf8("distance_edit"));
    distance_edit->setGeometry(QRect(257, 50, 50, 23));
    distance_edit->setMaximumSize(QSize(50, 32767));
    distance_edit->setAlignment(Qt::AlignRight);
    textLabel1 = new QLabel(split_group);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    textLabel1->setGeometry(QRect(316, 50, 16, 23));
    textLabel1->setMaximumSize(QSize(25, 32767));
    split_by_selection = new QRadioButton(split_group);
    split_by_selection->setObjectName(QString::fromUtf8("split_by_selection"));
    split_by_selection->setGeometry(QRect(9, 23, 297, 21));
    split_by_selection->setChecked(true);
    surface_tab->addTab(split, QApplication::translate("ModifyRepresentationDialogData", "Split", 0, QApplication::UnicodeUTF8));
    QWidget::setTabOrder(surface_tab, grids);
    QWidget::setTabOrder(grids, min_min_button);
    QWidget::setTabOrder(min_min_button, min_button);
    QWidget::setTabOrder(min_button, mid_button);
    QWidget::setTabOrder(mid_button, max_button);
    QWidget::setTabOrder(max_button, max_max_button);
    QWidget::setTabOrder(max_max_button, min_min_alpha);
    QWidget::setTabOrder(min_min_alpha, min_alpha);
    QWidget::setTabOrder(min_alpha, mid_alpha);
    QWidget::setTabOrder(mid_alpha, max_alpha);
    QWidget::setTabOrder(max_alpha, max_max_alpha);
    QWidget::setTabOrder(max_max_alpha, min_box);
    QWidget::setTabOrder(min_box, mid_box);
    QWidget::setTabOrder(mid_box, max_box);
    QWidget::setTabOrder(max_box, autoscale);
    QWidget::setTabOrder(autoscale, levels_box);
    QWidget::setTabOrder(levels_box, normalization);
    QWidget::setTabOrder(normalization, grid_transparency);
    QWidget::setTabOrder(grid_transparency, apply_button);
    QWidget::setTabOrder(apply_button, cancel_button);
    QWidget::setTabOrder(cancel_button, choose_button);
    QWidget::setTabOrder(choose_button, transparency_slider);
    QWidget::setTabOrder(transparency_slider, color_only_selection);
    QWidget::setTabOrder(color_only_selection, mode_combobox);
    QWidget::setTabOrder(mode_combobox, transparency_slider_2);
    QWidget::setTabOrder(transparency_slider_2, split_by_selection);
    QWidget::setTabOrder(split_by_selection, split_by_distance);
    QWidget::setTabOrder(split_by_distance, distance_edit);

    retranslateUi(ModifyRepresentationDialogData);

    QSize size(540, 370);
    size = size.expandedTo(ModifyRepresentationDialogData->minimumSizeHint());
    ModifyRepresentationDialogData->resize(size);


    surface_tab->setCurrentIndex(3);
    mode_combobox->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(ModifyRepresentationDialogData);
    } // setupUi

    void retranslateUi(QDialog *ModifyRepresentationDialogData)
    {
    ModifyRepresentationDialogData->setWindowTitle(QApplication::translate("ModifyRepresentationDialogData", "Modify Representation", 0, QApplication::UnicodeUTF8));
    apply_button->setToolTip(QApplication::translate("ModifyRepresentationDialogData", "One grid and one Surface must be selected in the controls to color by grid.", 0, QApplication::UnicodeUTF8));
    apply_button->setText(QApplication::translate("ModifyRepresentationDialogData", "O&K", 0, QApplication::UnicodeUTF8));
    apply_button->setShortcut(QApplication::translate("ModifyRepresentationDialogData", "Alt+K", 0, QApplication::UnicodeUTF8));
    cancel_button->setText(QApplication::translate("ModifyRepresentationDialogData", "C&ancel", 0, QApplication::UnicodeUTF8));
    cancel_button->setShortcut(QApplication::translate("ModifyRepresentationDialogData", "Alt+A", 0, QApplication::UnicodeUTF8));
    TextLabel1_3->setText(QApplication::translate("ModifyRepresentationDialogData", "Select grid", 0, QApplication::UnicodeUTF8));
    TextLabel15->setText(QApplication::translate("ModifyRepresentationDialogData", "max", 0, QApplication::UnicodeUTF8));
    TextLabel7_2->setText(QApplication::translate("ModifyRepresentationDialogData", "values", 0, QApplication::UnicodeUTF8));
    TextLabel14_2->setText(QApplication::translate("ModifyRepresentationDialogData", "mid", 0, QApplication::UnicodeUTF8));
    min_min_label->setText(QString());
    min_box->setText(QApplication::translate("ModifyRepresentationDialogData", "-1.0", 0, QApplication::UnicodeUTF8));
    mid_label->setText(QString());
    max_button->setText(QApplication::translate("ModifyRepresentationDialogData", "Select", 0, QApplication::UnicodeUTF8));
    max_box->setText(QApplication::translate("ModifyRepresentationDialogData", "1.0", 0, QApplication::UnicodeUTF8));
    mid_button->setText(QApplication::translate("ModifyRepresentationDialogData", "Select", 0, QApplication::UnicodeUTF8));
    max_max_label->setText(QString());
    max_max_button->setText(QApplication::translate("ModifyRepresentationDialogData", "Select", 0, QApplication::UnicodeUTF8));
    mid_box->setText(QApplication::translate("ModifyRepresentationDialogData", "0.0", 0, QApplication::UnicodeUTF8));
    TextLabel14_3->setText(QApplication::translate("ModifyRepresentationDialogData", "< min", 0, QApplication::UnicodeUTF8));
    autoscale->setToolTip(QApplication::translate("ModifyRepresentationDialogData", "Interpolate between the minimum, maximum and the mean value of the grid.", 0, QApplication::UnicodeUTF8));
    autoscale->setText(QApplication::translate("ModifyRepresentationDialogData", "Auto", 0, QApplication::UnicodeUTF8));
    min_label->setText(QString());
    TextLabel13->setText(QApplication::translate("ModifyRepresentationDialogData", "> max", 0, QApplication::UnicodeUTF8));
    max_label->setText(QString());
    min_min_button->setText(QApplication::translate("ModifyRepresentationDialogData", "Select", 0, QApplication::UnicodeUTF8));
    min_button->setText(QApplication::translate("ModifyRepresentationDialogData", "Select", 0, QApplication::UnicodeUTF8));
    TextLabel14->setText(QApplication::translate("ModifyRepresentationDialogData", "min", 0, QApplication::UnicodeUTF8));
    TextLabel1_2->setText(QApplication::translate("ModifyRepresentationDialogData", "alpha", 0, QApplication::UnicodeUTF8));
    TextLabel1->setText(QApplication::translate("ModifyRepresentationDialogData", "colors", 0, QApplication::UnicodeUTF8));
    TextLabel7->setText(QApplication::translate("ModifyRepresentationDialogData", "Number of levels", 0, QApplication::UnicodeUTF8));
    levels_box->setToolTip(QApplication::translate("ModifyRepresentationDialogData", "Number of interpolated colors", 0, QApplication::UnicodeUTF8));
    normalization->setText(QApplication::translate("ModifyRepresentationDialogData", "perform histogram equalization", 0, QApplication::UnicodeUTF8));
    grid_transparency->setText(QApplication::translate("ModifyRepresentationDialogData", "enable transparency", 0, QApplication::UnicodeUTF8));
    surface_tab->setTabText(surface_tab->indexOf(by_grid), QApplication::translate("ModifyRepresentationDialogData", "Color By Grid", 0, QApplication::UnicodeUTF8));
    custom_color_label->setText(QString());
    choose_button->setText(QApplication::translate("ModifyRepresentationDialogData", "Select", 0, QApplication::UnicodeUTF8));
    transparency_slider->setToolTip(QApplication::translate("ModifyRepresentationDialogData", "Select level of transparency", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2->setText(QApplication::translate("ModifyRepresentationDialogData", "Transparency", 0, QApplication::UnicodeUTF8));
    transparency_label->setText(QApplication::translate("ModifyRepresentationDialogData", "0%", 0, QApplication::UnicodeUTF8));
    color_only_selection->setText(QApplication::translate("ModifyRepresentationDialogData", "apply to selection only", 0, QApplication::UnicodeUTF8));
    surface_tab->setTabText(surface_tab->indexOf(by_color), QApplication::translate("ModifyRepresentationDialogData", "Custom Color", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2->setText(QApplication::translate("ModifyRepresentationDialogData", "Drawing Mode", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_2->setText(QApplication::translate("ModifyRepresentationDialogData", "Transparency", 0, QApplication::UnicodeUTF8));
    transparency_slider_2->setToolTip(QApplication::translate("ModifyRepresentationDialogData", "Select level of transparency", 0, QApplication::UnicodeUTF8));
    transparency_label_2->setText(QApplication::translate("ModifyRepresentationDialogData", "0%", 0, QApplication::UnicodeUTF8));
    mode_combobox->clear();
    mode_combobox->addItem(QApplication::translate("ModifyRepresentationDialogData", "dots", 0, QApplication::UnicodeUTF8));
    mode_combobox->addItem(QApplication::translate("ModifyRepresentationDialogData", "wireframe", 0, QApplication::UnicodeUTF8));
    mode_combobox->addItem(QApplication::translate("ModifyRepresentationDialogData", "solid", 0, QApplication::UnicodeUTF8));
    mode_combobox->addItem(QApplication::translate("ModifyRepresentationDialogData", "toon", 0, QApplication::UnicodeUTF8));
    surface_tab->setTabText(surface_tab->indexOf(drawing_mode), QApplication::translate("ModifyRepresentationDialogData", "Drawing Mode", 0, QApplication::UnicodeUTF8));
    split_group->setTitle(QApplication::translate("ModifyRepresentationDialogData", "Split Surface", 0, QApplication::UnicodeUTF8));
    split_by_distance->setText(QApplication::translate("ModifyRepresentationDialogData", "within distance from selection", 0, QApplication::UnicodeUTF8));
    distance_edit->setText(QApplication::translate("ModifyRepresentationDialogData", "1", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("ModifyRepresentationDialogData", "\303\205", 0, QApplication::UnicodeUTF8));
    split_by_selection->setText(QApplication::translate("ModifyRepresentationDialogData", "by selection", 0, QApplication::UnicodeUTF8));
    surface_tab->setTabText(surface_tab->indexOf(split), QApplication::translate("ModifyRepresentationDialogData", "Split", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(ModifyRepresentationDialogData);
    } // retranslateUi

};

namespace Ui {
    class ModifyRepresentationDialogData: public Ui_ModifyRepresentationDialogData {};
} // namespace Ui

#endif // MODIFYREPRESENTATIONDIALOGDATA_H
