/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QToolButton *toolButton;
    QLabel *label;
    QPushButton *InterfaceBtn;
    QPushButton *uploadBtn;
    QPushButton *dhcpBtn;
    QPushButton *natBtn;
    QPushButton *staticBtn;
    QPushButton *ospfBtn;
    QPushButton *bgpBtn;
    QPushButton *setupBtn;
    QPushButton *eigrpBtn;
    QPushButton *alcBtn;
    QPushButton *settingsBtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(221, 329);
        MainWindow->setStyleSheet(QLatin1String("color: rgb(54, 54, 54);\n"
"background-color: rgb(66, 66, 66);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(190, 0, 28, 23));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        toolButton->setFont(font);
        toolButton->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton->setMouseTracking(true);
        toolButton->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"selection-background-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 113, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setMouseTracking(false);
        label->setStyleSheet(QLatin1String("\n"
"color: rgb(0, 170, 255);\n"
""));
        InterfaceBtn = new QPushButton(centralWidget);
        InterfaceBtn->setObjectName(QStringLiteral("InterfaceBtn"));
        InterfaceBtn->setGeometry(QRect(11, 51, 80, 25));
        InterfaceBtn->setCursor(QCursor(Qt::PointingHandCursor));
        InterfaceBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));
        uploadBtn = new QPushButton(centralWidget);
        uploadBtn->setObjectName(QStringLiteral("uploadBtn"));
        uploadBtn->setGeometry(QRect(120, 290, 80, 25));
        uploadBtn->setCursor(QCursor(Qt::PointingHandCursor));
        uploadBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));
        dhcpBtn = new QPushButton(centralWidget);
        dhcpBtn->setObjectName(QStringLiteral("dhcpBtn"));
        dhcpBtn->setGeometry(QRect(11, 151, 80, 25));
        dhcpBtn->setCursor(QCursor(Qt::PointingHandCursor));
        dhcpBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));
        natBtn = new QPushButton(centralWidget);
        natBtn->setObjectName(QStringLiteral("natBtn"));
        natBtn->setGeometry(QRect(121, 150, 80, 25));
        natBtn->setCursor(QCursor(Qt::PointingHandCursor));
        natBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));
        staticBtn = new QPushButton(centralWidget);
        staticBtn->setObjectName(QStringLiteral("staticBtn"));
        staticBtn->setGeometry(QRect(11, 84, 80, 25));
        staticBtn->setCursor(QCursor(Qt::PointingHandCursor));
        staticBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));
        ospfBtn = new QPushButton(centralWidget);
        ospfBtn->setObjectName(QStringLiteral("ospfBtn"));
        ospfBtn->setGeometry(QRect(11, 116, 80, 25));
        ospfBtn->setCursor(QCursor(Qt::PointingHandCursor));
        ospfBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));
        bgpBtn = new QPushButton(centralWidget);
        bgpBtn->setObjectName(QStringLiteral("bgpBtn"));
        bgpBtn->setGeometry(QRect(121, 118, 80, 25));
        bgpBtn->setCursor(QCursor(Qt::PointingHandCursor));
        bgpBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));
        setupBtn = new QPushButton(centralWidget);
        setupBtn->setObjectName(QStringLiteral("setupBtn"));
        setupBtn->setGeometry(QRect(122, 52, 80, 25));
        setupBtn->setCursor(QCursor(Qt::PointingHandCursor));
        setupBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));
        eigrpBtn = new QPushButton(centralWidget);
        eigrpBtn->setObjectName(QStringLiteral("eigrpBtn"));
        eigrpBtn->setGeometry(QRect(122, 84, 80, 25));
        eigrpBtn->setCursor(QCursor(Qt::PointingHandCursor));
        eigrpBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));
        alcBtn = new QPushButton(centralWidget);
        alcBtn->setObjectName(QStringLiteral("alcBtn"));
        alcBtn->setGeometry(QRect(11, 183, 80, 25));
        alcBtn->setCursor(QCursor(Qt::PointingHandCursor));
        alcBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));
        settingsBtn = new QPushButton(centralWidget);
        settingsBtn->setObjectName(QStringLiteral("settingsBtn"));
        settingsBtn->setGeometry(QRect(10, 290, 80, 25));
        settingsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        settingsBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));
        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(toolButton, InterfaceBtn);
        QWidget::setTabOrder(InterfaceBtn, uploadBtn);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        toolButton->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Cisco Router ", Q_NULLPTR));
        InterfaceBtn->setText(QApplication::translate("MainWindow", "&Interfaces", Q_NULLPTR));
        uploadBtn->setText(QApplication::translate("MainWindow", "&Upload", Q_NULLPTR));
        dhcpBtn->setText(QApplication::translate("MainWindow", "&DHCP", Q_NULLPTR));
        natBtn->setText(QApplication::translate("MainWindow", "&NAT", Q_NULLPTR));
        staticBtn->setText(QApplication::translate("MainWindow", "Static &Route", Q_NULLPTR));
        ospfBtn->setText(QApplication::translate("MainWindow", "&OSPF", Q_NULLPTR));
        bgpBtn->setText(QApplication::translate("MainWindow", "&BGP", Q_NULLPTR));
        setupBtn->setText(QApplication::translate("MainWindow", "&Setup", Q_NULLPTR));
        eigrpBtn->setText(QApplication::translate("MainWindow", "&EIGRP", Q_NULLPTR));
        alcBtn->setText(QApplication::translate("MainWindow", "AC&L", Q_NULLPTR));
        settingsBtn->setText(QApplication::translate("MainWindow", "Se&ttings", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
