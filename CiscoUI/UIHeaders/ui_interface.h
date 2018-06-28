/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Interface
{
public:
    QLabel *label;
    QLineEdit *interfaceBox;
    QPushButton *exitBtn;
    QPushButton *configBtn;
    QLabel *label_2;
    QLineEdit *ipBox1;
    QLineEdit *ipBox2;
    QLineEdit *ipBox3;
    QLineEdit *ipBox4;
    QLineEdit *subBox4;
    QLineEdit *subBox3;
    QLineEdit *subBox1;
    QLabel *label_3;
    QLineEdit *subBox2;
    QCheckBox *shutBox;
    QComboBox *duplexCombo;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *speedCombo;
    QPushButton *clearBtn;
    QLabel *label_6;
    QLineEdit *descripBox;
    QComboBox *clockCombo;
    QCheckBox *clockCheck;

    void setupUi(QWidget *Interface)
    {
        if (Interface->objectName().isEmpty())
            Interface->setObjectName(QStringLiteral("Interface"));
        Interface->resize(400, 300);
        Interface->setStyleSheet(QLatin1String("gridline-color: rgb(0, 0, 0);\n"
"background-color: rgb(70, 70, 70);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 85, 255);\n"
"selection-background-color: rgb(0, 0, 127);"));
        label = new QLabel(Interface);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(21, 21, 52, 16));
        label->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        interfaceBox = new QLineEdit(Interface);
        interfaceBox->setObjectName(QStringLiteral("interfaceBox"));
        interfaceBox->setGeometry(QRect(100, 21, 108, 24));
        interfaceBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"gridline-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);"));
        exitBtn = new QPushButton(Interface);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(300, 260, 80, 25));
        exitBtn->setCursor(QCursor(Qt::PointingHandCursor));
        exitBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        configBtn = new QPushButton(Interface);
        configBtn->setObjectName(QStringLiteral("configBtn"));
        configBtn->setGeometry(QRect(210, 260, 80, 25));
        configBtn->setCursor(QCursor(Qt::PointingHandCursor));
        configBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        label_2 = new QLabel(Interface);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 55, 16));
        label_2->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        ipBox1 = new QLineEdit(Interface);
        ipBox1->setObjectName(QStringLiteral("ipBox1"));
        ipBox1->setGeometry(QRect(100, 60, 41, 24));
        ipBox1->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        ipBox2 = new QLineEdit(Interface);
        ipBox2->setObjectName(QStringLiteral("ipBox2"));
        ipBox2->setGeometry(QRect(150, 60, 41, 24));
        ipBox2->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        ipBox3 = new QLineEdit(Interface);
        ipBox3->setObjectName(QStringLiteral("ipBox3"));
        ipBox3->setGeometry(QRect(200, 60, 41, 24));
        ipBox3->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        ipBox4 = new QLineEdit(Interface);
        ipBox4->setObjectName(QStringLiteral("ipBox4"));
        ipBox4->setGeometry(QRect(250, 60, 41, 24));
        ipBox4->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        subBox4 = new QLineEdit(Interface);
        subBox4->setObjectName(QStringLiteral("subBox4"));
        subBox4->setGeometry(QRect(250, 100, 41, 24));
        subBox4->setStyleSheet(QStringLiteral("color: rgb(0, 170, 255);"));
        subBox3 = new QLineEdit(Interface);
        subBox3->setObjectName(QStringLiteral("subBox3"));
        subBox3->setGeometry(QRect(200, 100, 41, 24));
        subBox3->setStyleSheet(QStringLiteral("color: rgb(0, 170, 255);"));
        subBox1 = new QLineEdit(Interface);
        subBox1->setObjectName(QStringLiteral("subBox1"));
        subBox1->setGeometry(QRect(100, 100, 41, 24));
        subBox1->setStyleSheet(QStringLiteral("color: rgb(0, 170, 255);"));
        label_3 = new QLabel(Interface);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 55, 16));
        label_3->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        subBox2 = new QLineEdit(Interface);
        subBox2->setObjectName(QStringLiteral("subBox2"));
        subBox2->setGeometry(QRect(150, 100, 41, 24));
        subBox2->setStyleSheet(QStringLiteral("color: rgb(0, 170, 255);"));
        shutBox = new QCheckBox(Interface);
        shutBox->setObjectName(QStringLiteral("shutBox"));
        shutBox->setGeometry(QRect(210, 20, 83, 22));
        shutBox->setCursor(QCursor(Qt::PointingHandCursor));
        shutBox->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"alternate-background-color: rgb(66, 66, 66);\n"
"background-color: rgba(70, 70, 70, 70);\n"
"gridline-color: rgb(0, 0, 0);\n"
"selection-color: rgb(255, 170, 0);\n"
"selection-background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        shutBox->setChecked(true);
        duplexCombo = new QComboBox(Interface);
        duplexCombo->setObjectName(QStringLiteral("duplexCombo"));
        duplexCombo->setGeometry(QRect(100, 140, 101, 24));
        duplexCombo->setCursor(QCursor(Qt::PointingHandCursor));
        duplexCombo->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        label_4 = new QLabel(Interface);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 140, 55, 16));
        label_4->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_5 = new QLabel(Interface);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 180, 55, 16));
        label_5->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        speedCombo = new QComboBox(Interface);
        speedCombo->setObjectName(QStringLiteral("speedCombo"));
        speedCombo->setGeometry(QRect(100, 180, 101, 24));
        speedCombo->setCursor(QCursor(Qt::PointingHandCursor));
        speedCombo->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        clearBtn = new QPushButton(Interface);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));
        clearBtn->setGeometry(QRect(120, 260, 80, 25));
        clearBtn->setCursor(QCursor(Qt::PointingHandCursor));
        clearBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        label_6 = new QLabel(Interface);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 220, 71, 16));
        label_6->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        descripBox = new QLineEdit(Interface);
        descripBox->setObjectName(QStringLiteral("descripBox"));
        descripBox->setGeometry(QRect(100, 220, 111, 24));
        descripBox->setStyleSheet(QStringLiteral("color: rgb(0, 170, 255);"));
        clockCombo = new QComboBox(Interface);
        clockCombo->setObjectName(QStringLiteral("clockCombo"));
        clockCombo->setGeometry(QRect(250, 180, 101, 24));
        clockCombo->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        clockCheck = new QCheckBox(Interface);
        clockCheck->setObjectName(QStringLiteral("clockCheck"));
        clockCheck->setGeometry(QRect(250, 140, 83, 22));
        clockCheck->setCursor(QCursor(Qt::PointingHandCursor));
        clockCheck->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"alternate-background-color: rgb(66, 66, 66);\n"
