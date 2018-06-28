/********************************************************************************
** Form generated from reading UI file 'nat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAT_H
#define UI_NAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Nat
{
public:
    QLineEdit *nameBox;
    QLabel *label;
    QLineEdit *startBox2;
    QLineEdit *startBox1;
    QLabel *label_4;
    QLineEdit *startBox4;
    QLineEdit *startBox3;
    QLineEdit *endBox3;
    QLabel *label_5;
    QLineEdit *endBox2;
    QLineEdit *endBox1;
    QLineEdit *endBox4;
    QLineEdit *subBox4;
    QLineEdit *subBox3;
    QLineEdit *subBox1;
    QLabel *label_6;
    QLineEdit *subBox2;
    QPushButton *exitBtn;
    QPushButton *clearBtn;
    QPushButton *configBtn;
    QLabel *label_2;
    QLineEdit *aclBox;

    void setupUi(QWidget *Nat)
    {
        if (Nat->objectName().isEmpty())
            Nat->setObjectName(QStringLiteral("Nat"));
        Nat->resize(400, 300);
        Nat->setStyleSheet(QLatin1String("gridline-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 170, 255);\n"
"selection-background-color: rgb(66, 66, 66);\n"
"background-color: rgb(70, 70, 70);\n"
"alternate-background-color: rgb(0, 0, 0);"));
        nameBox = new QLineEdit(Nat);
        nameBox->setObjectName(QStringLiteral("nameBox"));
        nameBox->setGeometry(QRect(90, 20, 71, 24));
        nameBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label = new QLabel(Nat);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 51, 16));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        startBox2 = new QLineEdit(Nat);
        startBox2->setObjectName(QStringLiteral("startBox2"));
        startBox2->setGeometry(QRect(130, 60, 31, 24));
        startBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        startBox1 = new QLineEdit(Nat);
        startBox1->setObjectName(QStringLiteral("startBox1"));
        startBox1->setGeometry(QRect(90, 60, 31, 24));
        startBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_4 = new QLabel(Nat);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(22, 62, 61, 16));
        label_4->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        startBox4 = new QLineEdit(Nat);
        startBox4->setObjectName(QStringLiteral("startBox4"));
        startBox4->setGeometry(QRect(210, 60, 31, 24));
        startBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        startBox3 = new QLineEdit(Nat);
        startBox3->setObjectName(QStringLiteral("startBox3"));
        startBox3->setGeometry(QRect(170, 60, 31, 24));
        startBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        endBox3 = new QLineEdit(Nat);
        endBox3->setObjectName(QStringLiteral("endBox3"));
        endBox3->setGeometry(QRect(170, 100, 31, 24));
        endBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_5 = new QLabel(Nat);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(22, 102, 61, 16));
        label_5->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        endBox2 = new QLineEdit(Nat);
        endBox2->setObjectName(QStringLiteral("endBox2"));
        endBox2->setGeometry(QRect(130, 100, 31, 24));
        endBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        endBox1 = new QLineEdit(Nat);
        endBox1->setObjectName(QStringLiteral("endBox1"));
        endBox1->setGeometry(QRect(90, 100, 31, 24));
        endBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        endBox4 = new QLineEdit(Nat);
        endBox4->setObjectName(QStringLiteral("endBox4"));
        endBox4->setGeometry(QRect(210, 100, 31, 24));
        endBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        subBox4 = new QLineEdit(Nat);
        subBox4->setObjectName(QStringLiteral("subBox4"));
        subBox4->setGeometry(QRect(210, 140, 31, 24));
        subBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        subBox3 = new QLineEdit(Nat);
        subBox3->setObjectName(QStringLiteral("subBox3"));
        subBox3->setGeometry(QRect(170, 140, 31, 24));
        subBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        subBox1 = new QLineEdit(Nat);
        subBox1->setObjectName(QStringLiteral("subBox1"));
        subBox1->setGeometry(QRect(90, 140, 31, 24));
        subBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_6 = new QLabel(Nat);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(22, 142, 61, 16));
        label_6->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        subBox2 = new QLineEdit(Nat);
        subBox2->setObjectName(QStringLiteral("subBox2"));
        subBox2->setGeometry(QRect(130, 140, 31, 24));
        subBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        exitBtn = new QPushButton(Nat);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(310, 260, 80, 25));
        exitBtn->setCursor(QCursor(Qt::PointingHandCursor));
        exitBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        clearBtn = new QPushButton(Nat);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));
        clearBtn->setGeometry(QRect(130, 260, 80, 25));
        clearBtn->setCursor(QCursor(Qt::PointingHandCursor));
        clearBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        configBtn = new QPushButton(Nat);
        configBtn->setObjectName(QStringLiteral("configBtn"));
        configBtn->setGeometry(QRect(220, 260, 80, 25));
        configBtn->setCursor(QCursor(Qt::PointingHandCursor));
        configBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        label_2 = new QLabel(Nat);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 180, 51, 16));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        aclBox = new QLineEdit(Nat);
        aclBox->setObjectName(QStringLiteral("aclBox"));
        aclBox->setGeometry(QRect(90, 180, 41, 24));
        aclBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        QWidget::setTabOrder(nameBox, startBox1);
        QWidget::setTabOrder(startBox1, startBox2);
        QWidget::setTabOrder(startBox2, startBox3);
        QWidget::setTabOrder(startBox3, startBox4);
        QWidget::setTabOrder(startBox4, endBox1);
        QWidget::setTabOrder(endBox1, endBox2);
        QWidget::setTabOrder(endBox2, endBox3);
        QWidget::setTabOrder(endBox3, endBox4);
        QWidget::setTabOrder(endBox4, subBox1);
        QWidget::setTabOrder(subBox1, subBox2);
        QWidget::setTabOrder(subBox2, subBox3);
        QWidget::setTabOrder(subBox3, subBox4);
        QWidget::setTabOrder(subBox4, aclBox);
        QWidget::setTabOrder(aclBox, clearBtn);
        QWidget::setTabOrder(clearBtn, configBtn);
        QWidget::setTabOrder(configBtn, exitBtn);

        retranslateUi(Nat);

        QMetaObject::connectSlotsByName(Nat);
    } // setupUi

    void retranslateUi(QWidget *Nat)
    {
        Nat->setWindowTitle(QApplication::translate("Nat", "Form", Q_NULLPTR));
        nameBox->setText(QString());
        label->setText(QApplication::translate("Nat", "Name", Q_NULLPTR));
        label_4->setText(QApplication::translate("Nat", "Start", Q_NULLPTR));
        label_5->setText(QApplication::translate("Nat", "End", Q_NULLPTR));
        label_6->setText(QApplication::translate("Nat", "Netmask", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("Nat", "Done", Q_NULLPTR));
        clearBtn->setText(QApplication::translate("Nat", "Clear", Q_NULLPTR));
        configBtn->setText(QApplication::translate("Nat", "Configure", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        configBtn->setShortcut(QApplication::translate("Nat", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label_2->setText(QApplication::translate("Nat", "Link ACL", Q_NULLPTR));
        aclBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Nat: public Ui_Nat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAT_H
