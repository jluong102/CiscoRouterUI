/********************************************************************************
** Form generated from reading UI file 'dhcp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DHCP_H
#define UI_DHCP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dhcp
{
public:
    QLineEdit *nameBox;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *subBox1;
    QLineEdit *subBox3;
    QLineEdit *netBox4;
    QLineEdit *netBox3;
    QLineEdit *subBox2;
    QLineEdit *netBox2;
    QLineEdit *subBox4;
    QLabel *label_5;
    QLineEdit *netBox1;
    QLabel *label_6;
    QLineEdit *defBox3;
    QLineEdit *defBox4;
    QLineEdit *defBox1;
    QLineEdit *defBox2;
    QLineEdit *dnsBox2;
    QLineEdit *dnsBox3;
    QLabel *label_7;
    QLineEdit *dnsBox4;
    QLineEdit *dnsBox1;
    QPushButton *clearBtn;
    QPushButton *configBtn;
    QPushButton *exitBtn;
    QRadioButton *onBtn;
    QRadioButton *offBtn;
    QGroupBox *groupBox;
    QLineEdit *dayBox;
    QLabel *label_8;
    QLineEdit *hourBox;
    QLabel *label_9;
    QLineEdit *minBox;
    QLabel *label_10;
    QCheckBox *infCheck;
    QLineEdit *biosBox1;
    QLineEdit *biosBox3;
    QLineEdit *biosBox4;
    QLabel *label_11;
    QLineEdit *biosBox2;
    QGroupBox *groupBox_2;
    QLineEdit *exIpBox1;
    QLabel *label_12;
    QLineEdit *exSubBox3;
    QLabel *ipLabel;
    QLineEdit *exSubBox4;
    QLineEdit *exIpBox2;
    QLineEdit *exSubBox1;
    QLineEdit *exSubBox2;
    QLineEdit *exIpBox3;
    QLineEdit *exIpBox4;
    QPushButton *addBtn;
    QLabel *label_2;
    QLineEdit *domainBox;
    QCheckBox *disableCheck;

    void setupUi(QWidget *Dhcp)
    {
        if (Dhcp->objectName().isEmpty())
            Dhcp->setObjectName(QStringLiteral("Dhcp"));
        Dhcp->resize(527, 362);
        Dhcp->setStyleSheet(QLatin1String("gridline-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 170, 255);\n"
"selection-background-color: rgb(66, 66, 66);\n"
"background-color: rgb(70, 70, 70);\n"
"alternate-background-color: rgb(0, 0, 0);"));
        nameBox = new QLineEdit(Dhcp);
        nameBox->setObjectName(QStringLiteral("nameBox"));
        nameBox->setGeometry(QRect(100, 20, 71, 24));
        nameBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label = new QLabel(Dhcp);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 51, 16));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        label_4 = new QLabel(Dhcp);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(32, 62, 61, 16));
        label_4->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        subBox1 = new QLineEdit(Dhcp);
        subBox1->setObjectName(QStringLiteral("subBox1"));
        subBox1->setGeometry(QRect(100, 100, 31, 24));
        subBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        subBox3 = new QLineEdit(Dhcp);
        subBox3->setObjectName(QStringLiteral("subBox3"));
        subBox3->setGeometry(QRect(180, 100, 31, 24));
        subBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        netBox4 = new QLineEdit(Dhcp);
        netBox4->setObjectName(QStringLiteral("netBox4"));
        netBox4->setGeometry(QRect(220, 60, 31, 24));
        netBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        netBox3 = new QLineEdit(Dhcp);
        netBox3->setObjectName(QStringLiteral("netBox3"));
        netBox3->setGeometry(QRect(180, 60, 31, 24));
        netBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        subBox2 = new QLineEdit(Dhcp);
        subBox2->setObjectName(QStringLiteral("subBox2"));
        subBox2->setGeometry(QRect(140, 100, 31, 24));
        subBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        netBox2 = new QLineEdit(Dhcp);
        netBox2->setObjectName(QStringLiteral("netBox2"));
        netBox2->setGeometry(QRect(140, 60, 31, 24));
        netBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        subBox4 = new QLineEdit(Dhcp);
        subBox4->setObjectName(QStringLiteral("subBox4"));
        subBox4->setGeometry(QRect(220, 100, 31, 24));
        subBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_5 = new QLabel(Dhcp);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 100, 51, 20));
        label_5->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        netBox1 = new QLineEdit(Dhcp);
        netBox1->setObjectName(QStringLiteral("netBox1"));
        netBox1->setGeometry(QRect(100, 60, 31, 24));
        netBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_6 = new QLabel(Dhcp);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 140, 91, 20));
        label_6->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        defBox3 = new QLineEdit(Dhcp);
        defBox3->setObjectName(QStringLiteral("defBox3"));
        defBox3->setGeometry(QRect(180, 140, 31, 24));
        defBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        defBox4 = new QLineEdit(Dhcp);
        defBox4->setObjectName(QStringLiteral("defBox4"));
        defBox4->setGeometry(QRect(220, 140, 31, 24));
        defBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        defBox1 = new QLineEdit(Dhcp);
        defBox1->setObjectName(QStringLiteral("defBox1"));
        defBox1->setGeometry(QRect(100, 140, 31, 24));
        defBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        defBox2 = new QLineEdit(Dhcp);
        defBox2->setObjectName(QStringLiteral("defBox2"));
        defBox2->setGeometry(QRect(140, 140, 31, 24));
        defBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        dnsBox2 = new QLineEdit(Dhcp);
        dnsBox2->setObjectName(QStringLiteral("dnsBox2"));
        dnsBox2->setGeometry(QRect(140, 180, 31, 24));
        dnsBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        dnsBox3 = new QLineEdit(Dhcp);
        dnsBox3->setObjectName(QStringLiteral("dnsBox3"));
        dnsBox3->setGeometry(QRect(180, 180, 31, 24));
        dnsBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_7 = new QLabel(Dhcp);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 180, 71, 20));
        label_7->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        dnsBox4 = new QLineEdit(Dhcp);
        dnsBox4->setObjectName(QStringLiteral("dnsBox4"));
        dnsBox4->setGeometry(QRect(220, 180, 31, 24));
        dnsBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        dnsBox1 = new QLineEdit(Dhcp);
        dnsBox1->setObjectName(QStringLiteral("dnsBox1"));
        dnsBox1->setGeometry(QRect(100, 180, 31, 24));
        dnsBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        clearBtn = new QPushButton(Dhcp);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));
        clearBtn->setGeometry(QRect(250, 320, 80, 25));
        clearBtn->setCursor(QCursor(Qt::PointingHandCursor));
        clearBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        configBtn = new QPushButton(Dhcp);
        configBtn->setObjectName(QStringLiteral("configBtn"));
        configBtn->setGeometry(QRect(340, 320, 80, 25));
        configBtn->setCursor(QCursor(Qt::PointingHandCursor));
        configBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        exitBtn = new QPushButton(Dhcp);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(430, 320, 80, 25));
        exitBtn->setCursor(QCursor(Qt::PointingHandCursor));
        exitBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        onBtn = new QRadioButton(Dhcp);
        onBtn->setObjectName(QStringLiteral("onBtn"));
        onBtn->setGeometry(QRect(70, 300, 81, 22));
        onBtn->setCursor(QCursor(Qt::PointingHandCursor));
        onBtn->setLayoutDirection(Qt::RightToLeft);
        onBtn->setStyleSheet(QLatin1String("color :rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);\n"
"alternate-background-color: rgb(66, 66, 66);\n"
"selection-color: rgb(0, 170, 255);"));
        onBtn->setChecked(true);
        offBtn = new QRadioButton(Dhcp);
        offBtn->setObjectName(QStringLiteral("offBtn"));
        offBtn->setGeometry(QRect(70, 330, 81, 22));
        offBtn->setCursor(QCursor(Qt::PointingHandCursor));
        offBtn->setLayoutDirection(Qt::RightToLeft);
        offBtn->setStyleSheet(QLatin1String("color :rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);\n"
"alternate-background-color: rgb(66, 66, 66);\n"
"selection-color: rgb(0, 170, 255);color :rgb(0, 170, 255);\n"
"selection-color: rgb(0, 170, 255);\n"
"selection-background-color: rgb(66, 66, 66);"));
        groupBox = new QGroupBox(Dhcp);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(300, 180, 181, 131));
        groupBox->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"selection-color: rgb(0, 170, 255);\n"
"selection-background-color: rgb(0, 170, 255);\n"
"alternate-background-color: rgb(0, 170, 255);\n"
"gridline-color: rgb(0, 0, 127);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        dayBox = new QLineEdit(groupBox);
        dayBox->setObjectName(QStringLiteral("dayBox"));
        dayBox->setGeometry(QRect(20, 70, 41, 24));
        dayBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 40, 51, 16));
        label_8->setLayoutDirection(Qt::RightToLeft);
        label_8->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        hourBox = new QLineEdit(groupBox);
        hourBox->setObjectName(QStringLiteral("hourBox"));
        hourBox->setGeometry(QRect(70, 70, 41, 24));
        hourBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(70, 40, 51, 16));
        label_9->setLayoutDirection(Qt::RightToLeft);
        label_9->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        minBox = new QLineEdit(groupBox);
        minBox->setObjectName(QStringLiteral("minBox"));
        minBox->setGeometry(QRect(120, 70, 41, 24));
        minBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(120, 40, 51, 16));
        label_10->setLayoutDirection(Qt::RightToLeft);
        label_10->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        infCheck = new QCheckBox(groupBox);
        infCheck->setObjectName(QStringLiteral("infCheck"));
        infCheck->setGeometry(QRect(80, 100, 85, 22));
        infCheck->setCursor(QCursor(Qt::PointingHandCursor));
        infCheck->setLayoutDirection(Qt::LeftToRight);
        infCheck->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        biosBox1 = new QLineEdit(Dhcp);
        biosBox1->setObjectName(QStringLiteral("biosBox1"));
        biosBox1->setGeometry(QRect(100, 220, 31, 24));
        biosBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        biosBox3 = new QLineEdit(Dhcp);
        biosBox3->setObjectName(QStringLiteral("biosBox3"));
        biosBox3->setGeometry(QRect(180, 220, 31, 24));
        biosBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        biosBox4 = new QLineEdit(Dhcp);
        biosBox4->setObjectName(QStringLiteral("biosBox4"));
        biosBox4->setGeometry(QRect(220, 220, 31, 24));
        biosBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_11 = new QLabel(Dhcp);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 220, 71, 20));
        label_11->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        biosBox2 = new QLineEdit(Dhcp);
        biosBox2->setObjectName(QStringLiteral("biosBox2"));
        biosBox2->setGeometry(QRect(140, 220, 31, 24));
        biosBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        groupBox_2 = new QGroupBox(Dhcp);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(260, 10, 251, 151));
        groupBox_2->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"selection-color: rgb(0, 170, 255);\n"
"selection-background-color: rgb(0, 170, 255);\n"
"alternate-background-color: rgb(0, 170, 255);\n"
"gridline-color: rgb(0, 0, 127);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        exIpBox1 = new QLineEdit(groupBox_2);
        exIpBox1->setObjectName(QStringLiteral("exIpBox1"));
        exIpBox1->setGeometry(QRect(80, 40, 31, 24));
        exIpBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 80, 51, 20));
        label_12->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        exSubBox3 = new QLineEdit(groupBox_2);
        exSubBox3->setObjectName(QStringLiteral("exSubBox3"));
        exSubBox3->setGeometry(QRect(160, 80, 31, 24));
        exSubBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        ipLabel = new QLabel(groupBox_2);
        ipLabel->setObjectName(QStringLiteral("ipLabel"));
        ipLabel->setGeometry(QRect(12, 42, 61, 16));
        ipLabel->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        exSubBox4 = new QLineEdit(groupBox_2);
        exSubBox4->setObjectName(QStringLiteral("exSubBox4"));
        exSubBox4->setGeometry(QRect(200, 80, 31, 24));
        exSubBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        exIpBox2 = new QLineEdit(groupBox_2);
        exIpBox2->setObjectName(QStringLiteral("exIpBox2"));
        exIpBox2->setGeometry(QRect(120, 40, 31, 24));
        exIpBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        exSubBox1 = new QLineEdit(groupBox_2);
        exSubBox1->setObjectName(QStringLiteral("exSubBox1"));
        exSubBox1->setGeometry(QRect(80, 80, 31, 24));
        exSubBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        exSubBox2 = new QLineEdit(groupBox_2);
        exSubBox2->setObjectName(QStringLiteral("exSubBox2"));
        exSubBox2->setGeometry(QRect(120, 80, 31, 24));
        exSubBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        exIpBox3 = new QLineEdit(groupBox_2);
        exIpBox3->setObjectName(QStringLiteral("exIpBox3"));
        exIpBox3->setGeometry(QRect(160, 40, 31, 24));
        exIpBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        exIpBox4 = new QLineEdit(groupBox_2);
        exIpBox4->setObjectName(QStringLiteral("exIpBox4"));
        exIpBox4->setGeometry(QRect(200, 40, 31, 24));
        exIpBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        addBtn = new QPushButton(groupBox_2);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(150, 110, 80, 25));
        addBtn->setCursor(QCursor(Qt::PointingHandCursor));
        addBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        label_2 = new QLabel(Dhcp);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 260, 51, 16));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        domainBox = new QLineEdit(Dhcp);
        domainBox->setObjectName(QStringLiteral("domainBox"));
        domainBox->setGeometry(QRect(100, 260, 151, 24));
        domainBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        disableCheck = new QCheckBox(Dhcp);
        disableCheck->setObjectName(QStringLiteral("disableCheck"));
        disableCheck->setGeometry(QRect(180, 20, 71, 22));
        disableCheck->setCursor(QCursor(Qt::PointingHandCursor));
        disableCheck->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        QWidget::setTabOrder(nameBox, netBox1);
        QWidget::setTabOrder(netBox1, netBox2);
        QWidget::setTabOrder(netBox2, netBox3);
        QWidget::setTabOrder(netBox3, netBox4);
        QWidget::setTabOrder(netBox4, subBox1);
        QWidget::setTabOrder(subBox1, subBox2);
        QWidget::setTabOrder(subBox2, subBox3);
        QWidget::setTabOrder(subBox3, subBox4);
        QWidget::setTabOrder(subBox4, defBox1);
        QWidget::setTabOrder(defBox1, defBox2);
        QWidget::setTabOrder(defBox2, defBox3);
        QWidget::setTabOrder(defBox3, defBox4);
        QWidget::setTabOrder(defBox4, dnsBox1);
        QWidget::setTabOrder(dnsBox1, dnsBox2);
        QWidget::setTabOrder(dnsBox2, dnsBox3);
        QWidget::setTabOrder(dnsBox3, dnsBox4);
        QWidget::setTabOrder(dnsBox4, biosBox1);
        QWidget::setTabOrder(biosBox1, biosBox2);
        QWidget::setTabOrder(biosBox2, biosBox3);
        QWidget::setTabOrder(biosBox3, biosBox4);
        QWidget::setTabOrder(biosBox4, domainBox);
        QWidget::setTabOrder(domainBox, exIpBox1);
        QWidget::setTabOrder(exIpBox1, exIpBox2);
        QWidget::setTabOrder(exIpBox2, exIpBox3);
        QWidget::setTabOrder(exIpBox3, exIpBox4);
        QWidget::setTabOrder(exIpBox4, exSubBox1);
        QWidget::setTabOrder(exSubBox1, exSubBox2);
        QWidget::setTabOrder(exSubBox2, exSubBox3);
        QWidget::setTabOrder(exSubBox3, exSubBox4);
        QWidget::setTabOrder(exSubBox4, addBtn);
        QWidget::setTabOrder(addBtn, dayBox);
        QWidget::setTabOrder(dayBox, hourBox);
        QWidget::setTabOrder(hourBox, minBox);
        QWidget::setTabOrder(minBox, infCheck);
        QWidget::setTabOrder(infCheck, onBtn);
        QWidget::setTabOrder(onBtn, offBtn);
        QWidget::setTabOrder(offBtn, clearBtn);
        QWidget::setTabOrder(clearBtn, configBtn);
        QWidget::setTabOrder(configBtn, exitBtn);

        retranslateUi(Dhcp);

        QMetaObject::connectSlotsByName(Dhcp);
    } // setupUi

    void retranslateUi(QWidget *Dhcp)
    {
        Dhcp->setWindowTitle(QApplication::translate("Dhcp", "Form", Q_NULLPTR));
        nameBox->setText(QString());
        label->setText(QApplication::translate("Dhcp", "Name", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dhcp", "Network", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dhcp", "Subnet", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dhcp", "Default Router", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dhcp", "DNS Server", Q_NULLPTR));
        clearBtn->setText(QApplication::translate("Dhcp", "Clear", Q_NULLPTR));
        configBtn->setText(QApplication::translate("Dhcp", "Configure", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        configBtn->setShortcut(QApplication::translate("Dhcp", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        exitBtn->setText(QApplication::translate("Dhcp", "Done", Q_NULLPTR));
        onBtn->setText(QApplication::translate("Dhcp", "DHCP On", Q_NULLPTR));
        offBtn->setText(QApplication::translate("Dhcp", "DHCP Off", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Dhcp", "Lease", Q_NULLPTR));
        label_8->setText(QApplication::translate("Dhcp", "Days", Q_NULLPTR));
        label_9->setText(QApplication::translate("Dhcp", "Hours", Q_NULLPTR));
        label_10->setText(QApplication::translate("Dhcp", "Minutes", Q_NULLPTR));
        infCheck->setText(QApplication::translate("Dhcp", "Infinite", Q_NULLPTR));
        label_11->setText(QApplication::translate("Dhcp", "NetBIOS", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Dhcp", "Exclude", Q_NULLPTR));
        label_12->setText(QApplication::translate("Dhcp", "Subnet", Q_NULLPTR));
        ipLabel->setText(QApplication::translate("Dhcp", "Ip Address", Q_NULLPTR));
        addBtn->setText(QApplication::translate("Dhcp", "Add", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dhcp", "Domain", Q_NULLPTR));
        domainBox->setText(QString());
        disableCheck->setText(QApplication::translate("Dhcp", "Disable", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dhcp: public Ui_Dhcp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DHCP_H
