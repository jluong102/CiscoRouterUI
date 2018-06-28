/********************************************************************************
** Form generated from reading UI file 'ospf.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSPF_H
#define UI_OSPF_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ospf
{
public:
    QLabel *label;
    QLineEdit *procIdBox;
    QLineEdit *netBox1;
    QLabel *label_2;
    QLineEdit *netBox2;
    QLineEdit *netBox3;
    QLineEdit *netBox4;
    QLineEdit *wildBox4;
    QLineEdit *wildBox1;
    QLineEdit *wildBox3;
    QLabel *label_3;
    QLineEdit *wildBox2;
    QLineEdit *areaBox;
    QLabel *label_4;
    QLineEdit *idBox4;
    QLineEdit *idBox2;
    QLineEdit *idBox3;
    QLineEdit *idBox1;
    QLabel *label_5;
    QCheckBox *removeIdCheck;
    QPushButton *exitBtn;
    QPushButton *configBtn;
    QPushButton *clearBtn;
    QGroupBox *groupBox;
    QLabel *label_6;
    QLineEdit *interfaceBox;
    QCheckBox *defaultPassCheck;
    QPushButton *removePassBtn;
    QPushButton *addPassBtn;
    QCheckBox *logCheck;
    QLineEdit *bandwidthBox;
    QLabel *label_7;
    QCheckBox *propCheck;
    QCheckBox *alwaysCheck;
    QCheckBox *disableCheck;

    void setupUi(QWidget *Ospf)
    {
        if (Ospf->objectName().isEmpty())
            Ospf->setObjectName(QStringLiteral("Ospf"));
        Ospf->resize(509, 352);
        Ospf->setStyleSheet(QLatin1String("gridline-color: rgb(0, 0, 0);\n"
"background-color: rgb(70, 70, 70);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 85, 255);\n"
"selection-background-color: rgb(0, 0, 127);"));
        label = new QLabel(Ospf);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 61, 16));
        label->setStyleSheet(QLatin1String("color :rgb(0, 170, 255)\n"
""));
        procIdBox = new QLineEdit(Ospf);
        procIdBox->setObjectName(QStringLiteral("procIdBox"));
        procIdBox->setGeometry(QRect(90, 20, 71, 24));
        procIdBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        netBox1 = new QLineEdit(Ospf);
        netBox1->setObjectName(QStringLiteral("netBox1"));
        netBox1->setGeometry(QRect(90, 60, 31, 24));
        netBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        label_2 = new QLabel(Ospf);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 61, 16));
        label_2->setStyleSheet(QLatin1String("color :rgb(0, 170, 255)\n"
""));
        netBox2 = new QLineEdit(Ospf);
        netBox2->setObjectName(QStringLiteral("netBox2"));
        netBox2->setGeometry(QRect(130, 60, 31, 24));
        netBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        netBox3 = new QLineEdit(Ospf);
        netBox3->setObjectName(QStringLiteral("netBox3"));
        netBox3->setGeometry(QRect(170, 60, 31, 24));
        netBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        netBox4 = new QLineEdit(Ospf);
        netBox4->setObjectName(QStringLiteral("netBox4"));
        netBox4->setGeometry(QRect(210, 60, 31, 24));
        netBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        wildBox4 = new QLineEdit(Ospf);
        wildBox4->setObjectName(QStringLiteral("wildBox4"));
        wildBox4->setGeometry(QRect(210, 100, 31, 24));
        wildBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        wildBox1 = new QLineEdit(Ospf);
        wildBox1->setObjectName(QStringLiteral("wildBox1"));
        wildBox1->setGeometry(QRect(90, 100, 31, 24));
        wildBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        wildBox3 = new QLineEdit(Ospf);
        wildBox3->setObjectName(QStringLiteral("wildBox3"));
        wildBox3->setGeometry(QRect(170, 100, 31, 24));
        wildBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        label_3 = new QLabel(Ospf);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 61, 16));
        label_3->setStyleSheet(QLatin1String("color :rgb(0, 170, 255)\n"
""));
        wildBox2 = new QLineEdit(Ospf);
        wildBox2->setObjectName(QStringLiteral("wildBox2"));
        wildBox2->setGeometry(QRect(130, 100, 31, 24));
        wildBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        areaBox = new QLineEdit(Ospf);
        areaBox->setObjectName(QStringLiteral("areaBox"));
        areaBox->setGeometry(QRect(90, 140, 111, 24));
        areaBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        label_4 = new QLabel(Ospf);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 140, 61, 16));
        label_4->setStyleSheet(QLatin1String("color :rgb(0, 170, 255)\n"
""));
        idBox4 = new QLineEdit(Ospf);
        idBox4->setObjectName(QStringLiteral("idBox4"));
        idBox4->setGeometry(QRect(210, 180, 31, 24));
        idBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        idBox2 = new QLineEdit(Ospf);
        idBox2->setObjectName(QStringLiteral("idBox2"));
        idBox2->setGeometry(QRect(130, 180, 31, 24));
        idBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        idBox3 = new QLineEdit(Ospf);
        idBox3->setObjectName(QStringLiteral("idBox3"));
        idBox3->setGeometry(QRect(170, 180, 31, 24));
        idBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        idBox1 = new QLineEdit(Ospf);
        idBox1->setObjectName(QStringLiteral("idBox1"));
        idBox1->setGeometry(QRect(90, 180, 31, 24));
        idBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        label_5 = new QLabel(Ospf);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 180, 61, 16));
        label_5->setStyleSheet(QLatin1String("color :rgb(0, 170, 255)\n"
""));
        removeIdCheck = new QCheckBox(Ospf);
        removeIdCheck->setObjectName(QStringLiteral("removeIdCheck"));
        removeIdCheck->setGeometry(QRect(90, 220, 91, 22));
        removeIdCheck->setCursor(QCursor(Qt::PointingHandCursor));
        removeIdCheck->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        exitBtn = new QPushButton(Ospf);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(410, 310, 80, 25));
        exitBtn->setCursor(QCursor(Qt::PointingHandCursor));
        exitBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        exitBtn->setFlat(false);
        configBtn = new QPushButton(Ospf);
        configBtn->setObjectName(QStringLiteral("configBtn"));
        configBtn->setGeometry(QRect(320, 310, 80, 25));
        configBtn->setCursor(QCursor(Qt::PointingHandCursor));
        configBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        clearBtn = new QPushButton(Ospf);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));
        clearBtn->setGeometry(QRect(230, 310, 80, 25));
        clearBtn->setCursor(QCursor(Qt::PointingHandCursor));
        clearBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        groupBox = new QGroupBox(Ospf);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(270, 60, 201, 151));
        groupBox->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"selection-color: rgb(0, 170, 255);\n"
"selection-background-color: rgb(0, 170, 255);\n"
"alternate-background-color: rgb(0, 170, 255);\n"
"gridline-color: rgb(0, 0, 127);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 40, 61, 16));
        label_6->setStyleSheet(QLatin1String("color :rgb(0, 170, 255)\n"
""));
        interfaceBox = new QLineEdit(groupBox);
        interfaceBox->setObjectName(QStringLiteral("interfaceBox"));
        interfaceBox->setGeometry(QRect(80, 40, 71, 24));
        interfaceBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        defaultPassCheck = new QCheckBox(groupBox);
        defaultPassCheck->setObjectName(QStringLiteral("defaultPassCheck"));
        defaultPassCheck->setGeometry(QRect(20, 70, 101, 22));
        defaultPassCheck->setCursor(QCursor(Qt::PointingHandCursor));
        defaultPassCheck->setLayoutDirection(Qt::RightToLeft);
        defaultPassCheck->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        removePassBtn = new QPushButton(groupBox);
        removePassBtn->setObjectName(QStringLiteral("removePassBtn"));
        removePassBtn->setGeometry(QRect(110, 110, 80, 25));
        removePassBtn->setCursor(QCursor(Qt::PointingHandCursor));
        removePassBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        addPassBtn = new QPushButton(groupBox);
        addPassBtn->setObjectName(QStringLiteral("addPassBtn"));
        addPassBtn->setGeometry(QRect(20, 110, 80, 25));
        addPassBtn->setCursor(QCursor(Qt::PointingHandCursor));
        addPassBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        logCheck = new QCheckBox(Ospf);
        logCheck->setObjectName(QStringLiteral("logCheck"));
        logCheck->setGeometry(QRect(280, 220, 111, 22));
        logCheck->setCursor(QCursor(Qt::PointingHandCursor));
        logCheck->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        bandwidthBox = new QLineEdit(Ospf);
        bandwidthBox->setObjectName(QStringLiteral("bandwidthBox"));
        bandwidthBox->setGeometry(QRect(340, 20, 91, 24));
        bandwidthBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        label_7 = new QLabel(Ospf);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(270, 20, 61, 16));
        label_7->setStyleSheet(QLatin1String("color :rgb(0, 170, 255)\n"
""));
        propCheck = new QCheckBox(Ospf);
        propCheck->setObjectName(QStringLiteral("propCheck"));
        propCheck->setGeometry(QRect(40, 280, 171, 22));
        propCheck->setCursor(QCursor(Qt::PointingHandCursor));
        propCheck->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        alwaysCheck = new QCheckBox(Ospf);
        alwaysCheck->setObjectName(QStringLiteral("alwaysCheck"));
        alwaysCheck->setGeometry(QRect(70, 310, 71, 22));
        alwaysCheck->setCursor(QCursor(Qt::PointingHandCursor));
        alwaysCheck->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        disableCheck = new QCheckBox(Ospf);
        disableCheck->setObjectName(QStringLiteral("disableCheck"));
        disableCheck->setGeometry(QRect(170, 20, 91, 22));
        disableCheck->setCursor(QCursor(Qt::PointingHandCursor));
        disableCheck->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        QWidget::setTabOrder(procIdBox, disableCheck);
        QWidget::setTabOrder(disableCheck, netBox1);
        QWidget::setTabOrder(netBox1, netBox2);
        QWidget::setTabOrder(netBox2, netBox3);
        QWidget::setTabOrder(netBox3, netBox4);
        QWidget::setTabOrder(netBox4, wildBox1);
        QWidget::setTabOrder(wildBox1, wildBox2);
        QWidget::setTabOrder(wildBox2, wildBox3);
        QWidget::setTabOrder(wildBox3, wildBox4);
        QWidget::setTabOrder(wildBox4, areaBox);
        QWidget::setTabOrder(areaBox, idBox1);
        QWidget::setTabOrder(idBox1, idBox2);
        QWidget::setTabOrder(idBox2, idBox3);
        QWidget::setTabOrder(idBox3, idBox4);
        QWidget::setTabOrder(idBox4, removeIdCheck);
        QWidget::setTabOrder(removeIdCheck, bandwidthBox);
        QWidget::setTabOrder(bandwidthBox, interfaceBox);
        QWidget::setTabOrder(interfaceBox, defaultPassCheck);
        QWidget::setTabOrder(defaultPassCheck, addPassBtn);
        QWidget::setTabOrder(addPassBtn, removePassBtn);
        QWidget::setTabOrder(removePassBtn, logCheck);
        QWidget::setTabOrder(logCheck, propCheck);
        QWidget::setTabOrder(propCheck, alwaysCheck);
        QWidget::setTabOrder(alwaysCheck, clearBtn);
        QWidget::setTabOrder(clearBtn, configBtn);
        QWidget::setTabOrder(configBtn, exitBtn);

        retranslateUi(Ospf);

        exitBtn->setDefault(false);


        QMetaObject::connectSlotsByName(Ospf);
    } // setupUi

    void retranslateUi(QWidget *Ospf)
    {
        Ospf->setWindowTitle(QApplication::translate("Ospf", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Ospf", "Process ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("Ospf", "Netowrk", Q_NULLPTR));
        label_3->setText(QApplication::translate("Ospf", "Wildcard", Q_NULLPTR));
        label_4->setText(QApplication::translate("Ospf", "Area", Q_NULLPTR));
        label_5->setText(QApplication::translate("Ospf", "Router ID", Q_NULLPTR));
        removeIdCheck->setText(QApplication::translate("Ospf", "Remove ID", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("Ospf", "Done", Q_NULLPTR));
        configBtn->setText(QApplication::translate("Ospf", "Configure", Q_NULLPTR));
        clearBtn->setText(QApplication::translate("Ospf", "Clear", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Ospf", "Passive Inerfaces", Q_NULLPTR));
        label_6->setText(QApplication::translate("Ospf", "Interfaces", Q_NULLPTR));
        defaultPassCheck->setText(QApplication::translate("Ospf", "All Interfaces", Q_NULLPTR));
        removePassBtn->setText(QApplication::translate("Ospf", "Remove", Q_NULLPTR));
        addPassBtn->setText(QApplication::translate("Ospf", "Add", Q_NULLPTR));
        logCheck->setText(QApplication::translate("Ospf", "Log Changes", Q_NULLPTR));
        label_7->setText(QApplication::translate("Ospf", "Bandwidth", Q_NULLPTR));
        propCheck->setText(QApplication::translate("Ospf", "Propagate Default Route", Q_NULLPTR));
        alwaysCheck->setText(QApplication::translate("Ospf", "Always", Q_NULLPTR));
        disableCheck->setText(QApplication::translate("Ospf", "Disable", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Ospf: public Ui_Ospf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSPF_H
