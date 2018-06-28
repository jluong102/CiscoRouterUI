/********************************************************************************
** Form generated from reading UI file 'acl.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACL_H
#define UI_ACL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Acl
{
public:
    QPushButton *configBtn;
    QPushButton *clearBtn;
    QPushButton *exitBtn;
    QLabel *label;
    QLineEdit *aclBox;
    QLineEdit *ipBox1;
    QLineEdit *wildBox3;
    QLineEdit *ipBox2;
    QLineEdit *ipBox4;
    QLineEdit *wildBox1;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *wildBox2;
    QLineEdit *wildBox4;
    QLineEdit *ipBox3;
    QRadioButton *permitCheck;
    QRadioButton *denyCheck;
    QCheckBox *hostCheck;
    QCheckBox *anyCheck;
    QCheckBox *disableCheck;

    void setupUi(QWidget *Acl)
    {
        if (Acl->objectName().isEmpty())
            Acl->setObjectName(QStringLiteral("Acl"));
        Acl->resize(400, 300);
        Acl->setStyleSheet(QLatin1String("gridline-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 170, 255);\n"
"selection-background-color: rgb(66, 66, 66);\n"
"background-color: rgb(70, 70, 70);\n"
"alternate-background-color: rgb(0, 0, 0);"));
        configBtn = new QPushButton(Acl);
        configBtn->setObjectName(QStringLiteral("configBtn"));
        configBtn->setGeometry(QRect(220, 270, 80, 25));
        configBtn->setCursor(QCursor(Qt::PointingHandCursor));
        configBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        clearBtn = new QPushButton(Acl);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));
        clearBtn->setGeometry(QRect(130, 270, 80, 25));
        clearBtn->setCursor(QCursor(Qt::PointingHandCursor));
        clearBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        exitBtn = new QPushButton(Acl);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(310, 270, 80, 25));
        exitBtn->setCursor(QCursor(Qt::PointingHandCursor));
        exitBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        label = new QLabel(Acl);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 71, 20));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        aclBox = new QLineEdit(Acl);
        aclBox->setObjectName(QStringLiteral("aclBox"));
        aclBox->setGeometry(QRect(100, 20, 51, 24));
        aclBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        ipBox1 = new QLineEdit(Acl);
        ipBox1->setObjectName(QStringLiteral("ipBox1"));
        ipBox1->setGeometry(QRect(100, 80, 31, 24));
        ipBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        wildBox3 = new QLineEdit(Acl);
        wildBox3->setObjectName(QStringLiteral("wildBox3"));
        wildBox3->setGeometry(QRect(180, 120, 31, 24));
        wildBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        ipBox2 = new QLineEdit(Acl);
        ipBox2->setObjectName(QStringLiteral("ipBox2"));
        ipBox2->setGeometry(QRect(140, 80, 31, 24));
        ipBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        ipBox4 = new QLineEdit(Acl);
        ipBox4->setObjectName(QStringLiteral("ipBox4"));
        ipBox4->setGeometry(QRect(220, 80, 31, 24));
        ipBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        wildBox1 = new QLineEdit(Acl);
        wildBox1->setObjectName(QStringLiteral("wildBox1"));
        wildBox1->setGeometry(QRect(100, 120, 31, 24));
        wildBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_4 = new QLabel(Acl);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(32, 82, 61, 16));
        label_4->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        label_5 = new QLabel(Acl);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(32, 122, 61, 16));
        label_5->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        wildBox2 = new QLineEdit(Acl);
        wildBox2->setObjectName(QStringLiteral("wildBox2"));
        wildBox2->setGeometry(QRect(140, 120, 31, 24));
        wildBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        wildBox4 = new QLineEdit(Acl);
        wildBox4->setObjectName(QStringLiteral("wildBox4"));
        wildBox4->setGeometry(QRect(220, 120, 31, 24));
        wildBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        ipBox3 = new QLineEdit(Acl);
        ipBox3->setObjectName(QStringLiteral("ipBox3"));
        ipBox3->setGeometry(QRect(180, 80, 31, 24));
        ipBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        permitCheck = new QRadioButton(Acl);
        permitCheck->setObjectName(QStringLiteral("permitCheck"));
        permitCheck->setGeometry(QRect(80, 50, 61, 22));
        permitCheck->setCursor(QCursor(Qt::PointingHandCursor));
        permitCheck->setLayoutDirection(Qt::RightToLeft);
        permitCheck->setStyleSheet(QLatin1String("color :rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);\n"
"alternate-background-color: rgb(66, 66, 66);\n"
"selection-color: rgb(0, 170, 255);"));
        permitCheck->setChecked(true);
        denyCheck = new QRadioButton(Acl);
        denyCheck->setObjectName(QStringLiteral("denyCheck"));
        denyCheck->setGeometry(QRect(150, 50, 61, 22));
        denyCheck->setCursor(QCursor(Qt::PointingHandCursor));
        denyCheck->setLayoutDirection(Qt::RightToLeft);
        denyCheck->setStyleSheet(QLatin1String("color :rgb(0, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(66, 66, 66);\n"
"alternate-background-color: rgb(66, 66, 66);\n"
"selection-color: rgb(0, 170, 255);"));
        denyCheck->setChecked(false);
        hostCheck = new QCheckBox(Acl);
        hostCheck->setObjectName(QStringLiteral("hostCheck"));
        hostCheck->setGeometry(QRect(270, 80, 85, 22));
        hostCheck->setCursor(QCursor(Qt::PointingHandCursor));
        hostCheck->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        anyCheck = new QCheckBox(Acl);
        anyCheck->setObjectName(QStringLiteral("anyCheck"));
        anyCheck->setGeometry(QRect(270, 120, 85, 22));
        anyCheck->setCursor(QCursor(Qt::PointingHandCursor));
        anyCheck->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        disableCheck = new QCheckBox(Acl);
        disableCheck->setObjectName(QStringLiteral("disableCheck"));
        disableCheck->setGeometry(QRect(170, 20, 85, 22));
        disableCheck->setCursor(QCursor(Qt::PointingHandCursor));
        disableCheck->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        QWidget::setTabOrder(aclBox, disableCheck);
        QWidget::setTabOrder(disableCheck, permitCheck);
        QWidget::setTabOrder(permitCheck, denyCheck);
        QWidget::setTabOrder(denyCheck, ipBox1);
        QWidget::setTabOrder(ipBox1, ipBox2);
        QWidget::setTabOrder(ipBox2, ipBox3);
        QWidget::setTabOrder(ipBox3, ipBox4);
        QWidget::setTabOrder(ipBox4, wildBox1);
        QWidget::setTabOrder(wildBox1, wildBox2);
        QWidget::setTabOrder(wildBox2, wildBox3);
        QWidget::setTabOrder(wildBox3, wildBox4);
        QWidget::setTabOrder(wildBox4, hostCheck);
        QWidget::setTabOrder(hostCheck, anyCheck);
        QWidget::setTabOrder(anyCheck, clearBtn);
        QWidget::setTabOrder(clearBtn, configBtn);
        QWidget::setTabOrder(configBtn, exitBtn);

        retranslateUi(Acl);

        QMetaObject::connectSlotsByName(Acl);
    } // setupUi

    void retranslateUi(QWidget *Acl)
    {
        Acl->setWindowTitle(QApplication::translate("Acl", "Form", Q_NULLPTR));
        configBtn->setText(QApplication::translate("Acl", "Configure", Q_NULLPTR));
        clearBtn->setText(QApplication::translate("Acl", "Clear", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("Acl", "Done", Q_NULLPTR));
        label->setText(QApplication::translate("Acl", "ACL Number", Q_NULLPTR));
        aclBox->setText(QString());
        label_4->setText(QApplication::translate("Acl", "Source", Q_NULLPTR));
        label_5->setText(QApplication::translate("Acl", "Wildcard", Q_NULLPTR));
        permitCheck->setText(QApplication::translate("Acl", "Permit", Q_NULLPTR));
        denyCheck->setText(QApplication::translate("Acl", "Deny", Q_NULLPTR));
        hostCheck->setText(QApplication::translate("Acl", "Host", Q_NULLPTR));
        anyCheck->setText(QApplication::translate("Acl", "Any", Q_NULLPTR));
        disableCheck->setText(QApplication::translate("Acl", "Disable", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Acl: public Ui_Acl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACL_H
