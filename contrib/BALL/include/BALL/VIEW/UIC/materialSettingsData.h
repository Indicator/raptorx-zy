/********************************************************************************
** Form generated from reading ui file 'materialSettings.ui'
**
** Created: Wed Mar 19 14:28:17 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef MATERIALSETTINGSDATA_H
#define MATERIALSETTINGSDATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

class Ui_MaterialSettingsData
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSlider *ambient_slider;
    QLabel *textLabel1_2;
    QLabel *diffuse_label;
    QLabel *ambient_label;
    QLabel *textLabel1_3;
    QSlider *diffuse_slider;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QLabel *textLabel1;
    QSlider *shininess_slider;
    QSlider *specular_slider;
    QLabel *textLabel1_4;
    QLabel *shininess_label;
    QLabel *specular_label;

    void setupUi(QWidget *MaterialSettingsData)
    {
    MaterialSettingsData->setObjectName(QString::fromUtf8("MaterialSettingsData"));
    MaterialSettingsData->setMaximumSize(QSize(650, 450));
    groupBox = new QGroupBox(MaterialSettingsData);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(10, 120, 451, 111));
    gridLayout = new QGridLayout(groupBox);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    ambient_slider = new QSlider(groupBox);
    ambient_slider->setObjectName(QString::fromUtf8("ambient_slider"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(ambient_slider->sizePolicy().hasHeightForWidth());
    ambient_slider->setSizePolicy(sizePolicy);
    ambient_slider->setMinimumSize(QSize(120, 21));
    ambient_slider->setMaximumSize(QSize(120, 21));
    ambient_slider->setMinimum(0);
    ambient_slider->setMaximum(10);
    ambient_slider->setPageStep(1);
    ambient_slider->setOrientation(Qt::Horizontal);
    ambient_slider->setTickInterval(5);

    gridLayout->addWidget(ambient_slider, 1, 1, 1, 1);

    textLabel1_2 = new QLabel(groupBox);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(textLabel1_2->sizePolicy().hasHeightForWidth());
    textLabel1_2->setSizePolicy(sizePolicy1);
    textLabel1_2->setMinimumSize(QSize(220, 25));
    textLabel1_2->setMaximumSize(QSize(220, 25));

    gridLayout->addWidget(textLabel1_2, 1, 0, 1, 1);

    diffuse_label = new QLabel(groupBox);
    diffuse_label->setObjectName(QString::fromUtf8("diffuse_label"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(diffuse_label->sizePolicy().hasHeightForWidth());
    diffuse_label->setSizePolicy(sizePolicy2);
    diffuse_label->setMinimumSize(QSize(60, 25));
    diffuse_label->setMaximumSize(QSize(60, 25));
    diffuse_label->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(diffuse_label, 0, 2, 1, 1);

    ambient_label = new QLabel(groupBox);
    ambient_label->setObjectName(QString::fromUtf8("ambient_label"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(ambient_label->sizePolicy().hasHeightForWidth());
    ambient_label->setSizePolicy(sizePolicy3);
    ambient_label->setMinimumSize(QSize(60, 25));
    ambient_label->setMaximumSize(QSize(60, 25));
    ambient_label->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(ambient_label, 1, 2, 1, 1);

    textLabel1_3 = new QLabel(groupBox);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(textLabel1_3->sizePolicy().hasHeightForWidth());
    textLabel1_3->setSizePolicy(sizePolicy4);
    textLabel1_3->setMinimumSize(QSize(220, 25));
    textLabel1_3->setMaximumSize(QSize(220, 25));

    gridLayout->addWidget(textLabel1_3, 0, 0, 1, 1);

    diffuse_slider = new QSlider(groupBox);
    diffuse_slider->setObjectName(QString::fromUtf8("diffuse_slider"));
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(diffuse_slider->sizePolicy().hasHeightForWidth());
    diffuse_slider->setSizePolicy(sizePolicy5);
    diffuse_slider->setMinimumSize(QSize(120, 21));
    diffuse_slider->setMaximumSize(QSize(120, 21));
    diffuse_slider->setMinimum(0);
    diffuse_slider->setMaximum(10);
    diffuse_slider->setPageStep(1);
    diffuse_slider->setValue(7);
    diffuse_slider->setOrientation(Qt::Horizontal);
    diffuse_slider->setTickInterval(5);

    gridLayout->addWidget(diffuse_slider, 0, 1, 1, 1);

    groupBox_2 = new QGroupBox(MaterialSettingsData);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    groupBox_2->setGeometry(QRect(10, 0, 451, 111));
    gridLayout1 = new QGridLayout(groupBox_2);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(9);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    textLabel1 = new QLabel(groupBox_2);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy6.setHorizontalStretch(0);
    sizePolicy6.setVerticalStretch(0);
    sizePolicy6.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
    textLabel1->setSizePolicy(sizePolicy6);
    textLabel1->setMinimumSize(QSize(220, 25));
    textLabel1->setMaximumSize(QSize(220, 25));

    gridLayout1->addWidget(textLabel1, 1, 0, 1, 1);

    shininess_slider = new QSlider(groupBox_2);
    shininess_slider->setObjectName(QString::fromUtf8("shininess_slider"));
    QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy7.setHorizontalStretch(0);
    sizePolicy7.setVerticalStretch(0);
    sizePolicy7.setHeightForWidth(shininess_slider->sizePolicy().hasHeightForWidth());
    shininess_slider->setSizePolicy(sizePolicy7);
    shininess_slider->setMinimumSize(QSize(120, 21));
    shininess_slider->setMaximumSize(QSize(120, 21));
    shininess_slider->setMaximum(1280);
    shininess_slider->setSingleStep(10);
    shininess_slider->setPageStep(100);
    shininess_slider->setValue(1280);
    shininess_slider->setOrientation(Qt::Horizontal);
    shininess_slider->setTickInterval(400);

    gridLayout1->addWidget(shininess_slider, 1, 1, 1, 1);

    specular_slider = new QSlider(groupBox_2);
    specular_slider->setObjectName(QString::fromUtf8("specular_slider"));
    QSizePolicy sizePolicy8(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy8.setHorizontalStretch(0);
    sizePolicy8.setVerticalStretch(0);
    sizePolicy8.setHeightForWidth(specular_slider->sizePolicy().hasHeightForWidth());
    specular_slider->setSizePolicy(sizePolicy8);
    specular_slider->setMinimumSize(QSize(120, 21));
    specular_slider->setMaximumSize(QSize(120, 21));
    specular_slider->setMinimum(0);
    specular_slider->setMaximum(10);
    specular_slider->setPageStep(1);
    specular_slider->setValue(9);
    specular_slider->setOrientation(Qt::Horizontal);
    specular_slider->setTickInterval(5);

    gridLayout1->addWidget(specular_slider, 0, 1, 1, 1);

    textLabel1_4 = new QLabel(groupBox_2);
    textLabel1_4->setObjectName(QString::fromUtf8("textLabel1_4"));
    QSizePolicy sizePolicy9(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy9.setHorizontalStretch(0);
    sizePolicy9.setVerticalStretch(0);
    sizePolicy9.setHeightForWidth(textLabel1_4->sizePolicy().hasHeightForWidth());
    textLabel1_4->setSizePolicy(sizePolicy9);
    textLabel1_4->setMinimumSize(QSize(220, 25));
    textLabel1_4->setMaximumSize(QSize(220, 25));

    gridLayout1->addWidget(textLabel1_4, 0, 0, 1, 1);

    shininess_label = new QLabel(groupBox_2);
    shininess_label->setObjectName(QString::fromUtf8("shininess_label"));
    QSizePolicy sizePolicy10(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy10.setHorizontalStretch(0);
    sizePolicy10.setVerticalStretch(0);
    sizePolicy10.setHeightForWidth(shininess_label->sizePolicy().hasHeightForWidth());
    shininess_label->setSizePolicy(sizePolicy10);
    shininess_label->setMinimumSize(QSize(60, 25));
    shininess_label->setMaximumSize(QSize(60, 25));
    shininess_label->setAlignment(Qt::AlignCenter);

    gridLayout1->addWidget(shininess_label, 1, 2, 1, 1);

    specular_label = new QLabel(groupBox_2);
    specular_label->setObjectName(QString::fromUtf8("specular_label"));
    QSizePolicy sizePolicy11(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy11.setHorizontalStretch(0);
    sizePolicy11.setVerticalStretch(0);
    sizePolicy11.setHeightForWidth(specular_label->sizePolicy().hasHeightForWidth());
    specular_label->setSizePolicy(sizePolicy11);
    specular_label->setMinimumSize(QSize(60, 25));
    specular_label->setMaximumSize(QSize(60, 25));
    specular_label->setAlignment(Qt::AlignCenter);

    gridLayout1->addWidget(specular_label, 0, 2, 1, 1);

    QWidget::setTabOrder(specular_slider, shininess_slider);
    QWidget::setTabOrder(shininess_slider, diffuse_slider);
    QWidget::setTabOrder(diffuse_slider, ambient_slider);

    retranslateUi(MaterialSettingsData);

    QSize size(650, 450);
    size = size.expandedTo(MaterialSettingsData->minimumSizeHint());
    MaterialSettingsData->resize(size);


    QMetaObject::connectSlotsByName(MaterialSettingsData);
    } // setupUi

    void retranslateUi(QWidget *MaterialSettingsData)
    {
    MaterialSettingsData->setWindowTitle(QApplication::translate("MaterialSettingsData", "MaterialSettings", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("MaterialSettingsData", "POVRay", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("MaterialSettingsData", "Ambient intensity", 0, QApplication::UnicodeUTF8));
    diffuse_label->setText(QApplication::translate("MaterialSettingsData", "0", 0, QApplication::UnicodeUTF8));
    ambient_label->setText(QApplication::translate("MaterialSettingsData", "0", 0, QApplication::UnicodeUTF8));
    textLabel1_3->setText(QApplication::translate("MaterialSettingsData", "Diffuse intensity", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("MaterialSettingsData", "OpenGL / POVRay", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("MaterialSettingsData", "Shininess", 0, QApplication::UnicodeUTF8));
    textLabel1_4->setText(QApplication::translate("MaterialSettingsData", "Specular intensity", 0, QApplication::UnicodeUTF8));
    shininess_label->setText(QApplication::translate("MaterialSettingsData", "0", 0, QApplication::UnicodeUTF8));
    specular_label->setText(QApplication::translate("MaterialSettingsData", "0", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(MaterialSettingsData);
    } // retranslateUi

};

namespace Ui {
    class MaterialSettingsData: public Ui_MaterialSettingsData {};
} // namespace Ui

#endif // MATERIALSETTINGSDATA_H
