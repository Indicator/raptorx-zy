/********************************************************************************
** Form generated from reading ui file 'modelSettingsDialog.ui'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef MODELSETTINGSDIALOGDATA_H
#define MODELSETTINGSDIALOGDATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_ModelSettingsDialogData
{
public:
    QStackedWidget *widget_stack;
    QWidget *Stick;
    QFrame *frame3;
    QLabel *textLabel1_2_2_2;
    QSlider *stick_radius_slider;
    QLabel *stick_radius_label;
    QWidget *Ball_and_Stick;
    QFrame *frame3_2_4;
    QLabel *ball_stick_cylinder_radius_label;
    QSlider *ball_stick_cylinder_radius_slider;
    QLabel *textLabel1_2_2_2_2_4;
    QFrame *frame3_2_2_2;
    QLabel *ball_stick_sphere_radius_label;
    QSlider *ball_stick_sphere_radius_slider;
    QLabel *textLabel1_2_2_2_2_2_2;
    QCheckBox *ball_stick_dashed_bonds;
    QWidget *VDW;
    QFrame *frame3_2_3_3;
    QLabel *textLabel1_2_2_2_2_3_3;
    QLabel *vdw_radius_factor_label;
    QSlider *vdw_radius_factor_slider;
    QWidget *Surface;
    QFrame *frame3_2_3_2_3;
    QLabel *textLabel1_2_2_2_2_3_2_3;
    QSlider *surface_probe_radius_slider;
    QLabel *surface_probe_radius_label;
    QWidget *Backbone;
    QFrame *frame3_2_3_2_2_3;
    QLabel *textLabel1_2_2_2_2_3_2_2_3;
    QSlider *tube_radius_slider;
    QLabel *tube_radius_label;
    QWidget *Cartoon;
    QGridLayout *gridLayout;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout1;
    QGroupBox *groupBox3;
    QGridLayout *gridLayout2;
    QSlider *strand_height_slider;
    QSlider *strand_width_slider;
    QSlider *strand_arrow_width_slider;
    QLabel *strand_arrow_width_label;
    QLabel *strand_width_label;
    QLabel *textLabel1_2_2_2_2_3_2_2_2_2_2_2_2;
    QLabel *textLabel1_2_2_2_2_3_2_2_2_2_2_3_2_2;
    QLabel *textLabel1_2_2_2_2_3_2_2_2_2_2_3;
    QLabel *strand_height_label;
    QCheckBox *ribbons_enabled;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1_2_2_2_2_3_2_2_2_4;
    QSlider *cartoon_tube_radius_slider;
    QLabel *cartoon_tube_radius_label;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel1_2_2_2_2_3_2_2_2_2_3;
    QSlider *cartoon_helix_radius_slider;
    QLabel *cartoon_helix_radius_label;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout3;
    QGroupBox *cartoon_dna_ladder;
    QGridLayout *gridLayout4;
    QSlider *cartoon_dna_ladder_radius_slider;
    QLabel *cartoon_dna_ladder_radius_label;
    QLabel *textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2_6;
    QGroupBox *cartoon_dna_wac;
    QGridLayout *gridLayout5;
    QLabel *textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2;
    QSlider *cartoon_dna_base_radius_slider;
    QLabel *cartoon_dna_base_radius_label;
    QLabel *textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2_5;
    QSlider *cartoon_dna_helix_radius_slider;
    QLabel *cartoon_dna_helix_radius_label;
    QWidget *H_Bonds;
    QGridLayout *gridLayout6;
    QFrame *frame3_2_3_2_2_2_3_3;
    QSlider *hbonds_radius_slider;
    QLabel *hbonds_radius_label;
    QLabel *textLabel1_2_2_2_2_3_2_2_2_3_3;
    QWidget *Forces;
    QWidget *widget;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel1_2_2_2_3_4;
    QSlider *force_max_length_slider;
    QLabel *force_max_length_label;
    QHBoxLayout *hboxLayout3;
    QLabel *textLabel1_2_2_2_3;
    QSlider *force_scaling_slider;
    QLabel *force_scaling_label;
    QHBoxLayout *hboxLayout4;
    QLabel *textLabel1_2_2_2_3_5;
    QSlider *force_base_slider;
    QLabel *force_base_label;
    QHBoxLayout *hboxLayout5;
    QLabel *textLabel1_2_2_2_3_6;
    QSlider *force_offset_slider;
    QLabel *force_offset_label;

    void setupUi(QWidget *ModelSettingsDialogData)
    {
    ModelSettingsDialogData->setObjectName(QString::fromUtf8("ModelSettingsDialogData"));
    ModelSettingsDialogData->setMinimumSize(QSize(610, 375));
    ModelSettingsDialogData->setMaximumSize(QSize(610, 375));
    widget_stack = new QStackedWidget(ModelSettingsDialogData);
    widget_stack->setObjectName(QString::fromUtf8("widget_stack"));
    widget_stack->setGeometry(QRect(0, 0, 600, 275));
    widget_stack->setMinimumSize(QSize(600, 16));
    widget_stack->setMaximumSize(QSize(600, 16777215));
    Stick = new QWidget();
    Stick->setObjectName(QString::fromUtf8("Stick"));
    frame3 = new QFrame(Stick);
    frame3->setObjectName(QString::fromUtf8("frame3"));
    frame3->setGeometry(QRect(2, 2, 426, 38));
    frame3->setFrameShape(QFrame::NoFrame);
    frame3->setFrameShadow(QFrame::Raised);
    textLabel1_2_2_2 = new QLabel(frame3);
    textLabel1_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2"));
    textLabel1_2_2_2->setGeometry(QRect(18, 10, 190, 25));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(textLabel1_2_2_2->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2->setSizePolicy(sizePolicy);
    textLabel1_2_2_2->setMinimumSize(QSize(120, 0));
    textLabel1_2_2_2->setMaximumSize(QSize(190, 32767));
    stick_radius_slider = new QSlider(frame3);
    stick_radius_slider->setObjectName(QString::fromUtf8("stick_radius_slider"));
    stick_radius_slider->setGeometry(QRect(219, 12, 84, 21));
    stick_radius_slider->setMinimumSize(QSize(84, 21));
    stick_radius_slider->setMaximumSize(QSize(84, 21));
    stick_radius_slider->setMinimum(1);
    stick_radius_slider->setMaximum(15);
    stick_radius_slider->setOrientation(Qt::Horizontal);
    stick_radius_slider->setTickInterval(7);
    stick_radius_label = new QLabel(frame3);
    stick_radius_label->setObjectName(QString::fromUtf8("stick_radius_label"));
    stick_radius_label->setGeometry(QRect(314, 10, 50, 25));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(stick_radius_label->sizePolicy().hasHeightForWidth());
    stick_radius_label->setSizePolicy(sizePolicy1);
    stick_radius_label->setMinimumSize(QSize(50, 25));
    stick_radius_label->setMaximumSize(QSize(35, 25));
    stick_radius_label->setAlignment(Qt::AlignCenter);
    widget_stack->addWidget(Stick);
    Ball_and_Stick = new QWidget();
    Ball_and_Stick->setObjectName(QString::fromUtf8("Ball_and_Stick"));
    frame3_2_4 = new QFrame(Ball_and_Stick);
    frame3_2_4->setObjectName(QString::fromUtf8("frame3_2_4"));
    frame3_2_4->setGeometry(QRect(2, 1, 470, 41));
    frame3_2_4->setFrameShape(QFrame::NoFrame);
    frame3_2_4->setFrameShadow(QFrame::Raised);
    ball_stick_cylinder_radius_label = new QLabel(frame3_2_4);
    ball_stick_cylinder_radius_label->setObjectName(QString::fromUtf8("ball_stick_cylinder_radius_label"));
    ball_stick_cylinder_radius_label->setGeometry(QRect(314, 10, 50, 25));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(ball_stick_cylinder_radius_label->sizePolicy().hasHeightForWidth());
    ball_stick_cylinder_radius_label->setSizePolicy(sizePolicy2);
    ball_stick_cylinder_radius_label->setMinimumSize(QSize(50, 25));
    ball_stick_cylinder_radius_label->setMaximumSize(QSize(35, 25));
    ball_stick_cylinder_radius_label->setAlignment(Qt::AlignCenter);
    ball_stick_cylinder_radius_slider = new QSlider(frame3_2_4);
    ball_stick_cylinder_radius_slider->setObjectName(QString::fromUtf8("ball_stick_cylinder_radius_slider"));
    ball_stick_cylinder_radius_slider->setGeometry(QRect(219, 12, 84, 21));
    ball_stick_cylinder_radius_slider->setMinimumSize(QSize(84, 21));
    ball_stick_cylinder_radius_slider->setMaximumSize(QSize(84, 21));
    ball_stick_cylinder_radius_slider->setMinimum(1);
    ball_stick_cylinder_radius_slider->setMaximum(15);
    ball_stick_cylinder_radius_slider->setOrientation(Qt::Horizontal);
    ball_stick_cylinder_radius_slider->setTickInterval(7);
    textLabel1_2_2_2_2_4 = new QLabel(frame3_2_4);
    textLabel1_2_2_2_2_4->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2_4"));
    textLabel1_2_2_2_2_4->setGeometry(QRect(18, 10, 190, 25));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(textLabel1_2_2_2_2_4->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_2_4->setSizePolicy(sizePolicy3);
    textLabel1_2_2_2_2_4->setMinimumSize(QSize(120, 0));
    textLabel1_2_2_2_2_4->setMaximumSize(QSize(190, 32767));
    frame3_2_2_2 = new QFrame(Ball_and_Stick);
    frame3_2_2_2->setObjectName(QString::fromUtf8("frame3_2_2_2"));
    frame3_2_2_2->setGeometry(QRect(2, 42, 470, 41));
    frame3_2_2_2->setFrameShape(QFrame::NoFrame);
    frame3_2_2_2->setFrameShadow(QFrame::Raised);
    ball_stick_sphere_radius_label = new QLabel(frame3_2_2_2);
    ball_stick_sphere_radius_label->setObjectName(QString::fromUtf8("ball_stick_sphere_radius_label"));
    ball_stick_sphere_radius_label->setGeometry(QRect(314, 10, 50, 25));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(ball_stick_sphere_radius_label->sizePolicy().hasHeightForWidth());
    ball_stick_sphere_radius_label->setSizePolicy(sizePolicy4);
    ball_stick_sphere_radius_label->setMinimumSize(QSize(50, 25));
    ball_stick_sphere_radius_label->setMaximumSize(QSize(35, 25));
    ball_stick_sphere_radius_label->setAlignment(Qt::AlignCenter);
    ball_stick_sphere_radius_slider = new QSlider(frame3_2_2_2);
    ball_stick_sphere_radius_slider->setObjectName(QString::fromUtf8("ball_stick_sphere_radius_slider"));
    ball_stick_sphere_radius_slider->setGeometry(QRect(219, 12, 84, 21));
    ball_stick_sphere_radius_slider->setMinimumSize(QSize(84, 21));
    ball_stick_sphere_radius_slider->setMaximumSize(QSize(84, 21));
    ball_stick_sphere_radius_slider->setMinimum(1);
    ball_stick_sphere_radius_slider->setMaximum(15);
    ball_stick_sphere_radius_slider->setOrientation(Qt::Horizontal);
    ball_stick_sphere_radius_slider->setTickInterval(7);
    textLabel1_2_2_2_2_2_2 = new QLabel(frame3_2_2_2);
    textLabel1_2_2_2_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2_2_2"));
    textLabel1_2_2_2_2_2_2->setGeometry(QRect(18, 10, 190, 25));
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(textLabel1_2_2_2_2_2_2->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_2_2_2->setSizePolicy(sizePolicy5);
    textLabel1_2_2_2_2_2_2->setMinimumSize(QSize(120, 0));
    textLabel1_2_2_2_2_2_2->setMaximumSize(QSize(190, 32767));
    ball_stick_dashed_bonds = new QCheckBox(Ball_and_Stick);
    ball_stick_dashed_bonds->setObjectName(QString::fromUtf8("ball_stick_dashed_bonds"));
    ball_stick_dashed_bonds->setGeometry(QRect(20, 97, 463, 21));
    ball_stick_dashed_bonds->setChecked(true);
    widget_stack->addWidget(Ball_and_Stick);
    VDW = new QWidget();
    VDW->setObjectName(QString::fromUtf8("VDW"));
    frame3_2_3_3 = new QFrame(VDW);
    frame3_2_3_3->setObjectName(QString::fromUtf8("frame3_2_3_3"));
    frame3_2_3_3->setGeometry(QRect(1, 1, 380, 41));
    frame3_2_3_3->setFrameShape(QFrame::NoFrame);
    frame3_2_3_3->setFrameShadow(QFrame::Raised);
    textLabel1_2_2_2_2_3_3 = new QLabel(frame3_2_3_3);
    textLabel1_2_2_2_2_3_3->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2_3_3"));
    textLabel1_2_2_2_2_3_3->setGeometry(QRect(18, 10, 190, 25));
    QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy6.setHorizontalStretch(0);
    sizePolicy6.setVerticalStretch(0);
    sizePolicy6.setHeightForWidth(textLabel1_2_2_2_2_3_3->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_2_3_3->setSizePolicy(sizePolicy6);
    textLabel1_2_2_2_2_3_3->setMinimumSize(QSize(120, 0));
    textLabel1_2_2_2_2_3_3->setMaximumSize(QSize(190, 32767));
    vdw_radius_factor_label = new QLabel(frame3_2_3_3);
    vdw_radius_factor_label->setObjectName(QString::fromUtf8("vdw_radius_factor_label"));
    vdw_radius_factor_label->setGeometry(QRect(314, 10, 50, 25));
    QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy7.setHorizontalStretch(0);
    sizePolicy7.setVerticalStretch(0);
    sizePolicy7.setHeightForWidth(vdw_radius_factor_label->sizePolicy().hasHeightForWidth());
    vdw_radius_factor_label->setSizePolicy(sizePolicy7);
    vdw_radius_factor_label->setMinimumSize(QSize(50, 25));
    vdw_radius_factor_label->setMaximumSize(QSize(35, 25));
    vdw_radius_factor_label->setAlignment(Qt::AlignCenter);
    vdw_radius_factor_slider = new QSlider(frame3_2_3_3);
    vdw_radius_factor_slider->setObjectName(QString::fromUtf8("vdw_radius_factor_slider"));
    vdw_radius_factor_slider->setGeometry(QRect(219, 12, 84, 21));
    vdw_radius_factor_slider->setMinimumSize(QSize(84, 21));
    vdw_radius_factor_slider->setMaximumSize(QSize(84, 21));
    vdw_radius_factor_slider->setMinimum(1);
    vdw_radius_factor_slider->setMaximum(20);
    vdw_radius_factor_slider->setOrientation(Qt::Horizontal);
    widget_stack->addWidget(VDW);
    Surface = new QWidget();
    Surface->setObjectName(QString::fromUtf8("Surface"));
    frame3_2_3_2_3 = new QFrame(Surface);
    frame3_2_3_2_3->setObjectName(QString::fromUtf8("frame3_2_3_2_3"));
    frame3_2_3_2_3->setGeometry(QRect(1, 1, 453, 41));
    frame3_2_3_2_3->setFrameShape(QFrame::NoFrame);
    frame3_2_3_2_3->setFrameShadow(QFrame::Raised);
    textLabel1_2_2_2_2_3_2_3 = new QLabel(frame3_2_3_2_3);
    textLabel1_2_2_2_2_3_2_3->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2_3_2_3"));
    textLabel1_2_2_2_2_3_2_3->setGeometry(QRect(26, 10, 160, 25));
    QSizePolicy sizePolicy8(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy8.setHorizontalStretch(0);
    sizePolicy8.setVerticalStretch(0);
    sizePolicy8.setHeightForWidth(textLabel1_2_2_2_2_3_2_3->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_2_3_2_3->setSizePolicy(sizePolicy8);
    textLabel1_2_2_2_2_3_2_3->setMinimumSize(QSize(120, 0));
    textLabel1_2_2_2_2_3_2_3->setMaximumSize(QSize(160, 32767));
    surface_probe_radius_slider = new QSlider(frame3_2_3_2_3);
    surface_probe_radius_slider->setObjectName(QString::fromUtf8("surface_probe_radius_slider"));
    surface_probe_radius_slider->setGeometry(QRect(205, 12, 84, 21));
    surface_probe_radius_slider->setMinimumSize(QSize(84, 21));
    surface_probe_radius_slider->setMaximumSize(QSize(84, 21));
    surface_probe_radius_slider->setMinimum(2);
    surface_probe_radius_slider->setMaximum(40);
    surface_probe_radius_slider->setOrientation(Qt::Horizontal);
    surface_probe_radius_slider->setTickInterval(6);
    surface_probe_radius_label = new QLabel(frame3_2_3_2_3);
    surface_probe_radius_label->setObjectName(QString::fromUtf8("surface_probe_radius_label"));
    surface_probe_radius_label->setGeometry(QRect(308, 10, 50, 25));
    QSizePolicy sizePolicy9(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy9.setHorizontalStretch(0);
    sizePolicy9.setVerticalStretch(0);
    sizePolicy9.setHeightForWidth(surface_probe_radius_label->sizePolicy().hasHeightForWidth());
    surface_probe_radius_label->setSizePolicy(sizePolicy9);
    surface_probe_radius_label->setMinimumSize(QSize(50, 25));
    surface_probe_radius_label->setMaximumSize(QSize(35, 25));
    surface_probe_radius_label->setAlignment(Qt::AlignCenter);
    widget_stack->addWidget(Surface);
    Backbone = new QWidget();
    Backbone->setObjectName(QString::fromUtf8("Backbone"));
    frame3_2_3_2_2_3 = new QFrame(Backbone);
    frame3_2_3_2_2_3->setObjectName(QString::fromUtf8("frame3_2_3_2_2_3"));
    frame3_2_3_2_2_3->setGeometry(QRect(1, 1, 472, 41));
    frame3_2_3_2_2_3->setFrameShape(QFrame::NoFrame);
    frame3_2_3_2_2_3->setFrameShadow(QFrame::Raised);
    textLabel1_2_2_2_2_3_2_2_3 = new QLabel(frame3_2_3_2_2_3);
    textLabel1_2_2_2_2_3_2_2_3->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2_3_2_2_3"));
    textLabel1_2_2_2_2_3_2_2_3->setGeometry(QRect(26, 10, 160, 25));
    QSizePolicy sizePolicy10(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy10.setHorizontalStretch(0);
    sizePolicy10.setVerticalStretch(0);
    sizePolicy10.setHeightForWidth(textLabel1_2_2_2_2_3_2_2_3->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_2_3_2_2_3->setSizePolicy(sizePolicy10);
    textLabel1_2_2_2_2_3_2_2_3->setMinimumSize(QSize(120, 0));
    textLabel1_2_2_2_2_3_2_2_3->setMaximumSize(QSize(160, 32767));
    tube_radius_slider = new QSlider(frame3_2_3_2_2_3);
    tube_radius_slider->setObjectName(QString::fromUtf8("tube_radius_slider"));
    tube_radius_slider->setGeometry(QRect(205, 12, 84, 21));
    tube_radius_slider->setMinimumSize(QSize(84, 21));
    tube_radius_slider->setMaximumSize(QSize(84, 21));
    tube_radius_slider->setMinimum(1);
    tube_radius_slider->setMaximum(25);
    tube_radius_slider->setOrientation(Qt::Horizontal);
    tube_radius_slider->setTickInterval(12);
    tube_radius_label = new QLabel(frame3_2_3_2_2_3);
    tube_radius_label->setObjectName(QString::fromUtf8("tube_radius_label"));
    tube_radius_label->setGeometry(QRect(308, 10, 50, 25));
    QSizePolicy sizePolicy11(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy11.setHorizontalStretch(0);
    sizePolicy11.setVerticalStretch(0);
    sizePolicy11.setHeightForWidth(tube_radius_label->sizePolicy().hasHeightForWidth());
    tube_radius_label->setSizePolicy(sizePolicy11);
    tube_radius_label->setMinimumSize(QSize(50, 25));
    tube_radius_label->setMaximumSize(QSize(35, 25));
    tube_radius_label->setAlignment(Qt::AlignCenter);
    widget_stack->addWidget(Backbone);
    Cartoon = new QWidget();
    Cartoon->setObjectName(QString::fromUtf8("Cartoon"));
    gridLayout = new QGridLayout(Cartoon);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    groupBox2 = new QGroupBox(Cartoon);
    groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
    groupBox2->setAlignment(Qt::AlignHCenter);
    gridLayout1 = new QGridLayout(groupBox2);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(5);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    groupBox3 = new QGroupBox(groupBox2);
    groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
    gridLayout2 = new QGridLayout(groupBox3);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(9);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    strand_height_slider = new QSlider(groupBox3);
    strand_height_slider->setObjectName(QString::fromUtf8("strand_height_slider"));
    QSizePolicy sizePolicy12(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy12.setHorizontalStretch(0);
    sizePolicy12.setVerticalStretch(0);
    sizePolicy12.setHeightForWidth(strand_height_slider->sizePolicy().hasHeightForWidth());
    strand_height_slider->setSizePolicy(sizePolicy12);
    strand_height_slider->setMinimumSize(QSize(70, 21));
    strand_height_slider->setMaximumSize(QSize(80, 21));
    strand_height_slider->setMinimum(1);
    strand_height_slider->setMaximum(50);
    strand_height_slider->setValue(25);
    strand_height_slider->setOrientation(Qt::Horizontal);
    strand_height_slider->setTickInterval(12);

    gridLayout2->addWidget(strand_height_slider, 2, 1, 1, 1);

    strand_width_slider = new QSlider(groupBox3);
    strand_width_slider->setObjectName(QString::fromUtf8("strand_width_slider"));
    QSizePolicy sizePolicy13(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy13.setHorizontalStretch(0);
    sizePolicy13.setVerticalStretch(0);
    sizePolicy13.setHeightForWidth(strand_width_slider->sizePolicy().hasHeightForWidth());
    strand_width_slider->setSizePolicy(sizePolicy13);
    strand_width_slider->setMinimumSize(QSize(70, 21));
    strand_width_slider->setMaximumSize(QSize(80, 21));
    strand_width_slider->setMinimum(1);
    strand_width_slider->setMaximum(25);
    strand_width_slider->setValue(25);
    strand_width_slider->setOrientation(Qt::Horizontal);
    strand_width_slider->setTickInterval(12);

    gridLayout2->addWidget(strand_width_slider, 1, 1, 1, 1);

    strand_arrow_width_slider = new QSlider(groupBox3);
    strand_arrow_width_slider->setObjectName(QString::fromUtf8("strand_arrow_width_slider"));
    QSizePolicy sizePolicy14(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy14.setHorizontalStretch(0);
    sizePolicy14.setVerticalStretch(0);
    sizePolicy14.setHeightForWidth(strand_arrow_width_slider->sizePolicy().hasHeightForWidth());
    strand_arrow_width_slider->setSizePolicy(sizePolicy14);
    strand_arrow_width_slider->setMinimumSize(QSize(70, 21));
    strand_arrow_width_slider->setMaximumSize(QSize(80, 21));
    strand_arrow_width_slider->setMinimum(1);
    strand_arrow_width_slider->setMaximum(50);
    strand_arrow_width_slider->setValue(25);
    strand_arrow_width_slider->setOrientation(Qt::Horizontal);
    strand_arrow_width_slider->setTickInterval(12);

    gridLayout2->addWidget(strand_arrow_width_slider, 0, 1, 1, 2);

    strand_arrow_width_label = new QLabel(groupBox3);
    strand_arrow_width_label->setObjectName(QString::fromUtf8("strand_arrow_width_label"));
    QSizePolicy sizePolicy15(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy15.setHorizontalStretch(0);
    sizePolicy15.setVerticalStretch(0);
    sizePolicy15.setHeightForWidth(strand_arrow_width_label->sizePolicy().hasHeightForWidth());
    strand_arrow_width_label->setSizePolicy(sizePolicy15);
    strand_arrow_width_label->setMinimumSize(QSize(50, 25));
    strand_arrow_width_label->setMaximumSize(QSize(35, 25));
    strand_arrow_width_label->setAlignment(Qt::AlignCenter);

    gridLayout2->addWidget(strand_arrow_width_label, 0, 3, 1, 1);

    strand_width_label = new QLabel(groupBox3);
    strand_width_label->setObjectName(QString::fromUtf8("strand_width_label"));
    QSizePolicy sizePolicy16(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy16.setHorizontalStretch(0);
    sizePolicy16.setVerticalStretch(0);
    sizePolicy16.setHeightForWidth(strand_width_label->sizePolicy().hasHeightForWidth());
    strand_width_label->setSizePolicy(sizePolicy16);
    strand_width_label->setMinimumSize(QSize(50, 25));
    strand_width_label->setMaximumSize(QSize(35, 25));
    strand_width_label->setAlignment(Qt::AlignCenter);

    gridLayout2->addWidget(strand_width_label, 1, 2, 1, 2);

    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2 = new QLabel(groupBox3);
    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2_3_2_2_2_2_2_2_2"));
    QSizePolicy sizePolicy17(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy17.setHorizontalStretch(0);
    sizePolicy17.setVerticalStretch(0);
    sizePolicy17.setHeightForWidth(textLabel1_2_2_2_2_3_2_2_2_2_2_2_2->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2->setSizePolicy(sizePolicy17);
    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2->setMinimumSize(QSize(90, 0));
    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2->setMaximumSize(QSize(120, 32767));

    gridLayout2->addWidget(textLabel1_2_2_2_2_3_2_2_2_2_2_2_2, 1, 0, 1, 1);

    textLabel1_2_2_2_2_3_2_2_2_2_2_3_2_2 = new QLabel(groupBox3);
    textLabel1_2_2_2_2_3_2_2_2_2_2_3_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2_3_2_2_2_2_2_3_2_2"));
    QSizePolicy sizePolicy18(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy18.setHorizontalStretch(0);
    sizePolicy18.setVerticalStretch(0);
    sizePolicy18.setHeightForWidth(textLabel1_2_2_2_2_3_2_2_2_2_2_3_2_2->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_2_3_2_2_2_2_2_3_2_2->setSizePolicy(sizePolicy18);
    textLabel1_2_2_2_2_3_2_2_2_2_2_3_2_2->setMinimumSize(QSize(90, 0));
    textLabel1_2_2_2_2_3_2_2_2_2_2_3_2_2->setMaximumSize(QSize(120, 32767));

    gridLayout2->addWidget(textLabel1_2_2_2_2_3_2_2_2_2_2_3_2_2, 2, 0, 1, 1);

    textLabel1_2_2_2_2_3_2_2_2_2_2_3 = new QLabel(groupBox3);
    textLabel1_2_2_2_2_3_2_2_2_2_2_3->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2_3_2_2_2_2_2_3"));
    QSizePolicy sizePolicy19(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy19.setHorizontalStretch(0);
    sizePolicy19.setVerticalStretch(0);
    sizePolicy19.setHeightForWidth(textLabel1_2_2_2_2_3_2_2_2_2_2_3->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_2_3_2_2_2_2_2_3->setSizePolicy(sizePolicy19);
    textLabel1_2_2_2_2_3_2_2_2_2_2_3->setMinimumSize(QSize(90, 0));
    textLabel1_2_2_2_2_3_2_2_2_2_2_3->setMaximumSize(QSize(120, 32767));

    gridLayout2->addWidget(textLabel1_2_2_2_2_3_2_2_2_2_2_3, 0, 0, 1, 1);

    strand_height_label = new QLabel(groupBox3);
    strand_height_label->setObjectName(QString::fromUtf8("strand_height_label"));
    QSizePolicy sizePolicy20(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy20.setHorizontalStretch(0);
    sizePolicy20.setVerticalStretch(0);
    sizePolicy20.setHeightForWidth(strand_height_label->sizePolicy().hasHeightForWidth());
    strand_height_label->setSizePolicy(sizePolicy20);
    strand_height_label->setMinimumSize(QSize(50, 25));
    strand_height_label->setMaximumSize(QSize(35, 25));
    strand_height_label->setAlignment(Qt::AlignCenter);

    gridLayout2->addWidget(strand_height_label, 2, 2, 1, 2);


    gridLayout1->addWidget(groupBox3, 1, 0, 1, 1);

    ribbons_enabled = new QCheckBox(groupBox2);
    ribbons_enabled->setObjectName(QString::fromUtf8("ribbons_enabled"));

    gridLayout1->addWidget(ribbons_enabled, 2, 0, 1, 1);

    vboxLayout = new QVBoxLayout();
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(0);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    textLabel1_2_2_2_2_3_2_2_2_4 = new QLabel(groupBox2);
    textLabel1_2_2_2_2_3_2_2_2_4->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2_3_2_2_2_4"));
    QSizePolicy sizePolicy21(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy21.setHorizontalStretch(0);
    sizePolicy21.setVerticalStretch(0);
    sizePolicy21.setHeightForWidth(textLabel1_2_2_2_2_3_2_2_2_4->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_2_3_2_2_2_4->setSizePolicy(sizePolicy21);
    textLabel1_2_2_2_2_3_2_2_2_4->setMinimumSize(QSize(90, 0));
    textLabel1_2_2_2_2_3_2_2_2_4->setMaximumSize(QSize(120, 32767));

    hboxLayout->addWidget(textLabel1_2_2_2_2_3_2_2_2_4);

    cartoon_tube_radius_slider = new QSlider(groupBox2);
    cartoon_tube_radius_slider->setObjectName(QString::fromUtf8("cartoon_tube_radius_slider"));
    cartoon_tube_radius_slider->setMinimumSize(QSize(80, 21));
    cartoon_tube_radius_slider->setMaximumSize(QSize(80, 21));
    cartoon_tube_radius_slider->setMinimum(1);
    cartoon_tube_radius_slider->setMaximum(25);
    cartoon_tube_radius_slider->setValue(25);
    cartoon_tube_radius_slider->setOrientation(Qt::Horizontal);

    hboxLayout->addWidget(cartoon_tube_radius_slider);

    cartoon_tube_radius_label = new QLabel(groupBox2);
    cartoon_tube_radius_label->setObjectName(QString::fromUtf8("cartoon_tube_radius_label"));
    QSizePolicy sizePolicy22(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy22.setHorizontalStretch(0);
    sizePolicy22.setVerticalStretch(0);
    sizePolicy22.setHeightForWidth(cartoon_tube_radius_label->sizePolicy().hasHeightForWidth());
    cartoon_tube_radius_label->setSizePolicy(sizePolicy22);
    cartoon_tube_radius_label->setMinimumSize(QSize(50, 25));
    cartoon_tube_radius_label->setMaximumSize(QSize(35, 25));
    cartoon_tube_radius_label->setAlignment(Qt::AlignCenter);

    hboxLayout->addWidget(cartoon_tube_radius_label);


    vboxLayout->addLayout(hboxLayout);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(0);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    textLabel1_2_2_2_2_3_2_2_2_2_3 = new QLabel(groupBox2);
    textLabel1_2_2_2_2_3_2_2_2_2_3->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2_3_2_2_2_2_3"));
    QSizePolicy sizePolicy23(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy23.setHorizontalStretch(0);
    sizePolicy23.setVerticalStretch(0);
    sizePolicy23.setHeightForWidth(textLabel1_2_2_2_2_3_2_2_2_2_3->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_2_3_2_2_2_2_3->setSizePolicy(sizePolicy23);
    textLabel1_2_2_2_2_3_2_2_2_2_3->setMinimumSize(QSize(90, 0));
    textLabel1_2_2_2_2_3_2_2_2_2_3->setMaximumSize(QSize(120, 32767));

    hboxLayout1->addWidget(textLabel1_2_2_2_2_3_2_2_2_2_3);

    cartoon_helix_radius_slider = new QSlider(groupBox2);
    cartoon_helix_radius_slider->setObjectName(QString::fromUtf8("cartoon_helix_radius_slider"));
    cartoon_helix_radius_slider->setMinimumSize(QSize(80, 21));
    cartoon_helix_radius_slider->setMaximumSize(QSize(80, 21));
    cartoon_helix_radius_slider->setMinimum(1);
    cartoon_helix_radius_slider->setMaximum(50);
    cartoon_helix_radius_slider->setValue(50);
    cartoon_helix_radius_slider->setOrientation(Qt::Horizontal);
    cartoon_helix_radius_slider->setTickInterval(25);

    hboxLayout1->addWidget(cartoon_helix_radius_slider);

    cartoon_helix_radius_label = new QLabel(groupBox2);
    cartoon_helix_radius_label->setObjectName(QString::fromUtf8("cartoon_helix_radius_label"));
    QSizePolicy sizePolicy24(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy24.setHorizontalStretch(0);
    sizePolicy24.setVerticalStretch(0);
    sizePolicy24.setHeightForWidth(cartoon_helix_radius_label->sizePolicy().hasHeightForWidth());
    cartoon_helix_radius_label->setSizePolicy(sizePolicy24);
    cartoon_helix_radius_label->setMinimumSize(QSize(50, 25));
    cartoon_helix_radius_label->setMaximumSize(QSize(35, 25));
    cartoon_helix_radius_label->setAlignment(Qt::AlignCenter);

    hboxLayout1->addWidget(cartoon_helix_radius_label);


    vboxLayout->addLayout(hboxLayout1);


    gridLayout1->addLayout(vboxLayout, 0, 0, 1, 1);


    gridLayout->addWidget(groupBox2, 0, 0, 1, 1);

    groupBox1 = new QGroupBox(Cartoon);
    groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
    groupBox1->setAlignment(Qt::AlignHCenter);
    gridLayout3 = new QGridLayout(groupBox1);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(5);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    cartoon_dna_ladder = new QGroupBox(groupBox1);
    cartoon_dna_ladder->setObjectName(QString::fromUtf8("cartoon_dna_ladder"));
    cartoon_dna_ladder->setCheckable(true);
    gridLayout4 = new QGridLayout(cartoon_dna_ladder);
    gridLayout4->setSpacing(6);
    gridLayout4->setMargin(9);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    cartoon_dna_ladder_radius_slider = new QSlider(cartoon_dna_ladder);
    cartoon_dna_ladder_radius_slider->setObjectName(QString::fromUtf8("cartoon_dna_ladder_radius_slider"));
    cartoon_dna_ladder_radius_slider->setMinimumSize(QSize(80, 21));
    cartoon_dna_ladder_radius_slider->setMaximumSize(QSize(80, 21));
    cartoon_dna_ladder_radius_slider->setMinimum(5);
    cartoon_dna_ladder_radius_slider->setMaximum(15);
    cartoon_dna_ladder_radius_slider->setValue(15);
    cartoon_dna_ladder_radius_slider->setOrientation(Qt::Horizontal);
    cartoon_dna_ladder_radius_slider->setTickInterval(12);

    gridLayout4->addWidget(cartoon_dna_ladder_radius_slider, 0, 1, 1, 1);

    cartoon_dna_ladder_radius_label = new QLabel(cartoon_dna_ladder);
    cartoon_dna_ladder_radius_label->setObjectName(QString::fromUtf8("cartoon_dna_ladder_radius_label"));
    QSizePolicy sizePolicy25(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy25.setHorizontalStretch(0);
    sizePolicy25.setVerticalStretch(0);
    sizePolicy25.setHeightForWidth(cartoon_dna_ladder_radius_label->sizePolicy().hasHeightForWidth());
    cartoon_dna_ladder_radius_label->setSizePolicy(sizePolicy25);
    cartoon_dna_ladder_radius_label->setMinimumSize(QSize(50, 25));
    cartoon_dna_ladder_radius_label->setMaximumSize(QSize(35, 25));
    cartoon_dna_ladder_radius_label->setAlignment(Qt::AlignCenter);

    gridLayout4->addWidget(cartoon_dna_ladder_radius_label, 0, 2, 1, 1);

    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2_6 = new QLabel(cartoon_dna_ladder);
    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2_6->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2_6"));
    QSizePolicy sizePolicy26(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy26.setHorizontalStretch(0);
    sizePolicy26.setVerticalStretch(0);
    sizePolicy26.setHeightForWidth(textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2_6->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2_6->setSizePolicy(sizePolicy26);
    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2_6->setMinimumSize(QSize(90, 0));
    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2_6->setMaximumSize(QSize(120, 32767));

    gridLayout4->addWidget(textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2_6, 0, 0, 1, 1);


    gridLayout3->addWidget(cartoon_dna_ladder, 1, 0, 1, 1);

    cartoon_dna_wac = new QGroupBox(groupBox1);
    cartoon_dna_wac->setObjectName(QString::fromUtf8("cartoon_dna_wac"));
    cartoon_dna_wac->setCheckable(true);
    gridLayout5 = new QGridLayout(cartoon_dna_wac);
    gridLayout5->setSpacing(3);
    gridLayout5->setMargin(3);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2 = new QLabel(cartoon_dna_wac);
    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2"));
    QSizePolicy sizePolicy27(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy27.setHorizontalStretch(0);
    sizePolicy27.setVerticalStretch(0);
    sizePolicy27.setHeightForWidth(textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2->setSizePolicy(sizePolicy27);
    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2->setMinimumSize(QSize(90, 0));
    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2->setMaximumSize(QSize(120, 32767));

    gridLayout5->addWidget(textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2, 1, 0, 1, 1);

    cartoon_dna_base_radius_slider = new QSlider(cartoon_dna_wac);
    cartoon_dna_base_radius_slider->setObjectName(QString::fromUtf8("cartoon_dna_base_radius_slider"));
    cartoon_dna_base_radius_slider->setMinimumSize(QSize(60, 21));
    cartoon_dna_base_radius_slider->setMaximumSize(QSize(80, 21));
    cartoon_dna_base_radius_slider->setMinimum(1);
    cartoon_dna_base_radius_slider->setMaximum(15);
    cartoon_dna_base_radius_slider->setValue(15);
    cartoon_dna_base_radius_slider->setOrientation(Qt::Horizontal);
    cartoon_dna_base_radius_slider->setTickInterval(12);

    gridLayout5->addWidget(cartoon_dna_base_radius_slider, 0, 1, 1, 1);

    cartoon_dna_base_radius_label = new QLabel(cartoon_dna_wac);
    cartoon_dna_base_radius_label->setObjectName(QString::fromUtf8("cartoon_dna_base_radius_label"));
    QSizePolicy sizePolicy28(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy28.setHorizontalStretch(0);
    sizePolicy28.setVerticalStretch(0);
    sizePolicy28.setHeightForWidth(cartoon_dna_base_radius_label->sizePolicy().hasHeightForWidth());
    cartoon_dna_base_radius_label->setSizePolicy(sizePolicy28);
    cartoon_dna_base_radius_label->setMinimumSize(QSize(50, 25));
    cartoon_dna_base_radius_label->setMaximumSize(QSize(35, 25));
    cartoon_dna_base_radius_label->setAlignment(Qt::AlignCenter);

    gridLayout5->addWidget(cartoon_dna_base_radius_label, 0, 2, 1, 1);

    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2_5 = new QLabel(cartoon_dna_wac);
    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2_5->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2_5"));
    QSizePolicy sizePolicy29(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy29.setHorizontalStretch(0);
    sizePolicy29.setVerticalStretch(0);
    sizePolicy29.setHeightForWidth(textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2_5->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2_5->setSizePolicy(sizePolicy29);
    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2_5->setMinimumSize(QSize(90, 0));
    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2_5->setMaximumSize(QSize(120, 32767));

    gridLayout5->addWidget(textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2_5, 0, 0, 1, 1);

    cartoon_dna_helix_radius_slider = new QSlider(cartoon_dna_wac);
    cartoon_dna_helix_radius_slider->setObjectName(QString::fromUtf8("cartoon_dna_helix_radius_slider"));
    cartoon_dna_helix_radius_slider->setMinimumSize(QSize(60, 21));
    cartoon_dna_helix_radius_slider->setMaximumSize(QSize(80, 21));
    cartoon_dna_helix_radius_slider->setMinimum(2);
    cartoon_dna_helix_radius_slider->setMaximum(25);
    cartoon_dna_helix_radius_slider->setValue(25);
    cartoon_dna_helix_radius_slider->setOrientation(Qt::Horizontal);
    cartoon_dna_helix_radius_slider->setTickInterval(12);

    gridLayout5->addWidget(cartoon_dna_helix_radius_slider, 1, 1, 1, 1);

    cartoon_dna_helix_radius_label = new QLabel(cartoon_dna_wac);
    cartoon_dna_helix_radius_label->setObjectName(QString::fromUtf8("cartoon_dna_helix_radius_label"));
    QSizePolicy sizePolicy30(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy30.setHorizontalStretch(0);
    sizePolicy30.setVerticalStretch(0);
    sizePolicy30.setHeightForWidth(cartoon_dna_helix_radius_label->sizePolicy().hasHeightForWidth());
    cartoon_dna_helix_radius_label->setSizePolicy(sizePolicy30);
    cartoon_dna_helix_radius_label->setMinimumSize(QSize(50, 25));
    cartoon_dna_helix_radius_label->setMaximumSize(QSize(35, 25));
    cartoon_dna_helix_radius_label->setAlignment(Qt::AlignCenter);

    gridLayout5->addWidget(cartoon_dna_helix_radius_label, 1, 2, 1, 1);


    gridLayout3->addWidget(cartoon_dna_wac, 0, 0, 1, 1);


    gridLayout->addWidget(groupBox1, 0, 1, 1, 1);

    widget_stack->addWidget(Cartoon);
    H_Bonds = new QWidget();
    H_Bonds->setObjectName(QString::fromUtf8("H_Bonds"));
    gridLayout6 = new QGridLayout(H_Bonds);
    gridLayout6->setSpacing(6);
    gridLayout6->setMargin(9);
    gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
    frame3_2_3_2_2_2_3_3 = new QFrame(H_Bonds);
    frame3_2_3_2_2_2_3_3->setObjectName(QString::fromUtf8("frame3_2_3_2_2_2_3_3"));
    frame3_2_3_2_2_2_3_3->setFrameShape(QFrame::NoFrame);
    frame3_2_3_2_2_2_3_3->setFrameShadow(QFrame::Raised);
    hbonds_radius_slider = new QSlider(frame3_2_3_2_2_2_3_3);
    hbonds_radius_slider->setObjectName(QString::fromUtf8("hbonds_radius_slider"));
    hbonds_radius_slider->setGeometry(QRect(186, 12, 84, 21));
    hbonds_radius_slider->setMinimumSize(QSize(84, 21));
    hbonds_radius_slider->setMaximumSize(QSize(84, 21));
    hbonds_radius_slider->setMinimum(1);
    hbonds_radius_slider->setMaximum(25);
    hbonds_radius_slider->setOrientation(Qt::Horizontal);
    hbonds_radius_slider->setTickInterval(12);
    hbonds_radius_label = new QLabel(frame3_2_3_2_2_2_3_3);
    hbonds_radius_label->setObjectName(QString::fromUtf8("hbonds_radius_label"));
    hbonds_radius_label->setGeometry(QRect(298, 10, 50, 25));
    QSizePolicy sizePolicy31(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy31.setHorizontalStretch(0);
    sizePolicy31.setVerticalStretch(0);
    sizePolicy31.setHeightForWidth(hbonds_radius_label->sizePolicy().hasHeightForWidth());
    hbonds_radius_label->setSizePolicy(sizePolicy31);
    hbonds_radius_label->setMinimumSize(QSize(50, 25));
    hbonds_radius_label->setMaximumSize(QSize(35, 25));
    hbonds_radius_label->setAlignment(Qt::AlignCenter);
    textLabel1_2_2_2_2_3_2_2_2_3_3 = new QLabel(frame3_2_3_2_2_2_3_3);
    textLabel1_2_2_2_2_3_2_2_2_3_3->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2_3_2_2_2_3_3"));
    textLabel1_2_2_2_2_3_2_2_2_3_3->setGeometry(QRect(35, 12, 123, 21));
    QSizePolicy sizePolicy32(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy32.setHorizontalStretch(0);
    sizePolicy32.setVerticalStretch(0);
    sizePolicy32.setHeightForWidth(textLabel1_2_2_2_2_3_2_2_2_3_3->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_2_3_2_2_2_3_3->setSizePolicy(sizePolicy32);
    textLabel1_2_2_2_2_3_2_2_2_3_3->setMinimumSize(QSize(120, 0));
    textLabel1_2_2_2_2_3_2_2_2_3_3->setMaximumSize(QSize(160, 32767));

    gridLayout6->addWidget(frame3_2_3_2_2_2_3_3, 0, 0, 1, 1);

    widget_stack->addWidget(H_Bonds);
    Forces = new QWidget();
    Forces->setObjectName(QString::fromUtf8("Forces"));
    widget = new QWidget(Forces);
    widget->setObjectName(QString::fromUtf8("widget"));
    widget->setGeometry(QRect(0, 0, 401, 171));
    vboxLayout1 = new QVBoxLayout(widget);
    vboxLayout1->setSpacing(6);
    vboxLayout1->setMargin(0);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    hboxLayout2 = new QHBoxLayout();
    hboxLayout2->setSpacing(6);
    hboxLayout2->setMargin(0);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    textLabel1_2_2_2_3_4 = new QLabel(widget);
    textLabel1_2_2_2_3_4->setObjectName(QString::fromUtf8("textLabel1_2_2_2_3_4"));
    QSizePolicy sizePolicy33(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy33.setHorizontalStretch(0);
    sizePolicy33.setVerticalStretch(0);
    sizePolicy33.setHeightForWidth(textLabel1_2_2_2_3_4->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_3_4->setSizePolicy(sizePolicy33);
    textLabel1_2_2_2_3_4->setMinimumSize(QSize(120, 0));
    textLabel1_2_2_2_3_4->setMaximumSize(QSize(190, 32767));

    hboxLayout2->addWidget(textLabel1_2_2_2_3_4);

    force_max_length_slider = new QSlider(widget);
    force_max_length_slider->setObjectName(QString::fromUtf8("force_max_length_slider"));
    force_max_length_slider->setMinimumSize(QSize(84, 21));
    force_max_length_slider->setMaximumSize(QSize(84, 21));
    force_max_length_slider->setMinimum(10);
    force_max_length_slider->setMaximum(300);
    force_max_length_slider->setValue(300);
    force_max_length_slider->setOrientation(Qt::Horizontal);
    force_max_length_slider->setTickInterval(70);

    hboxLayout2->addWidget(force_max_length_slider);

    force_max_length_label = new QLabel(widget);
    force_max_length_label->setObjectName(QString::fromUtf8("force_max_length_label"));
    QSizePolicy sizePolicy34(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy34.setHorizontalStretch(0);
    sizePolicy34.setVerticalStretch(0);
    sizePolicy34.setHeightForWidth(force_max_length_label->sizePolicy().hasHeightForWidth());
    force_max_length_label->setSizePolicy(sizePolicy34);
    force_max_length_label->setMinimumSize(QSize(50, 25));
    force_max_length_label->setMaximumSize(QSize(35, 25));
    force_max_length_label->setAlignment(Qt::AlignCenter);

    hboxLayout2->addWidget(force_max_length_label);


    vboxLayout1->addLayout(hboxLayout2);

    hboxLayout3 = new QHBoxLayout();
    hboxLayout3->setSpacing(6);
    hboxLayout3->setMargin(0);
    hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
    textLabel1_2_2_2_3 = new QLabel(widget);
    textLabel1_2_2_2_3->setObjectName(QString::fromUtf8("textLabel1_2_2_2_3"));
    QSizePolicy sizePolicy35(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy35.setHorizontalStretch(0);
    sizePolicy35.setVerticalStretch(0);
    sizePolicy35.setHeightForWidth(textLabel1_2_2_2_3->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_3->setSizePolicy(sizePolicy35);
    textLabel1_2_2_2_3->setMinimumSize(QSize(120, 0));
    textLabel1_2_2_2_3->setMaximumSize(QSize(190, 32767));

    hboxLayout3->addWidget(textLabel1_2_2_2_3);

    force_scaling_slider = new QSlider(widget);
    force_scaling_slider->setObjectName(QString::fromUtf8("force_scaling_slider"));
    force_scaling_slider->setMinimumSize(QSize(84, 21));
    force_scaling_slider->setMaximumSize(QSize(84, 21));
    force_scaling_slider->setMinimum(1);
    force_scaling_slider->setMaximum(250);
    force_scaling_slider->setValue(10);
    force_scaling_slider->setOrientation(Qt::Horizontal);
    force_scaling_slider->setTickInterval(10);

    hboxLayout3->addWidget(force_scaling_slider);

    force_scaling_label = new QLabel(widget);
    force_scaling_label->setObjectName(QString::fromUtf8("force_scaling_label"));
    QSizePolicy sizePolicy36(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy36.setHorizontalStretch(0);
    sizePolicy36.setVerticalStretch(0);
    sizePolicy36.setHeightForWidth(force_scaling_label->sizePolicy().hasHeightForWidth());
    force_scaling_label->setSizePolicy(sizePolicy36);
    force_scaling_label->setMinimumSize(QSize(50, 25));
    force_scaling_label->setMaximumSize(QSize(35, 25));
    force_scaling_label->setAlignment(Qt::AlignCenter);

    hboxLayout3->addWidget(force_scaling_label);


    vboxLayout1->addLayout(hboxLayout3);

    hboxLayout4 = new QHBoxLayout();
    hboxLayout4->setSpacing(6);
    hboxLayout4->setMargin(0);
    hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
    textLabel1_2_2_2_3_5 = new QLabel(widget);
    textLabel1_2_2_2_3_5->setObjectName(QString::fromUtf8("textLabel1_2_2_2_3_5"));
    QSizePolicy sizePolicy37(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy37.setHorizontalStretch(0);
    sizePolicy37.setVerticalStretch(0);
    sizePolicy37.setHeightForWidth(textLabel1_2_2_2_3_5->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_3_5->setSizePolicy(sizePolicy37);
    textLabel1_2_2_2_3_5->setMinimumSize(QSize(120, 0));
    textLabel1_2_2_2_3_5->setMaximumSize(QSize(190, 32767));

    hboxLayout4->addWidget(textLabel1_2_2_2_3_5);

    force_base_slider = new QSlider(widget);
    force_base_slider->setObjectName(QString::fromUtf8("force_base_slider"));
    force_base_slider->setMinimumSize(QSize(84, 21));
    force_base_slider->setMaximumSize(QSize(84, 21));
    force_base_slider->setMinimum(1);
    force_base_slider->setMaximum(30);
    force_base_slider->setValue(30);
    force_base_slider->setOrientation(Qt::Horizontal);
    force_base_slider->setTickInterval(70);

    hboxLayout4->addWidget(force_base_slider);

    force_base_label = new QLabel(widget);
    force_base_label->setObjectName(QString::fromUtf8("force_base_label"));
    QSizePolicy sizePolicy38(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy38.setHorizontalStretch(0);
    sizePolicy38.setVerticalStretch(0);
    sizePolicy38.setHeightForWidth(force_base_label->sizePolicy().hasHeightForWidth());
    force_base_label->setSizePolicy(sizePolicy38);
    force_base_label->setMinimumSize(QSize(50, 25));
    force_base_label->setMaximumSize(QSize(35, 25));
    force_base_label->setAlignment(Qt::AlignCenter);

    hboxLayout4->addWidget(force_base_label);


    vboxLayout1->addLayout(hboxLayout4);

    hboxLayout5 = new QHBoxLayout();
    hboxLayout5->setSpacing(6);
    hboxLayout5->setMargin(0);
    hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
    textLabel1_2_2_2_3_6 = new QLabel(widget);
    textLabel1_2_2_2_3_6->setObjectName(QString::fromUtf8("textLabel1_2_2_2_3_6"));
    QSizePolicy sizePolicy39(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy39.setHorizontalStretch(0);
    sizePolicy39.setVerticalStretch(0);
    sizePolicy39.setHeightForWidth(textLabel1_2_2_2_3_6->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_3_6->setSizePolicy(sizePolicy39);
    textLabel1_2_2_2_3_6->setMinimumSize(QSize(120, 0));
    textLabel1_2_2_2_3_6->setMaximumSize(QSize(190, 32767));

    hboxLayout5->addWidget(textLabel1_2_2_2_3_6);

    force_offset_slider = new QSlider(widget);
    force_offset_slider->setObjectName(QString::fromUtf8("force_offset_slider"));
    force_offset_slider->setMinimumSize(QSize(84, 21));
    force_offset_slider->setMaximumSize(QSize(84, 21));
    force_offset_slider->setMinimum(0);
    force_offset_slider->setMaximum(50);
    force_offset_slider->setValue(50);
    force_offset_slider->setOrientation(Qt::Horizontal);
    force_offset_slider->setTickInterval(70);

    hboxLayout5->addWidget(force_offset_slider);

    force_offset_label = new QLabel(widget);
    force_offset_label->setObjectName(QString::fromUtf8("force_offset_label"));
    QSizePolicy sizePolicy40(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy40.setHorizontalStretch(0);
    sizePolicy40.setVerticalStretch(0);
    sizePolicy40.setHeightForWidth(force_offset_label->sizePolicy().hasHeightForWidth());
    force_offset_label->setSizePolicy(sizePolicy40);
    force_offset_label->setMinimumSize(QSize(50, 25));
    force_offset_label->setMaximumSize(QSize(35, 25));
    force_offset_label->setAlignment(Qt::AlignCenter);

    hboxLayout5->addWidget(force_offset_label);


    vboxLayout1->addLayout(hboxLayout5);

    widget_stack->addWidget(Forces);
    QWidget::setTabOrder(cartoon_tube_radius_slider, cartoon_helix_radius_slider);
    QWidget::setTabOrder(cartoon_helix_radius_slider, strand_arrow_width_slider);
    QWidget::setTabOrder(strand_arrow_width_slider, strand_width_slider);
    QWidget::setTabOrder(strand_width_slider, strand_height_slider);
    QWidget::setTabOrder(strand_height_slider, ribbons_enabled);
    QWidget::setTabOrder(ribbons_enabled, cartoon_dna_base_radius_slider);
    QWidget::setTabOrder(cartoon_dna_base_radius_slider, cartoon_dna_helix_radius_slider);
    QWidget::setTabOrder(cartoon_dna_helix_radius_slider, cartoon_dna_ladder_radius_slider);
    QWidget::setTabOrder(cartoon_dna_ladder_radius_slider, hbonds_radius_slider);
    QWidget::setTabOrder(hbonds_radius_slider, force_max_length_slider);
    QWidget::setTabOrder(force_max_length_slider, force_scaling_slider);
    QWidget::setTabOrder(force_scaling_slider, force_base_slider);
    QWidget::setTabOrder(force_base_slider, force_offset_slider);
    QWidget::setTabOrder(force_offset_slider, stick_radius_slider);
    QWidget::setTabOrder(stick_radius_slider, ball_stick_cylinder_radius_slider);
    QWidget::setTabOrder(ball_stick_cylinder_radius_slider, ball_stick_sphere_radius_slider);
    QWidget::setTabOrder(ball_stick_sphere_radius_slider, ball_stick_dashed_bonds);
    QWidget::setTabOrder(ball_stick_dashed_bonds, vdw_radius_factor_slider);
    QWidget::setTabOrder(vdw_radius_factor_slider, surface_probe_radius_slider);
    QWidget::setTabOrder(surface_probe_radius_slider, tube_radius_slider);

    retranslateUi(ModelSettingsDialogData);

    QSize size(610, 375);
    size = size.expandedTo(ModelSettingsDialogData->minimumSizeHint());
    ModelSettingsDialogData->resize(size);


    widget_stack->setCurrentIndex(5);


    QMetaObject::connectSlotsByName(ModelSettingsDialogData);
    } // setupUi

    void retranslateUi(QWidget *ModelSettingsDialogData)
    {
    ModelSettingsDialogData->setWindowTitle(QApplication::translate("ModelSettingsDialogData", "ModelSettingsDialog", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2->setText(QApplication::translate("ModelSettingsDialogData", "cylinder radius", 0, QApplication::UnicodeUTF8));
    stick_radius_label->setText(QApplication::translate("ModelSettingsDialogData", "99.9", 0, QApplication::UnicodeUTF8));
    ball_stick_cylinder_radius_label->setText(QApplication::translate("ModelSettingsDialogData", "99.9", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_2_4->setText(QApplication::translate("ModelSettingsDialogData", "cylinder radius", 0, QApplication::UnicodeUTF8));
    ball_stick_sphere_radius_label->setText(QApplication::translate("ModelSettingsDialogData", "99.9", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_2_2_2->setText(QApplication::translate("ModelSettingsDialogData", "sphere radius", 0, QApplication::UnicodeUTF8));
    ball_stick_dashed_bonds->setText(QApplication::translate("ModelSettingsDialogData", "show aromatic bonds dashed", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_2_3_3->setText(QApplication::translate("ModelSettingsDialogData", "radius factor", 0, QApplication::UnicodeUTF8));
    vdw_radius_factor_label->setText(QApplication::translate("ModelSettingsDialogData", "99.9", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_2_3_2_3->setText(QApplication::translate("ModelSettingsDialogData", "probe radius", 0, QApplication::UnicodeUTF8));
    surface_probe_radius_label->setText(QApplication::translate("ModelSettingsDialogData", "99.9", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_2_3_2_2_3->setText(QApplication::translate("ModelSettingsDialogData", "radius", 0, QApplication::UnicodeUTF8));
    tube_radius_label->setText(QApplication::translate("ModelSettingsDialogData", "99.9", 0, QApplication::UnicodeUTF8));
    groupBox2->setTitle(QApplication::translate("ModelSettingsDialogData", "Protein", 0, QApplication::UnicodeUTF8));
    groupBox3->setTitle(QApplication::translate("ModelSettingsDialogData", "Strand", 0, QApplication::UnicodeUTF8));
    strand_height_slider->setToolTip(QApplication::translate("ModelSettingsDialogData", "Edit arrow wodth", 0, QApplication::UnicodeUTF8));
    strand_width_slider->setToolTip(QApplication::translate("ModelSettingsDialogData", "Edit arrow height", 0, QApplication::UnicodeUTF8));
    strand_arrow_width_slider->setToolTip(QApplication::translate("ModelSettingsDialogData", "Edit arrow wodth", 0, QApplication::UnicodeUTF8));
    strand_arrow_width_label->setText(QApplication::translate("ModelSettingsDialogData", "99.9", 0, QApplication::UnicodeUTF8));
    strand_width_label->setText(QApplication::translate("ModelSettingsDialogData", "99.9", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2->setText(QApplication::translate("ModelSettingsDialogData", "Strand width", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_2_3_2_2_2_2_2_3_2_2->setText(QApplication::translate("ModelSettingsDialogData", "Strand height", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_2_3_2_2_2_2_2_3->setText(QApplication::translate("ModelSettingsDialogData", "Arrow width", 0, QApplication::UnicodeUTF8));
    strand_height_label->setText(QApplication::translate("ModelSettingsDialogData", "99.9", 0, QApplication::UnicodeUTF8));
    ribbons_enabled->setText(QApplication::translate("ModelSettingsDialogData", "enable ribbons", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_2_3_2_2_2_4->setText(QApplication::translate("ModelSettingsDialogData", "Tube radius", 0, QApplication::UnicodeUTF8));
    cartoon_tube_radius_slider->setToolTip(QApplication::translate("ModelSettingsDialogData", "Edit the tube radius", 0, QApplication::UnicodeUTF8));
    cartoon_tube_radius_label->setText(QApplication::translate("ModelSettingsDialogData", "99.9", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_2_3_2_2_2_2_3->setText(QApplication::translate("ModelSettingsDialogData", "Helix radius", 0, QApplication::UnicodeUTF8));
    cartoon_helix_radius_slider->setToolTip(QApplication::translate("ModelSettingsDialogData", "Edit the helix radius", 0, QApplication::UnicodeUTF8));
    cartoon_helix_radius_label->setText(QApplication::translate("ModelSettingsDialogData", "99.9", 0, QApplication::UnicodeUTF8));
    groupBox1->setTitle(QApplication::translate("ModelSettingsDialogData", "DNA/RNA", 0, QApplication::UnicodeUTF8));
    cartoon_dna_ladder->setTitle(QApplication::translate("ModelSettingsDialogData", "Ladder Model", 0, QApplication::UnicodeUTF8));
    cartoon_dna_ladder_radius_label->setText(QApplication::translate("ModelSettingsDialogData", "99.9", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2_6->setText(QApplication::translate("ModelSettingsDialogData", "base radius", 0, QApplication::UnicodeUTF8));
    cartoon_dna_wac->setTitle(QApplication::translate("ModelSettingsDialogData", "Base Cartoon", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2->setText(QApplication::translate("ModelSettingsDialogData", "backbone radius", 0, QApplication::UnicodeUTF8));
    cartoon_dna_base_radius_label->setText(QApplication::translate("ModelSettingsDialogData", "99.9", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_2_3_2_2_2_2_2_2_2_2_5->setText(QApplication::translate("ModelSettingsDialogData", "base radius", 0, QApplication::UnicodeUTF8));
    cartoon_dna_helix_radius_label->setText(QApplication::translate("ModelSettingsDialogData", "99.9", 0, QApplication::UnicodeUTF8));
    hbonds_radius_label->setText(QApplication::translate("ModelSettingsDialogData", "99.9", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_2_3_2_2_2_3_3->setText(QApplication::translate("ModelSettingsDialogData", "cylinder radius", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_3_4->setText(QApplication::translate("ModelSettingsDialogData", "max length", 0, QApplication::UnicodeUTF8));
    force_max_length_label->setText(QApplication::translate("ModelSettingsDialogData", "99.9", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_3->setToolTip(QApplication::translate("ModelSettingsDialogData", "Length of the drawn vector is: log(v * 10**8) * scaling  ", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_3->setText(QApplication::translate("ModelSettingsDialogData", "scaling (exponent)", 0, QApplication::UnicodeUTF8));
    force_scaling_slider->setToolTip(QApplication::translate("ModelSettingsDialogData", "Length of the drawn vector is: log(v * 10**8) * scaling  ", 0, QApplication::UnicodeUTF8));
    force_scaling_label->setToolTip(QApplication::translate("ModelSettingsDialogData", "Length of the drawn vector is: log(v * 10**8) * scaling  ", 0, QApplication::UnicodeUTF8));
    force_scaling_label->setText(QApplication::translate("ModelSettingsDialogData", "99.9", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_3_5->setText(QApplication::translate("ModelSettingsDialogData", "base size", 0, QApplication::UnicodeUTF8));
    force_base_label->setText(QApplication::translate("ModelSettingsDialogData", "99.9", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_3_6->setText(QApplication::translate("ModelSettingsDialogData", "offset", 0, QApplication::UnicodeUTF8));
    force_offset_label->setText(QApplication::translate("ModelSettingsDialogData", "99.9", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(ModelSettingsDialogData);
    } // retranslateUi

};

namespace Ui {
    class ModelSettingsDialogData: public Ui_ModelSettingsDialogData {};
} // namespace Ui

#endif // MODELSETTINGSDIALOGDATA_H
