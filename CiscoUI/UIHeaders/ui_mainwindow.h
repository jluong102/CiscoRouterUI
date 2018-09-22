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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QToolButton *toolButton;
    QLabel *label;
    QPushButton *uploadBtn;
    QPushButton *settingsBtn;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *SubInterfaceBtn;
    QPushButton *setupBtn;
    QPushButton *eigrpBtn;
    QPushButton *bgpBtn;
    QPushButton *natBtn;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *InterfaceBtn;
    QPushButton *staticBtn;
    QPushButton *ospfBtn;
    QPushButton *dhcpBtn;
    QPushButton *alcBtn;

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
        uploadBtn = new QPushButton(centralWidget);
        uploadBtn->setObjectName(QStringLiteral("uploadBtn"));
        uploadBtn->setGeometry(QRect(120, 290, 80, 25));
        uploadBtn->setCursor(QCursor(Qt::PointingHandCursor));
        uploadBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));
        settingsBtn = new QPushButton(centralWidget);
        settingsBtn->setObjectName(QStringLiteral("settingsBtn"));
        settingsBtn->setGeometry(QRect(10, 290, 80, 25));
        settingsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        settingsBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(119, 50, 83, 155));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        SubInterfaceBtn = new QPushButton(widget);
        SubInterfaceBtn->setObjectName(QStringLiteral("SubInterfaceBtn"));
        SubInterfaceBtn->setCursor(QCursor(Qt::PointingHandCursor));
        SubInterfaceBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));

        verticalLayout->addWidget(SubInterfaceBtn);

        setupBtn = new QPushButton(widget);
        setupBtn->setObjectName(QStringLiteral("setupBtn"));
        setupBtn->setCursor(QCursor(Qt::PointingHandCursor));
        setupBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));

        verticalLayout->addWidget(setupBtn);

        eigrpBtn = new QPushButton(widget);
        eigrpBtn->setObjectName(QStringLiteral("eigrpBtn"));
        eigrpBtn->setCursor(QCursor(Qt::PointingHandCursor));
        eigrpBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));

        verticalLayout->addWidget(eigrpBtn);

        bgpBtn = new QPushButton(widget);
        bgpBtn->setObjectName(QStringLiteral("bgpBtn"));
        bgpBtn->setCursor(QCursor(Qt::PointingHandCursor));
        bgpBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));

        verticalLayout->addWidget(bgpBtn);

        natBtn = new QPushButton(widget);
        natBtn->setObjectName(QStringLiteral("natBtn"));
        natBtn->setCursor(QCursor(Qt::PointingHandCursor));
        natBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));

        verticalLayout->addWidget(natBtn);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(11, 51, 82, 155));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        InterfaceBtn = new QPushButton(widget1);
        InterfaceBtn->setObjectName(QStringLiteral("InterfaceBtn"));
        InterfaceBtn->setCursor(QCursor(Qt::PointingHandCursor));
        InterfaceBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));

        verticalLayout_2->addWidget(InterfaceBtn);

        staticBtn = new QPushButton(widget1);
        staticBtn->setObjectName(QStringLiteral("staticBtn"));
        staticBtn->setCursor(QCursor(Qt::PointingHandCursor));
        staticBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));

        verticalLayout_2->addWidget(staticBtn);

        ospfBtn = new QPushButton(widget1);
        ospfBtn->setObjectName(QStringLiteral("ospfBtn"));
        ospfBtn->setCursor(QCursor(Qt::PointingHandCursor));
        ospfBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));

        verticalLayout_2->addWidget(ospfBtn);

        dhcpBtn = new QPushButton(widget1);
        dhcpBtn->setObjectName(QStringLiteral("dhcpBtn"));
        dhcpBtn->setCursor(QCursor(Qt::PointingHandCursor));
        dhcpBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));

        verticalLayout_2->addWidget(dhcpBtn);

        alcBtn = new QPushButton(widget1);
        alcBtn->setObjectName(QStringLiteral("alcBtn"));
        alcBtn->setCursor(QCursor(Qt::PointingHandCursor));
        alcBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);"));

        verticalLayout_2->addWidget(alcBtn);

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
        uploadBtn->setText(QApplication::translate("MainWindow", "&Upload", Q_NULLPTR));
        settingsBtn->setText(QApplication::translate("MainWindow", "Se&ttings", Q_NULLPTR));
        SubInterfaceBtn->setText(QApplication::translate("MainWindow", "Su&binterface", Q_NULLPTR));
        setupBtn->setText(QApplication::translate("MainWindow", "&Setup", Q_NULLPTR));
        eigrpBtn->setText(QApplication::translate("MainWindow", "&EIGRP", Q_NULLPTR));
        bgpBtn->setText(QApplication::translate("MainWindow", "&BGP", Q_NULLPTR));
        natBtn->setText(QApplication::translate("MainWindow", "&NAT", Q_NULLPTR));
        InterfaceBtn->setText(QApplication::translate("MainWindow", "&Interfaces", Q_NULLPTR));
        staticBtn->setText(QApplication::translate("MainWindow", "Static &Route", Q_NULLPTR));
        ospfBtn->setText(QApplication::translate("MainWindow", "&OSPF", Q_NULLPTR));
        dhcpBtn->setText(QApplication::translate("MainWindow", "&DHCP", Q_NULLPTR));
        alcBtn->setText(QApplication::translate("MainWindow", "AC&L", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
