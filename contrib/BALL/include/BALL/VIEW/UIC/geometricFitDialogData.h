/********************************************************************************
** Form generated from reading ui file 'geometricFitDialog.ui'
**
** Created: Wed Mar 19 14:28:17 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef GEOMETRICFITDIALOGDATA_H
#define GEOMETRICFITDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

class Ui_GeometricFitDialogData
{
public:
    QGridLayout *gridLayout;
    QGroupBox *buttonGroup15;
    QGridLayout *gridLayout1;
    QLabel *near_radius_label;
    QLabel *inside_value_1_label_2;
    QLineEdit *surface_thickness;
    QLabel *sur_thick_label;
    QLabel *deg_interval_label;
    QLabel *peak_num_label;
    QComboBox *surface_type;
    QLabel *surface_type_label;
    QLabel *inside_value_1_label;
    QLineEdit *penalty_static;
    QLineEdit *penalty_mobile;
    QLineEdit *grid_spacing;
    QLineEdit *near_radius;
    QLineEdit *deg_interval;
    QLineEdit *peak_num;
    QLabel *grid_spacing_label;
    QPushButton *reset_button;
    QPushButton *ok_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *GeometricFitDialogData)
    {
    GeometricFitDialogData->setObjectName(QString::fromUtf8("GeometricFitDialogData"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(GeometricFitDialogData->sizePolicy().hasHeightForWidth());
    GeometricFitDialogData->setSizePolicy(sizePolicy);
    GeometricFitDialogData->setMaximumSize(QSize(450, 350));
    gridLayout = new QGridLayout(GeometricFitDialogData);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    buttonGroup15 = new QGroupBox(GeometricFitDialogData);
    buttonGroup15->setObjectName(QString::fromUtf8("buttonGroup15"));
    gridLayout1 = new QGridLayout(buttonGroup15);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    near_radius_label = new QLabel(buttonGroup15);
    near_radius_label->setObjectName(QString::fromUtf8("near_radius_label"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(near_radius_label->sizePolicy().hasHeightForWidth());
    near_radius_label->setSizePolicy(sizePolicy1);

    gridLayout1->addWidget(near_radius_label, 4, 0, 1, 1);

    inside_value_1_label_2 = new QLabel(buttonGroup15);
    inside_value_1_label_2->setObjectName(QString::fromUtf8("inside_value_1_label_2"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(inside_value_1_label_2->sizePolicy().hasHeightForWidth());
    inside_value_1_label_2->setSizePolicy(sizePolicy2);

    gridLayout1->addWidget(inside_value_1_label_2, 3, 0, 1, 1);

    surface_thickness = new QLineEdit(buttonGroup15);
    surface_thickness->setObjectName(QString::fromUtf8("surface_thickness"));
    surface_thickness->setMinimumSize(QSize(135, 23));
    surface_thickness->setMaximumSize(QSize(130, 23));
    surface_thickness->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(surface_thickness, 0, 1, 1, 1);

    sur_thick_label = new QLabel(buttonGroup15);
    sur_thick_label->setObjectName(QString::fromUtf8("sur_thick_label"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(sur_thick_label->sizePolicy().hasHeightForWidth());
    sur_thick_label->setSizePolicy(sizePolicy3);

    gridLayout1->addWidget(sur_thick_label, 0, 0, 1, 1);

    deg_interval_label = new QLabel(buttonGroup15);
    deg_interval_label->setObjectName(QString::fromUtf8("deg_interval_label"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(deg_interval_label->sizePolicy().hasHeightForWidth());
    deg_interval_label->setSizePolicy(sizePolicy4);

    gridLayout1->addWidget(deg_interval_label, 5, 0, 1, 1);

    peak_num_label = new QLabel(buttonGroup15);
    peak_num_label->setObjectName(QString::fromUtf8("peak_num_label"));
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(peak_num_label->sizePolicy().hasHeightForWidth());
    peak_num_label->setSizePolicy(sizePolicy5);

    gridLayout1->addWidget(peak_num_label, 6, 0, 1, 1);

    surface_type = new QComboBox(buttonGroup15);
    surface_type->setObjectName(QString::fromUtf8("surface_type"));
    QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy6.setHorizontalStretch(0);
    sizePolicy6.setVerticalStretch(0);
    sizePolicy6.setHeightForWidth(surface_type->sizePolicy().hasHeightForWidth());
    surface_type->setSizePolicy(sizePolicy6);
    surface_type->setMinimumSize(QSize(135, 23));
    surface_type->setMaximumSize(QSize(130, 23));
    surface_type->setAcceptDrops(false);
    surface_type->setInsertPolicy(QComboBox::InsertAtTop);

    gridLayout1->addWidget(surface_type, 7, 1, 1, 1);

    surface_type_label = new QLabel(buttonGroup15);
    surface_type_label->setObjectName(QString::fromUtf8("surface_type_label"));
    QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy7.setHorizontalStretch(0);
    sizePolicy7.setVerticalStretch(0);
    sizePolicy7.setHeightForWidth(surface_type_label->sizePolicy().hasHeightForWidth());
    surface_type_label->setSizePolicy(sizePolicy7);
    surface_type_label->setMaximumSize(QSize(200, 32767));

    gridLayout1->addWidget(surface_type_label, 7, 0, 1, 1);

    inside_value_1_label = new QLabel(buttonGroup15);
    inside_value_1_label->setObjectName(QString::fromUtf8("inside_value_1_label"));
    QSizePolicy sizePolicy8(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy8.setHorizontalStretch(0);
    sizePolicy8.setVerticalStretch(0);
    sizePolicy8.setHeightForWidth(inside_value_1_label->sizePolicy().hasHeightForWidth());
    inside_value_1_label->setSizePolicy(sizePolicy8);

    gridLayout1->addWidget(inside_value_1_label, 2, 0, 1, 1);

    penalty_static = new QLineEdit(buttonGroup15);
    penalty_static->setObjectName(QString::fromUtf8("penalty_static"));
    penalty_static->setMinimumSize(QSize(135, 23));
    penalty_static->setMaximumSize(QSize(130, 23));
    penalty_static->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(penalty_static, 2, 1, 1, 1);

    penalty_mobile = new QLineEdit(buttonGroup15);
    penalty_mobile->setObjectName(QString::fromUtf8("penalty_mobile"));
    penalty_mobile->setMinimumSize(QSize(135, 23));
    penalty_mobile->setMaximumSize(QSize(80, 23));
    penalty_mobile->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(penalty_mobile, 3, 1, 1, 1);

    grid_spacing = new QLineEdit(buttonGroup15);
    grid_spacing->setObjectName(QString::fromUtf8("grid_spacing"));
    grid_spacing->setMinimumSize(QSize(135, 23));
    grid_spacing->setMaximumSize(QSize(130, 23));
    grid_spacing->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(grid_spacing, 1, 1, 1, 1);

    near_radius = new QLineEdit(buttonGroup15);
    near_radius->setObjectName(QString::fromUtf8("near_radius"));
    near_radius->setMinimumSize(QSize(135, 23));
    near_radius->setMaximumSize(QSize(80, 23));
    near_radius->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(near_radius, 4, 1, 1, 1);

    deg_interval = new QLineEdit(buttonGroup15);
    deg_interval->setObjectName(QString::fromUtf8("deg_interval"));
    deg_interval->setMinimumSize(QSize(135, 23));
    deg_interval->setMaximumSize(QSize(80, 23));
    deg_interval->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(deg_interval, 5, 1, 1, 1);

    peak_num = new QLineEdit(buttonGroup15);
    peak_num->setObjectName(QString::fromUtf8("peak_num"));
    peak_num->setMinimumSize(QSize(135, 23));
    peak_num->setMaximumSize(QSize(80, 23));
    peak_num->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(peak_num, 6, 1, 1, 1);

    grid_spacing_label = new QLabel(buttonGroup15);
    grid_spacing_label->setObjectName(QString::fromUtf8("grid_spacing_label"));
    QSizePolicy sizePolicy9(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy9.setHorizontalStretch(0);
    sizePolicy9.setVerticalStretch(0);
    sizePolicy9.setHeightForWidth(grid_spacing_label->sizePolicy().hasHeightForWidth());
    grid_spacing_label->setSizePolicy(sizePolicy9);

    gridLayout1->addWidget(grid_spacing_label, 1, 0, 1, 1);


    gridLayout->addWidget(buttonGroup15, 0, 0, 1, 3);

    reset_button = new QPushButton(GeometricFitDialogData);
    reset_button->setObjectName(QString::fromUtf8("reset_button"));
    QSizePolicy sizePolicy10(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy10.setHorizontalStretch(0);
    sizePolicy10.setVerticalStretch(0);
    sizePolicy10.setHeightForWidth(reset_button->sizePolicy().hasHeightForWidth());
    reset_button->setSizePolicy(sizePolicy10);
    reset_button->setMinimumSize(QSize(90, 0));

    gridLayout->addWidget(reset_button, 1, 2, 1, 1);

    ok_button = new QPushButton(GeometricFitDialogData);
    ok_button->setObjectName(QString::fromUtf8("ok_button"));
    QSizePolicy sizePolicy11(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy11.setHorizontalStretch(0);
    sizePolicy11.setVerticalStretch(0);
    sizePolicy11.setHeightForWidth(ok_button->sizePolicy().hasHeightForWidth());
    ok_button->setSizePolicy(sizePolicy11);
    ok_button->setMinimumSize(QSize(90, 0));
    ok_button->setDefault(true);

    gridLayout->addWidget(ok_button, 1, 0, 1, 1);

    cancel_button = new QPushButton(GeometricFitDialogData);
    cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
    QSizePolicy sizePolicy12(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy12.setHorizontalStretch(0);
    sizePolicy12.setVerticalStretch(0);
    sizePolicy12.setHeightForWidth(cancel_button->sizePolicy().hasHeightForWidth());
    cancel_button->setSizePolicy(sizePolicy12);
    cancel_button->setMinimumSize(QSize(90, 0));

    gridLayout->addWidget(cancel_button, 1, 1, 1, 1);

    QWidget::setTabOrder(surface_thickness, grid_spacing);
    QWidget::setTabOrder(grid_spacing, penalty_static);
    QWidget::setTabOrder(penalty_static, penalty_mobile);
    QWidget::setTabOrder(penalty_mobile, near_radius);
    QWidget::setTabOrder(near_radius, deg_interval);
    QWidget::setTabOrder(deg_interval, peak_num);
    QWidget::setTabOrder(peak_num, surface_type);
    QWidget::setTabOrder(surface_type, ok_button);
    QWidget::setTabOrder(ok_button, cancel_button);
    QWidget::setTabOrder(cancel_button, reset_button);

    retranslateUi(GeometricFitDialogData);

    QSize size(438, 313);
    size = size.expandedTo(GeometricFitDialogData->minimumSizeHint());
    GeometricFitDialogData->resize(size);

    QObject::connect(cancel_button, SIGNAL(clicked()), GeometricFitDialogData, SLOT(reject()));
    QObject::connect(ok_button, SIGNAL(clicked()), GeometricFitDialogData, SLOT(accept()));

    surface_type->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(GeometricFitDialogData);
    } // setupUi

    void retranslateUi(QDialog *GeometricFitDialogData)
    {
    GeometricFitDialogData->setWindowTitle(QApplication::translate("GeometricFitDialogData", "Geometric Fit Options", 0, QApplication::UnicodeUTF8));
    near_radius_label->setText(QApplication::translate("GeometricFitDialogData", "near radius", 0, QApplication::UnicodeUTF8));
    inside_value_1_label_2->setText(QApplication::translate("GeometricFitDialogData", "penalty value for mobile partner", 0, QApplication::UnicodeUTF8));
    surface_thickness->setText(QApplication::translate("GeometricFitDialogData", "1.0", 0, QApplication::UnicodeUTF8));
    sur_thick_label->setText(QApplication::translate("GeometricFitDialogData", "surface thickness", 0, QApplication::UnicodeUTF8));
    deg_interval_label->setText(QApplication::translate("GeometricFitDialogData", "degree interval for rotation", 0, QApplication::UnicodeUTF8));
    peak_num_label->setText(QApplication::translate("GeometricFitDialogData", "number of peaks for each rotation", 0, QApplication::UnicodeUTF8));
    surface_type->clear();
    surface_type->addItem(QApplication::translate("GeometricFitDialogData", "Connolly", 0, QApplication::UnicodeUTF8));
    surface_type->addItem(QApplication::translate("GeometricFitDialogData", "van der Waals", 0, QApplication::UnicodeUTF8));
    surface_type->addItem(QApplication::translate("GeometricFitDialogData", "FTDock", 0, QApplication::UnicodeUTF8));
    surface_type_label->setText(QApplication::translate("GeometricFitDialogData", "surface type", 0, QApplication::UnicodeUTF8));
    inside_value_1_label->setText(QApplication::translate("GeometricFitDialogData", "penalty value for static partner", 0, QApplication::UnicodeUTF8));
    penalty_static->setText(QApplication::translate("GeometricFitDialogData", "-15", 0, QApplication::UnicodeUTF8));
    penalty_mobile->setText(QApplication::translate("GeometricFitDialogData", "1", 0, QApplication::UnicodeUTF8));
    grid_spacing->setText(QApplication::translate("GeometricFitDialogData", "1.0", 0, QApplication::UnicodeUTF8));
    near_radius->setText(QApplication::translate("GeometricFitDialogData", "1.8", 0, QApplication::UnicodeUTF8));
    deg_interval->setText(QApplication::translate("GeometricFitDialogData", "20", 0, QApplication::UnicodeUTF8));
    peak_num->setText(QApplication::translate("GeometricFitDialogData", "3", 0, QApplication::UnicodeUTF8));
    grid_spacing_label->setText(QApplication::translate("GeometricFitDialogData", "grid spacing", 0, QApplication::UnicodeUTF8));
    reset_button->setText(QApplication::translate("GeometricFitDialogData", "Reset", 0, QApplication::UnicodeUTF8));
    ok_button->setText(QApplication::translate("GeometricFitDialogData", "OK", 0, QApplication::UnicodeUTF8));
    cancel_button->setText(QApplication::translate("GeometricFitDialogData", "Cancel", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(GeometricFitDialogData);
    } // retranslateUi

};

namespace Ui {
    class GeometricFitDialogData: public Ui_GeometricFitDialogData {};
} // namespace Ui

#endif // GEOMETRICFITDIALOGDATA_H
