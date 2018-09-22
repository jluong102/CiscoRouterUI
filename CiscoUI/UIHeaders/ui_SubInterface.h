/********************************************************************************
** Form generated from reading UI file 'SubInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBINTERFACE_H
#define UI_SUBINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubInterface
{
public:
    QCheckBox *shutBox;
    QLineEdit *subBox3;
    QLineEdit *ipBox1;
    QLineEdit *ipBox2;
    QLineEdit *ipBox4;
    QLineEdit *subBox1;
    QLineEdit *interfaceBox;
    QLineEdit *ipBox3;
    QLineEdit *subBox2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *subBox4;
    QLineEdit *descripBox;
    QLabel *label_6;
    QPushButton *exitBtn;
    QPushButton *clearBtn;
    QPushButton *configBtn;
    QLabel *label_4;
    QLineEdit *dotBox;
    QCheckBox *ipInsideCheck;

    void setupUi(QWidget *SubInterface)
    {
        if (SubInterface->objectName().isEmpty())
            SubInterface->setObjectName(QStringLiteral("SubInterface"));
        SubInterface->resize(400, 300);
        SubInterface->setStyleSheet(QLatin1String("gridline-color: rgb(0, 0, 0);\n"
"background-color: rgb(70, 70, 70);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 85, 255);\n"
"selection-background-color: rgb(0, 0, 127);"));
        shutBox = new QCheckBox(SubInterface);
        shutBox->setObjectName(QStringLiteral("shutBox"));
        shutBox->setGeometry(QRect(210, 10, 83, 22));
        shutBox->setCursor(QCursor(Qt::PointingHandCursor));
        shutBox->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"alternate-background-color: rgb(66, 66, 66);\n"
"background-color: rgba(70, 70, 70, 70);\n"
"gridline-color: rgb(0, 0, 0);\n"
"selection-color: rgb(255, 170, 0);\n"
"selection-background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        shutBox->setChecked(true);
        subBox3 = new QLineEdit(SubInterface);
        subBox3->setObjectName(QStringLiteral("subBox3"));
        subBox3->setGeometry(QRect(200, 90, 41, 24));
        subBox3->setStyleSheet(QStringLiteral("color: rgb(0, 170, 255);"));
        ipBox1 = new QLineEdit(SubInterface);
        ipBox1->setObjectName(QStringLiteral("ipBox1"));
        ipBox1->setGeometry(QRect(100, 50, 41, 24));
        ipBox1->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        ipBox2 = new QLineEdit(SubInterface);
        ipBox2->setObjectName(QStringLiteral("ipBox2"));
        ipBox2->setGeometry(QRect(150, 50, 41, 24));
        ipBox2->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        ipBox4 = new QLineEdit(SubInterface);
        ipBox4->setObjectName(QStringLiteral("ipBox4"));
        ipBox4->setGeometry(QRect(250, 50, 41, 24));
        ipBox4->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        subBox1 = new QLineEdit(SubInterface);
        subBox1->setObjectName(QStringLiteral("subBox1"));
        subBox1->setGeometry(QRect(100, 90, 41, 24));
        subBox1->setStyleSheet(QStringLiteral("color: rgb(0, 170, 255);"));
        interfaceBox = new QLineEdit(SubInterface);
        interfaceBox->setObjectName(QStringLiteral("interfaceBox"));
        interfaceBox->setGeometry(QRect(100, 11, 108, 24));
        interfaceBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"gridline-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);"));
        ipBox3 = new QLineEdit(SubInterface);
        ipBox3->setObjectName(QStringLiteral("ipBox3"));
        ipBox3->setGeometry(QRect(200, 50, 41, 24));
        ipBox3->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        subBox2 = new QLineEdit(SubInterface);
        subBox2->setObjectName(QStringLiteral("subBox2"));
        subBox2->setGeometry(QRect(150, 90, 41, 24));
        subBox2->setStyleSheet(QStringLiteral("color: rgb(0, 170, 255);"));
        label_2 = new QLabel(SubInterface);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 55, 16));
        label_2->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3 = new QLabel(SubInterface);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 90, 55, 16));
        label_3->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label = new QLabel(SubInterface);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(21, 11, 52, 16));
        label->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        subBox4 = new QLineEdit(SubInterface);
        subBox4->setObjectName(QStringLiteral("subBox4"));
        subBox4->setGeometry(QRect(250, 90, 41, 24));
        subBox4->setStyleSheet(QStringLiteral("color: rgb(0, 170, 255);"));
        descripBox = new QLineEdit(SubInterface);
        descripBox->setObjectName(QStringLiteral("descripBox"));
        descripBox->setGeometry(QRect(100, 220, 111, 24));
        descripBox->setStyleSheet(QStringLiteral("color: rgb(0, 170, 255);"));
        label_6 = new QLabel(SubInterface);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 220, 71, 16));
        label_6->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        exitBtn = new QPushButton(SubInterface);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(310, 260, 80, 25));
        exitBtn->setCursor(QCursor(Qt::PointingHandCursor));
        exitBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        clearBtn = new QPushButton(SubInterface);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));
        clearBtn->setGeometry(QRect(130, 260, 80, 25));
        clearBtn->setCursor(QCursor(Qt::PointingHandCursor));
        clearBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        configBtn = new QPushButton(SubInterface);
        configBtn->setObjectName(QStringLiteral("configBtn"));
        configBtn->setGeometry(QRect(220, 260, 80, 25));
        configBtn->setCursor(QCursor(Qt::PointingHandCursor));
        configBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        label_4 = new QLabel(SubInterface);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 130, 55, 16));
        label_4->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        dotBox = new QLineEdit(SubInterface);
        dotBox->setObjectName(QStringLiteral("dotBox"));
        dotBox->setGeometry(QRect(100, 130, 41, 24));
        dotBox->setStyleSheet(QStringLiteral("color: rgb(0, 170, 255);"));
        ipInsideCheck = new QCheckBox(SubInterface);
        ipInsideCheck->setObjectName(QStringLiteral("ipInsideCheck"));
        ipInsideCheck->setGeometry(QRect(160, 130, 101, 22));
        ipInsideCheck->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));

        retranslateUi(SubInterface);

        QMetaObject::connectSlotsByName(SubInterface);
    } // setupUi

    void retranslateUi(QWidget *SubInterface)
    {
        SubInterface->setWindowTitle(QApplication::translate("SubInterface", "Form", Q_NULLPTR));
        shutBox->setText(QApplication::translate("SubInterface", "Shutdown", Q_NULLPTR));
        label_2->setText(QApplication::translate("SubInterface", "Ip Address", Q_NULLPTR));
        label_3->setText(QApplication::translate("SubInterface", "Subnet", Q_NULLPTR));
        label->setText(QApplication::translate("SubInterface", "Interface", Q_NULLPTR));
        label_6->setText(QApplication::translate("SubInterface", "Description", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("SubInterface", "Done", Q_NULLPTR));
        clearBtn->setText(QApplication::translate("SubInterface", "Clear", Q_NULLPTR));
        configBtn->setText(QApplication::translate("SubInterface", "Configure", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        configBtn->setShortcut(QApplication::translate("SubInterface", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label_4->setText(QApplication::translate("SubInterface", "Dot1Q", Q_NULLPTR));
        ipInsideCheck->setText(QApplication::translate("SubInterface", "IP NAT Inside", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SubInterface: public Ui_SubInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBINTERFACE_H
