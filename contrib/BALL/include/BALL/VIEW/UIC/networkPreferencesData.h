/********************************************************************************
** Form generated from reading ui file 'networkPreferences.ui'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef NETWORKPREFERENCESDATA_H
#define NETWORKPREFERENCESDATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_NetworkPreferencesData
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox31;
    QGridLayout *gridLayout;
    QLineEdit *port_edit;
    QLineEdit *host_edit;
    QLabel *textLabel1_2;
    QLabel *textLabel1;
    QCheckBox *enable_proxy;
    QGroupBox *groupBox31_2;
    QGridLayout *gridLayout1;
    QLineEdit *pdb_suffix;
    QLabel *textLabel1_4;
    QLabel *textLabel1_3;
    QLineEdit *pdb_prefix;

    void setupUi(QWidget *NetworkPreferencesData)
    {
    NetworkPreferencesData->setObjectName(QString::fromUtf8("NetworkPreferencesData"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(NetworkPreferencesData->sizePolicy().hasHeightForWidth());
    NetworkPreferencesData->setSizePolicy(sizePolicy);
    NetworkPreferencesData->setMinimumSize(QSize(0, 0));
    NetworkPreferencesData->setMaximumSize(QSize(32000, 32000));
    layoutWidget = new QWidget(NetworkPreferencesData);
    layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
    layoutWidget->setGeometry(QRect(10, 11, 501, 240));
    vboxLayout = new QVBoxLayout(layoutWidget);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(0);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    groupBox31 = new QGroupBox(layoutWidget);
    groupBox31->setObjectName(QString::fromUtf8("groupBox31"));
    gridLayout = new QGridLayout(groupBox31);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    port_edit = new QLineEdit(groupBox31);
    port_edit->setObjectName(QString::fromUtf8("port_edit"));
    port_edit->setEnabled(false);
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(1));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(port_edit->sizePolicy().hasHeightForWidth());
    port_edit->setSizePolicy(sizePolicy1);

    gridLayout->addWidget(port_edit, 2, 1, 1, 1);

    host_edit = new QLineEdit(groupBox31);
    host_edit->setObjectName(QString::fromUtf8("host_edit"));
    host_edit->setEnabled(false);
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(1));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(host_edit->sizePolicy().hasHeightForWidth());
    host_edit->setSizePolicy(sizePolicy2);
    host_edit->setMinimumSize(QSize(25, 25));

    gridLayout->addWidget(host_edit, 1, 1, 1, 1);

    textLabel1_2 = new QLabel(groupBox31);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

    gridLayout->addWidget(textLabel1_2, 1, 0, 1, 1);

    textLabel1 = new QLabel(groupBox31);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    textLabel1->setMinimumSize(QSize(150, 0));
    textLabel1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout->addWidget(textLabel1, 2, 0, 1, 1);

    enable_proxy = new QCheckBox(groupBox31);
    enable_proxy->setObjectName(QString::fromUtf8("enable_proxy"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(enable_proxy->sizePolicy().hasHeightForWidth());
    enable_proxy->setSizePolicy(sizePolicy3);

    gridLayout->addWidget(enable_proxy, 0, 0, 1, 2);


    vboxLayout->addWidget(groupBox31);

    groupBox31_2 = new QGroupBox(layoutWidget);
    groupBox31_2->setObjectName(QString::fromUtf8("groupBox31_2"));
    gridLayout1 = new QGridLayout(groupBox31_2);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(9);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    pdb_suffix = new QLineEdit(groupBox31_2);
    pdb_suffix->setObjectName(QString::fromUtf8("pdb_suffix"));
    pdb_suffix->setMinimumSize(QSize(25, 25));

    gridLayout1->addWidget(pdb_suffix, 1, 1, 1, 1);

    textLabel1_4 = new QLabel(groupBox31_2);
    textLabel1_4->setObjectName(QString::fromUtf8("textLabel1_4"));
    textLabel1_4->setMinimumSize(QSize(150, 0));

    gridLayout1->addWidget(textLabel1_4, 1, 0, 1, 1);

    textLabel1_3 = new QLabel(groupBox31_2);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
    textLabel1_3->setMinimumSize(QSize(150, 0));

    gridLayout1->addWidget(textLabel1_3, 0, 0, 1, 1);

    pdb_prefix = new QLineEdit(groupBox31_2);
    pdb_prefix->setObjectName(QString::fromUtf8("pdb_prefix"));
    pdb_prefix->setMinimumSize(QSize(25, 25));

    gridLayout1->addWidget(pdb_prefix, 0, 1, 1, 1);


    vboxLayout->addWidget(groupBox31_2);

    QWidget::setTabOrder(enable_proxy, host_edit);
    QWidget::setTabOrder(host_edit, port_edit);
    QWidget::setTabOrder(port_edit, pdb_prefix);
    QWidget::setTabOrder(pdb_prefix, pdb_suffix);

    retranslateUi(NetworkPreferencesData);

    QSize size(651, 406);
    size = size.expandedTo(NetworkPreferencesData->minimumSizeHint());
    NetworkPreferencesData->resize(size);


    QMetaObject::connectSlotsByName(NetworkPreferencesData);
    } // setupUi

    void retranslateUi(QWidget *NetworkPreferencesData)
    {
    NetworkPreferencesData->setWindowTitle(QApplication::translate("NetworkPreferencesData", "NetworkPreferences", 0, QApplication::UnicodeUTF8));
    groupBox31->setTitle(QApplication::translate("NetworkPreferencesData", "HTTP Transfers", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("NetworkPreferencesData", "host", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("NetworkPreferencesData", "port", 0, QApplication::UnicodeUTF8));
    enable_proxy->setToolTip(QApplication::translate("NetworkPreferencesData", "Writes the information from the Logs window into a file", 0, QApplication::UnicodeUTF8));
    enable_proxy->setText(QApplication::translate("NetworkPreferencesData", "Use proxy", 0, QApplication::UnicodeUTF8));
    groupBox31_2->setTitle(QApplication::translate("NetworkPreferencesData", "Downloads from www.PDB.org", 0, QApplication::UnicodeUTF8));
    pdb_suffix->setText(QApplication::translate("NetworkPreferencesData", ".pdb", 0, QApplication::UnicodeUTF8));
    textLabel1_4->setText(QApplication::translate("NetworkPreferencesData", "URL suffix", 0, QApplication::UnicodeUTF8));
    textLabel1_3->setText(QApplication::translate("NetworkPreferencesData", "URL prefix", 0, QApplication::UnicodeUTF8));
    pdb_prefix->setText(QApplication::translate("NetworkPreferencesData", "http://www.rcsb.org/pdb/files/", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(NetworkPreferencesData);
    } // retranslateUi

};

namespace Ui {
    class NetworkPreferencesData: public Ui_NetworkPreferencesData {};
} // namespace Ui

#endif // NETWORKPREFERENCESDATA_H
