/********************************************************************************
** Form generated from reading UI file 'StaticRoute.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATICROUTE_H
#define UI_STATICROUTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StaticRoute
{
public:
    QLineEdit *ipBox3;
    QLabel *label_2;
    QLineEdit *subBox2;
    QLineEdit *subBox1;
    QLineEdit *subBox4;
    QLineEdit *ipBox1;
    QLineEdit *ipBox2;
    QLineEdit *subBox3;
    QLabel *label_3;
    QLineEdit *ipBox4;
    QRadioButton *ipBtn;
    QRadioButton *intBtn;
    QLineEdit *intBox3;
    QLineEdit *intBox2;
    QLineEdit *intBox4;
    QLineEdit *intBox1;
    QLineEdit *interfaceBox;
    QPushButton *clearBtn;
    QPushButton *exitBtn;
    QPushButton *configBtn;
    QLabel *label;

    void setupUi(QWidget *StaticRoute)
    {
        if (StaticRoute->objectName().isEmpty())
            StaticRoute->setObjectName(QStringLiteral("StaticRoute"));
        StaticRoute->resize(400, 300);
        StaticRoute->setStyleSheet(QLatin1String("gridline-color: rgb(0, 0, 0);\n"
"background-color: rgb(70, 70, 70);\n"
""));
        ipBox3 = new QLineEdit(StaticRoute);
        ipBox3->setObjectName(QStringLiteral("ipBox3"));
        ipBox3->setGeometry(QRect(210, 20, 41, 24));
        ipBox3->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_2 = new QLabel(StaticRoute);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 71, 16));
        label_2->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        subBox2 = new QLineEdit(StaticRoute);
        subBox2->setObjectName(QStringLiteral("subBox2"));
        subBox2->setGeometry(QRect(160, 60, 41, 24));
        subBox2->setStyleSheet(QStringLiteral("color: rgb(0, 170, 255);"));
        subBox1 = new QLineEdit(StaticRoute);
        subBox1->setObjectName(QStringLiteral("subBox1"));
        subBox1->setGeometry(QRect(110, 60, 41, 24));
        subBox1->setStyleSheet(QStringLiteral("color: rgb(0, 170, 255);"));
        subBox4 = new QLineEdit(StaticRoute);
        subBox4->setObjectName(QStringLiteral("subBox4"));
        subBox4->setGeometry(QRect(260, 60, 41, 24));
        subBox4->setStyleSheet(QStringLiteral("color: rgb(0, 170, 255);"));
        ipBox1 = new QLineEdit(StaticRoute);
        ipBox1->setObjectName(QStringLiteral("ipBox1"));
        ipBox1->setGeometry(QRect(110, 20, 41, 24));
        ipBox1->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        ipBox2 = new QLineEdit(StaticRoute);
        ipBox2->setObjectName(QStringLiteral("ipBox2"));
        ipBox2->setGeometry(QRect(160, 20, 41, 24));
        ipBox2->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        subBox3 = new QLineEdit(StaticRoute);
        subBox3->setObjectName(QStringLiteral("subBox3"));
        subBox3->setGeometry(QRect(210, 60, 41, 24));
        subBox3->setStyleSheet(QStringLiteral("color: rgb(0, 170, 255);"));
        label_3 = new QLabel(StaticRoute);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 60, 55, 16));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        ipBox4 = new QLineEdit(StaticRoute);
        ipBox4->setObjectName(QStringLiteral("ipBox4"));
        ipBox4->setGeometry(QRect(260, 20, 41, 24));
        ipBox4->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        ipBtn = new QRadioButton(StaticRoute);
        ipBtn->setObjectName(QStringLiteral("ipBtn"));
        ipBtn->setGeometry(QRect(10, 110, 91, 22));
        ipBtn->setCursor(QCursor(Qt::PointingHandCursor));
        ipBtn->setLayoutDirection(Qt::RightToLeft);
        ipBtn->setStyleSheet(QLatin1String("color :rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);\n"
"alternate-background-color: rgb(66, 66, 66);\n"
"selection-color: rgb(0, 170, 255);"));
        ipBtn->setChecked(true);
        intBtn = new QRadioButton(StaticRoute);
        intBtn->setObjectName(QStringLiteral("intBtn"));
        intBtn->setGeometry(QRect(20, 140, 81, 22));
        intBtn->setCursor(QCursor(Qt::PointingHandCursor));
        intBtn->setLayoutDirection(Qt::RightToLeft);
        intBtn->setStyleSheet(QLatin1String("color :rgb(0, 170, 255);\n"
"selection-color: rgb(0, 170, 255);\n"
"selection-background-color: rgb(66, 66, 66);"));
        intBox3 = new QLineEdit(StaticRoute);
        intBox3->setObjectName(QStringLiteral("intBox3"));
        intBox3->setGeometry(QRect(210, 110, 41, 24));
        intBox3->setStyleSheet(QStringLiteral("color: rgb(0, 170, 255);"));
        intBox2 = new QLineEdit(StaticRoute);
        intBox2->setObjectName(QStringLiteral("intBox2"));
        intBox2->setGeometry(QRect(160, 110, 41, 24));
        intBox2->setStyleSheet(QStringLiteral("color: rgb(0, 170, 255);"));
        intBox4 = new QLineEdit(StaticRoute);
        intBox4->setObjectName(QStringLiteral("intBox4"));
        intBox4->setGeometry(QRect(260, 110, 41, 24));
        intBox4->setStyleSheet(QStringLiteral("color: rgb(0, 170, 255);"));
        intBox1 = new QLineEdit(StaticRoute);
        intBox1->setObjectName(QStringLiteral("intBox1"));
        intBox1->setGeometry(QRect(110, 110, 41, 24));
        intBox1->setStyleSheet(QStringLiteral("color: rgb(0, 170, 255);"));
        interfaceBox = new QLineEdit(StaticRoute);
        interfaceBox->setObjectName(QStringLiteral("interfaceBox"));
        interfaceBox->setGeometry(QRect(110, 140, 81, 24));
        interfaceBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"gridline-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);"));
        clearBtn = new QPushButton(StaticRoute);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));
        clearBtn->setGeometry(QRect(130, 260, 80, 25));
        clearBtn->setCursor(QCursor(Qt::PointingHandCursor));
        clearBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        exitBtn = new QPushButton(StaticRoute);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(310, 260, 80, 25));
        exitBtn->setCursor(QCursor(Qt::PointingHandCursor));
        exitBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        configBtn = new QPushButton(StaticRoute);
        configBtn->setObjectName(QStringLiteral("configBtn"));
        configBtn->setGeometry(QRect(220, 260, 80, 25));
        configBtn->setCursor(QCursor(Qt::PointingHandCursor));
        configBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        label = new QLabel(StaticRoute);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 90, 81, 16));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        QWidget::setTabOrder(ipBox1, ipBox2);
        QWidget::setTabOrder(ipBox2, ipBox3);
        QWidget::setTabOrder(ipBox3, ipBox4);
        QWidget::setTabOrder(ipBox4, subBox1);
        QWidget::setTabOrder(subBox1, subBox2);
        QWidget::setTabOrder(subBox2, subBox3);
        QWidget::setTabOrder(subBox3, subBox4);
        QWidget::setTabOrder(subBox4, ipBtn);
        QWidget::setTabOrder(ipBtn, intBtn);
        QWidget::setTabOrder(intBtn, intBox1);
        QWidget::setTabOrder(intBox1, intBox2);
        QWidget::setTabOrder(intBox2, intBox3);
        QWidget::setTabOrder(intBox3, intBox4);
        QWidget::setTabOrder(intBox4, interfaceBox);
        QWidget::setTabOrder(interfaceBox, clearBtn);
        QWidget::setTabOrder(clearBtn, configBtn);
        QWidget::setTabOrder(configBtn, exitBtn);

        retranslateUi(StaticRoute);

        QMetaObject::connectSlotsByName(StaticRoute);
    } // setupUi

    void retranslateUi(QWidget *StaticRoute)
    {
        StaticRoute->setWindowTitle(QApplication::translate("StaticRoute", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("StaticRoute", "Incoming", Q_NULLPTR));
        label_3->setText(QApplication::translate("StaticRoute", "Subnet", Q_NULLPTR));
        ipBtn->setText(QApplication::translate("StaticRoute", "Ip Address", Q_NULLPTR));
        intBtn->setText(QApplication::translate("StaticRoute", "Interface", Q_NULLPTR));
        clearBtn->setText(QApplication::translate("StaticRoute", "Clear", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("StaticRoute", "Done", Q_NULLPTR));
        configBtn->setText(QApplication::translate("StaticRoute", "Configure", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        configBtn->setShortcut(QApplication::translate("StaticRoute", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label->setText(QApplication::translate("StaticRoute", "Destination", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StaticRoute: public Ui_StaticRoute {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATICROUTE_H
