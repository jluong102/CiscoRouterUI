/********************************************************************************
** Form generated from reading UI file 'setup.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUP_H
#define UI_SETUP_H

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

class Ui_Setup
{
public:
    QLabel *label;
    QLineEdit *hostBox;
    QLineEdit *pwBox;
    QLabel *label_2;
    QCheckBox *secretCheck;
    QPushButton *exitBtn;
    QPushButton *configBtn;
    QPushButton *clearBtn;
    QLabel *label_3;
    QLineEdit *ipBox1;
    QLineEdit *ipBox2;
    QLineEdit *ipBox3;
    QLineEdit *ipBox4;
    QLabel *label_4;
    QLineEdit *motdBox;
    QLineEdit *loginBox;
    QLabel *label_5;
    QCheckBox *domainCheck;
    QCheckBox *encryptCheck;

    void setupUi(QWidget *Setup)
    {
        if (Setup->objectName().isEmpty())
            Setup->setObjectName(QStringLiteral("Setup"));
        Setup->resize(400, 300);
        Setup->setStyleSheet(QLatin1String("gridline-color: rgb(0, 0, 0);\n"
"background-color: rgb(70, 70, 70);\n"
""));
        label = new QLabel(Setup);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 61, 16));
        label->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        hostBox = new QLineEdit(Setup);
        hostBox->setObjectName(QStringLiteral("hostBox"));
        hostBox->setGeometry(QRect(90, 20, 113, 24));
        hostBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"gridline-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        pwBox = new QLineEdit(Setup);
        pwBox->setObjectName(QStringLiteral("pwBox"));
        pwBox->setGeometry(QRect(90, 60, 113, 24));
        pwBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"gridline-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        label_2 = new QLabel(Setup);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 61, 16));
        label_2->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        secretCheck = new QCheckBox(Setup);
        secretCheck->setObjectName(QStringLiteral("secretCheck"));
        secretCheck->setGeometry(QRect(230, 60, 131, 22));
        secretCheck->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgba(70, 70, 70, 70);\n"
"border-color: rgb(0, 0, 0);"));
        secretCheck->setChecked(true);
        exitBtn = new QPushButton(Setup);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(300, 260, 80, 25));
        exitBtn->setCursor(QCursor(Qt::PointingHandCursor));
        exitBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        configBtn = new QPushButton(Setup);
        configBtn->setObjectName(QStringLiteral("configBtn"));
        configBtn->setGeometry(QRect(210, 260, 80, 25));
        configBtn->setCursor(QCursor(Qt::PointingHandCursor));
        configBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        clearBtn = new QPushButton(Setup);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));
        clearBtn->setGeometry(QRect(120, 260, 80, 25));
        clearBtn->setCursor(QCursor(Qt::PointingHandCursor));
        clearBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        label_3 = new QLabel(Setup);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 101, 16));
        label_3->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        ipBox1 = new QLineEdit(Setup);
        ipBox1->setObjectName(QStringLiteral("ipBox1"));
        ipBox1->setGeometry(QRect(130, 100, 41, 24));
        ipBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"gridline-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        ipBox2 = new QLineEdit(Setup);
        ipBox2->setObjectName(QStringLiteral("ipBox2"));
        ipBox2->setGeometry(QRect(180, 100, 41, 24));
        ipBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"gridline-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        ipBox3 = new QLineEdit(Setup);
        ipBox3->setObjectName(QStringLiteral("ipBox3"));
        ipBox3->setGeometry(QRect(230, 100, 41, 24));
        ipBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"gridline-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        ipBox4 = new QLineEdit(Setup);
        ipBox4->setObjectName(QStringLiteral("ipBox4"));
        ipBox4->setGeometry(QRect(280, 100, 41, 24));
        ipBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"gridline-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        label_4 = new QLabel(Setup);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 140, 91, 16));
        label_4->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        motdBox = new QLineEdit(Setup);
        motdBox->setObjectName(QStringLiteral("motdBox"));
        motdBox->setGeometry(QRect(120, 140, 113, 24));
        motdBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"gridline-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        loginBox = new QLineEdit(Setup);
        loginBox->setObjectName(QStringLiteral("loginBox"));
        loginBox->setGeometry(QRect(120, 180, 113, 24));
        loginBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"gridline-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        label_5 = new QLabel(Setup);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 180, 81, 16));
        label_5->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        domainCheck = new QCheckBox(Setup);
        domainCheck->setObjectName(QStringLiteral("domainCheck"));
        domainCheck->setGeometry(QRect(230, 20, 131, 22));
        domainCheck->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgba(70, 70, 70, 70);\n"
"border-color: rgb(0, 0, 0);"));
        domainCheck->setChecked(true);
        encryptCheck = new QCheckBox(Setup);
        encryptCheck->setObjectName(QStringLiteral("encryptCheck"));
        encryptCheck->setGeometry(QRect(240, 140, 131, 22));
        encryptCheck->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgba(70, 70, 70, 70);\n"
"border-color: rgb(0, 0, 0);"));
        encryptCheck->setChecked(true);
        QWidget::setTabOrder(hostBox, domainCheck);
        QWidget::setTabOrder(domainCheck, pwBox);
        QWidget::setTabOrder(pwBox, secretCheck);
        QWidget::setTabOrder(secretCheck, ipBox1);
        QWidget::setTabOrder(ipBox1, ipBox2);
        QWidget::setTabOrder(ipBox2, ipBox3);
        QWidget::setTabOrder(ipBox3, ipBox4);
        QWidget::setTabOrder(ipBox4, motdBox);
        QWidget::setTabOrder(motdBox, loginBox);
        QWidget::setTabOrder(loginBox, clearBtn);
        QWidget::setTabOrder(clearBtn, configBtn);
        QWidget::setTabOrder(configBtn, exitBtn);

        retranslateUi(Setup);

        QMetaObject::connectSlotsByName(Setup);
    } // setupUi

    void retranslateUi(QWidget *Setup)
    {
        Setup->setWindowTitle(QApplication::translate("Setup", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Setup", "Hostname", Q_NULLPTR));
        label_2->setText(QApplication::translate("Setup", "Password", Q_NULLPTR));
        secretCheck->setText(QApplication::translate("Setup", "Secret Password", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("Setup", "Done", Q_NULLPTR));
        configBtn->setText(QApplication::translate("Setup", "Configure", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        configBtn->setShortcut(QApplication::translate("Setup", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        clearBtn->setText(QApplication::translate("Setup", "Clear", Q_NULLPTR));
        label_3->setText(QApplication::translate("Setup", "Default Gateway", Q_NULLPTR));
        label_4->setText(QApplication::translate("Setup", "Banner MOTD", Q_NULLPTR));
        label_5->setText(QApplication::translate("Setup", "Banner Login", Q_NULLPTR));
        domainCheck->setText(QApplication::translate("Setup", "Ip Domain Lookup", Q_NULLPTR));
        encryptCheck->setText(QApplication::translate("Setup", "Encrypt Password", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Setup: public Ui_Setup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUP_H