"background-color: rgba(70, 70, 70, 70);\n"
"gridline-color: rgb(0, 0, 0);\n"
"selection-color: rgb(255, 170, 0);\n"
"selection-background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        clockCheck->setChecked(false);
        QWidget::setTabOrder(interfaceBox, ipBox1);
        QWidget::setTabOrder(ipBox1, ipBox2);
        QWidget::setTabOrder(ipBox2, ipBox3);
        QWidget::setTabOrder(ipBox3, ipBox4);
        QWidget::setTabOrder(ipBox4, subBox1);
        QWidget::setTabOrder(subBox1, subBox2);
        QWidget::setTabOrder(subBox2, subBox3);
        QWidget::setTabOrder(subBox3, subBox4);
        QWidget::setTabOrder(subBox4, shutBox);
        QWidget::setTabOrder(shutBox, duplexCombo);
        QWidget::setTabOrder(duplexCombo, speedCombo);
        QWidget::setTabOrder(speedCombo, clockCheck);
        QWidget::setTabOrder(clockCheck, clockCombo);
        QWidget::setTabOrder(clockCombo, descripBox);
        QWidget::setTabOrder(descripBox, clearBtn);
        QWidget::setTabOrder(clearBtn, configBtn);
        QWidget::setTabOrder(configBtn, exitBtn);

        retranslateUi(Interface);

        QMetaObject::connectSlotsByName(Interface);
    } // setupUi

    void retranslateUi(QWidget *Interface)
    {
        Interface->setWindowTitle(QApplication::translate("Interface", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Interface", "Interface", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("Interface", "Done", Q_NULLPTR));
        configBtn->setText(QApplication::translate("Interface", "Configure", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        configBtn->setShortcut(QApplication::translate("Interface", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label_2->setText(QApplication::translate("Interface", "Ip Address", Q_NULLPTR));
        label_3->setText(QApplication::translate("Interface", "Subnet", Q_NULLPTR));
        shutBox->setText(QApplication::translate("Interface", "Shutdown", Q_NULLPTR));
        duplexCombo->clear();
        duplexCombo->insertItems(0, QStringList()
         << QApplication::translate("Interface", "Auto Duplex", Q_NULLPTR)
         << QApplication::translate("Interface", "Half Duplex", Q_NULLPTR)
         << QApplication::translate("Interface", "Full Duplex", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("Interface", "Duplex", Q_NULLPTR));
        label_5->setText(QApplication::translate("Interface", "Speed", Q_NULLPTR));
        speedCombo->clear();
        speedCombo->insertItems(0, QStringList()
         << QApplication::translate("Interface", "Auto", Q_NULLPTR)
         << QApplication::translate("Interface", "10", Q_NULLPTR)
         << QApplication::translate("Interface", "100", Q_NULLPTR)
         << QApplication::translate("Interface", "1000", Q_NULLPTR)
        );
        clearBtn->setText(QApplication::translate("Interface", "Clear", Q_NULLPTR));
        label_6->setText(QApplication::translate("Interface", "Description", Q_NULLPTR));
        clockCombo->clear();
        clockCombo->insertItems(0, QStringList()
         << QApplication::translate("Interface", "1200", Q_NULLPTR)
         << QApplication::translate("Interface", "2400", Q_NULLPTR)
         << QApplication::translate("Interface", "4800", Q_NULLPTR)
         << QApplication::translate("Interface", "9600", Q_NULLPTR)
         << QApplication::translate("Interface", "19200", Q_NULLPTR)
         << QApplication::translate("Interface", "38400 ", Q_NULLPTR)
         << QApplication::translate("Interface", "56000 ", Q_NULLPTR)
         << QApplication::translate("Interface", "64000 ", Q_NULLPTR)
         << QApplication::translate("Interface", "72000", Q_NULLPTR)
         << QApplication::translate("Interface", "125000  ", Q_NULLPTR)
         << QApplication::translate("Interface", "128000   ", Q_NULLPTR)
         << QApplication::translate("Interface", "148000", Q_NULLPTR)
         << QApplication::translate("Interface", "250000   ", Q_NULLPTR)
         << QApplication::translate("Interface", "500000  ", Q_NULLPTR)
         << QApplication::translate("Interface", "800000   ", Q_NULLPTR)
         << QApplication::translate("Interface", "1000000  ", Q_NULLPTR)
         << QApplication::translate("Interface", "1300000   ", Q_NULLPTR)
         << QApplication::translate("Interface", "2000000  ", Q_NULLPTR)
         << QApplication::translate("Interface", "4000000", Q_NULLPTR)
        );
        clockCheck->setText(QApplication::translate("Interface", "Clock Rate", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Interface: public Ui_Interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
