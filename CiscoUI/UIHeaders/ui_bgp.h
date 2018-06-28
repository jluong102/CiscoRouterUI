/********************************************************************************
** Form generated from reading UI file 'bgp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BGP_H
#define UI_BGP_H

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

class Ui_Bgp
{
public:
    QPushButton *exitBtn;
    QPushButton *configBtn;
    QPushButton *clearBtn;
    QLineEdit *routeProcBox;
    QLabel *label;
    QLineEdit *neighborBox1;
    QLabel *label_2;
    QLineEdit *neighborBox2;
    QLineEdit *neighborBox4;
    QLineEdit *neighborBox3;
    QLabel *label_3;
    QLineEdit *asNumBox;
    QLineEdit *netBox3;
    QLineEdit *netBox1;
    QLabel *label_4;
    QLineEdit *netBox4;
    QLineEdit *netBox2;
    QLineEdit *maskBox2;
    QLineEdit *maskBox3;
    QLabel *label_5;
    QLineEdit *maskBox1;
    QLineEdit *maskBox4;
    QCheckBox *disableCheck;
    QLineEdit *loopBox;
    QLabel *label_6;

    void setupUi(QWidget *Bgp)
    {
        if (Bgp->objectName().isEmpty())
            Bgp->setObjectName(QStringLiteral("Bgp"));
        Bgp->resize(400, 300);
        Bgp->setStyleSheet(QLatin1String("gridline-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 170, 255);\n"
"selection-background-color: rgb(66, 66, 66);\n"
"background-color: rgb(70, 70, 70);\n"
"alternate-background-color: rgb(0, 0, 0);"));
        exitBtn = new QPushButton(Bgp);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(310, 260, 80, 25));
        exitBtn->setCursor(QCursor(Qt::PointingHandCursor));
        exitBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        configBtn = new QPushButton(Bgp);
        configBtn->setObjectName(QStringLiteral("configBtn"));
        configBtn->setGeometry(QRect(220, 260, 80, 25));
        configBtn->setCursor(QCursor(Qt::PointingHandCursor));
        configBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        clearBtn = new QPushButton(Bgp);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));
        clearBtn->setGeometry(QRect(130, 260, 80, 25));
        clearBtn->setCursor(QCursor(Qt::PointingHandCursor));
        clearBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        routeProcBox = new QLineEdit(Bgp);
        routeProcBox->setObjectName(QStringLiteral("routeProcBox"));
        routeProcBox->setGeometry(QRect(108, 10, 71, 24));
        routeProcBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label = new QLabel(Bgp);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 91, 16));
        label->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        neighborBox1 = new QLineEdit(Bgp);
        neighborBox1->setObjectName(QStringLiteral("neighborBox1"));
        neighborBox1->setGeometry(QRect(112, 50, 31, 24));
        neighborBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_2 = new QLabel(Bgp);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(44, 52, 61, 16));
        label_2->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        neighborBox2 = new QLineEdit(Bgp);
        neighborBox2->setObjectName(QStringLiteral("neighborBox2"));
        neighborBox2->setGeometry(QRect(150, 50, 31, 24));
        neighborBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        neighborBox4 = new QLineEdit(Bgp);
        neighborBox4->setObjectName(QStringLiteral("neighborBox4"));
        neighborBox4->setGeometry(QRect(230, 50, 31, 24));
        neighborBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        neighborBox3 = new QLineEdit(Bgp);
        neighborBox3->setObjectName(QStringLiteral("neighborBox3"));
        neighborBox3->setGeometry(QRect(190, 50, 31, 24));
        neighborBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_3 = new QLabel(Bgp);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(32, 90, 71, 20));
        label_3->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        asNumBox = new QLineEdit(Bgp);
        asNumBox->setObjectName(QStringLiteral("asNumBox"));
        asNumBox->setGeometry(QRect(110, 88, 61, 24));
        asNumBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        netBox3 = new QLineEdit(Bgp);
        netBox3->setObjectName(QStringLiteral("netBox3"));
        netBox3->setGeometry(QRect(190, 130, 31, 24));
        netBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        netBox1 = new QLineEdit(Bgp);
        netBox1->setObjectName(QStringLiteral("netBox1"));
        netBox1->setGeometry(QRect(110, 130, 31, 24));
        netBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_4 = new QLabel(Bgp);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(42, 132, 61, 16));
        label_4->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        netBox4 = new QLineEdit(Bgp);
        netBox4->setObjectName(QStringLiteral("netBox4"));
        netBox4->setGeometry(QRect(230, 130, 31, 24));
        netBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        netBox2 = new QLineEdit(Bgp);
        netBox2->setObjectName(QStringLiteral("netBox2"));
        netBox2->setGeometry(QRect(150, 130, 31, 24));
        netBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        maskBox2 = new QLineEdit(Bgp);
        maskBox2->setObjectName(QStringLiteral("maskBox2"));
        maskBox2->setGeometry(QRect(150, 170, 31, 24));
        maskBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        maskBox3 = new QLineEdit(Bgp);
        maskBox3->setObjectName(QStringLiteral("maskBox3"));
        maskBox3->setGeometry(QRect(190, 170, 31, 24));
        maskBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_5 = new QLabel(Bgp);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 170, 51, 20));
        label_5->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        maskBox1 = new QLineEdit(Bgp);
        maskBox1->setObjectName(QStringLiteral("maskBox1"));
        maskBox1->setGeometry(QRect(110, 170, 31, 24));
        maskBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        maskBox4 = new QLineEdit(Bgp);
        maskBox4->setObjectName(QStringLiteral("maskBox4"));
        maskBox4->setGeometry(QRect(230, 170, 31, 24));
        maskBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        disableCheck = new QCheckBox(Bgp);
        disableCheck->setObjectName(QStringLiteral("disableCheck"));
        disableCheck->setGeometry(QRect(200, 10, 85, 22));
        disableCheck->setCursor(QCursor(Qt::PointingHandCursor));
        disableCheck->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        loopBox = new QLineEdit(Bgp);
        loopBox->setObjectName(QStringLiteral("loopBox"));
        loopBox->setGeometry(QRect(110, 210, 91, 24));
        loopBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_6 = new QLabel(Bgp);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(32, 212, 71, 20));
        label_6->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        QWidget::setTabOrder(routeProcBox, disableCheck);
        QWidget::setTabOrder(disableCheck, neighborBox1);
        QWidget::setTabOrder(neighborBox1, neighborBox2);
        QWidget::setTabOrder(neighborBox2, neighborBox3);
        QWidget::setTabOrder(neighborBox3, neighborBox4);
        QWidget::setTabOrder(neighborBox4, asNumBox);
        QWidget::setTabOrder(asNumBox, netBox1);
        QWidget::setTabOrder(netBox1, netBox2);
        QWidget::setTabOrder(netBox2, netBox3);
        QWidget::setTabOrder(netBox3, netBox4);
        QWidget::setTabOrder(netBox4, maskBox1);
        QWidget::setTabOrder(maskBox1, maskBox2);
        QWidget::setTabOrder(maskBox2, maskBox3);
        QWidget::setTabOrder(maskBox3, maskBox4);
        QWidget::setTabOrder(maskBox4, loopBox);
        QWidget::setTabOrder(loopBox, clearBtn);
        QWidget::setTabOrder(clearBtn, configBtn);
        QWidget::setTabOrder(configBtn, exitBtn);

        retranslateUi(Bgp);

        QMetaObject::connectSlotsByName(Bgp);
    } // setupUi

    void retranslateUi(QWidget *Bgp)
    {
        Bgp->setWindowTitle(QApplication::translate("Bgp", "Form", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("Bgp", "Done", Q_NULLPTR));
        configBtn->setText(QApplication::translate("Bgp", "Configure", Q_NULLPTR));
        clearBtn->setText(QApplication::translate("Bgp", "Clear", Q_NULLPTR));
        label->setText(QApplication::translate("Bgp", "Routing Process", Q_NULLPTR));
        label_2->setText(QApplication::translate("Bgp", "Neighbor", Q_NULLPTR));
        label_3->setText(QApplication::translate("Bgp", "AS Number", Q_NULLPTR));
        label_4->setText(QApplication::translate("Bgp", "Network", Q_NULLPTR));
        label_5->setText(QApplication::translate("Bgp", "Mask", Q_NULLPTR));
        disableCheck->setText(QApplication::translate("Bgp", "Disable", Q_NULLPTR));
        label_6->setText(QApplication::translate("Bgp", "Loopback", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Bgp: public Ui_Bgp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BGP_H
