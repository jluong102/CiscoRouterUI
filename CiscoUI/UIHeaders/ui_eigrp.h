/********************************************************************************
** Form generated from reading UI file 'eigrp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EIGRP_H
#define UI_EIGRP_H

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

class Ui_Eigrp
{
public:
    QLabel *label;
    QLineEdit *asNumBox;
    QLineEdit *netBox2;
    QLineEdit *netBox3;
    QLineEdit *netBox4;
    QCheckBox *disableCheck;
    QLineEdit *wildBox4;
    QLineEdit *wildBox1;
    QLabel *label_3;
    QLineEdit *wildBox2;
    QLineEdit *wildBox3;
    QPushButton *exitBtn;
    QPushButton *configBtn;
    QPushButton *clearBtn;
    QLineEdit *idBox3;
    QLineEdit *idBox2;
    QLineEdit *idBox1;
    QLabel *label_4;
    QLineEdit *idBox4;
    QCheckBox *removeNetCheck;
    QCheckBox *removeIdCheck;
    QLineEdit *netBox1;
    QLabel *label_2;
    QCheckBox *autoCheck;
    QCheckBox *logCheck;
    QGroupBox *groupBox;
    QLabel *label_5;
    QLineEdit *interfaceBox;
    QCheckBox *defaultPassCheck;
    QPushButton *addPassBtn;
    QPushButton *removePassBtn;
    QLabel *label_6;
    QLineEdit *varianceBox;

    void setupUi(QWidget *Eigrp)
    {
        if (Eigrp->objectName().isEmpty())
            Eigrp->setObjectName(QStringLiteral("Eigrp"));
        Eigrp->resize(500, 311);
        Eigrp->setStyleSheet(QLatin1String("gridline-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 170, 255);\n"
"selection-background-color: rgb(66, 66, 66);\n"
"background-color: rgb(70, 70, 70);\n"
"alternate-background-color: rgb(0, 0, 0);"));
        label = new QLabel(Eigrp);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(21, 21, 65, 16));
        label->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        asNumBox = new QLineEdit(Eigrp);
        asNumBox->setObjectName(QStringLiteral("asNumBox"));
        asNumBox->setGeometry(QRect(93, 21, 71, 24));
        asNumBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        netBox2 = new QLineEdit(Eigrp);
        netBox2->setObjectName(QStringLiteral("netBox2"));
        netBox2->setGeometry(QRect(130, 60, 31, 24));
        netBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        netBox3 = new QLineEdit(Eigrp);
        netBox3->setObjectName(QStringLiteral("netBox3"));
        netBox3->setGeometry(QRect(170, 60, 31, 24));
        netBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        netBox4 = new QLineEdit(Eigrp);
        netBox4->setObjectName(QStringLiteral("netBox4"));
        netBox4->setGeometry(QRect(210, 60, 31, 24));
        netBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        disableCheck = new QCheckBox(Eigrp);
        disableCheck->setObjectName(QStringLiteral("disableCheck"));
        disableCheck->setGeometry(QRect(200, 20, 85, 22));
        disableCheck->setCursor(QCursor(Qt::PointingHandCursor));
        disableCheck->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        wildBox4 = new QLineEdit(Eigrp);
        wildBox4->setObjectName(QStringLiteral("wildBox4"));
        wildBox4->setGeometry(QRect(210, 100, 31, 24));
        wildBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        wildBox1 = new QLineEdit(Eigrp);
        wildBox1->setObjectName(QStringLiteral("wildBox1"));
        wildBox1->setGeometry(QRect(90, 100, 31, 24));
        wildBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_3 = new QLabel(Eigrp);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(22, 102, 61, 16));
        label_3->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        wildBox2 = new QLineEdit(Eigrp);
        wildBox2->setObjectName(QStringLiteral("wildBox2"));
        wildBox2->setGeometry(QRect(130, 100, 31, 24));
        wildBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        wildBox3 = new QLineEdit(Eigrp);
        wildBox3->setObjectName(QStringLiteral("wildBox3"));
        wildBox3->setGeometry(QRect(170, 100, 31, 24));
        wildBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        exitBtn = new QPushButton(Eigrp);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(410, 270, 80, 25));
        exitBtn->setCursor(QCursor(Qt::PointingHandCursor));
        exitBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        configBtn = new QPushButton(Eigrp);
        configBtn->setObjectName(QStringLiteral("configBtn"));
        configBtn->setGeometry(QRect(320, 270, 80, 25));
        configBtn->setCursor(QCursor(Qt::PointingHandCursor));
        configBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        clearBtn = new QPushButton(Eigrp);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));
        clearBtn->setGeometry(QRect(230, 270, 80, 25));
        clearBtn->setCursor(QCursor(Qt::PointingHandCursor));
        clearBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        idBox3 = new QLineEdit(Eigrp);
        idBox3->setObjectName(QStringLiteral("idBox3"));
        idBox3->setGeometry(QRect(170, 170, 31, 24));
        idBox3->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        idBox2 = new QLineEdit(Eigrp);
        idBox2->setObjectName(QStringLiteral("idBox2"));
        idBox2->setGeometry(QRect(130, 170, 31, 24));
        idBox2->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        idBox1 = new QLineEdit(Eigrp);
        idBox1->setObjectName(QStringLiteral("idBox1"));
        idBox1->setGeometry(QRect(90, 170, 31, 24));
        idBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_4 = new QLabel(Eigrp);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(22, 172, 61, 16));
        label_4->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        idBox4 = new QLineEdit(Eigrp);
        idBox4->setObjectName(QStringLiteral("idBox4"));
        idBox4->setGeometry(QRect(210, 170, 31, 24));
        idBox4->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        removeNetCheck = new QCheckBox(Eigrp);
        removeNetCheck->setObjectName(QStringLiteral("removeNetCheck"));
        removeNetCheck->setGeometry(QRect(120, 130, 131, 22));
        removeNetCheck->setCursor(QCursor(Qt::PointingHandCursor));
        removeNetCheck->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        removeIdCheck = new QCheckBox(Eigrp);
        removeIdCheck->setObjectName(QStringLiteral("removeIdCheck"));
        removeIdCheck->setGeometry(QRect(120, 200, 131, 22));
        removeIdCheck->setCursor(QCursor(Qt::PointingHandCursor));
        removeIdCheck->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        netBox1 = new QLineEdit(Eigrp);
        netBox1->setObjectName(QStringLiteral("netBox1"));
        netBox1->setGeometry(QRect(90, 60, 31, 24));
        netBox1->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_2 = new QLabel(Eigrp);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(22, 62, 61, 16));
        label_2->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        autoCheck = new QCheckBox(Eigrp);
        autoCheck->setObjectName(QStringLiteral("autoCheck"));
        autoCheck->setGeometry(QRect(310, 20, 111, 22));
        autoCheck->setCursor(QCursor(Qt::PointingHandCursor));
        autoCheck->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        logCheck = new QCheckBox(Eigrp);
        logCheck->setObjectName(QStringLiteral("logCheck"));
        logCheck->setGeometry(QRect(340, 220, 111, 22));
        logCheck->setCursor(QCursor(Qt::PointingHandCursor));
        logCheck->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        groupBox = new QGroupBox(Eigrp);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(300, 50, 191, 151));
        groupBox->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"selection-color: rgb(0, 170, 255);\n"
"selection-background-color: rgb(0, 170, 255);\n"
"alternate-background-color: rgb(0, 170, 255);\n"
"gridline-color: rgb(0, 0, 127);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 40, 65, 16));
        label_5->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        interfaceBox = new QLineEdit(groupBox);
        interfaceBox->setObjectName(QStringLiteral("interfaceBox"));
        interfaceBox->setGeometry(QRect(92, 40, 71, 24));
        interfaceBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        defaultPassCheck = new QCheckBox(groupBox);
        defaultPassCheck->setObjectName(QStringLiteral("defaultPassCheck"));
        defaultPassCheck->setGeometry(QRect(20, 70, 111, 22));
        QFont font;
        font.setStyleStrategy(QFont::NoAntialias);
        defaultPassCheck->setFont(font);
        defaultPassCheck->setCursor(QCursor(Qt::PointingHandCursor));
        defaultPassCheck->setLayoutDirection(Qt::RightToLeft);
        defaultPassCheck->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        addPassBtn = new QPushButton(groupBox);
        addPassBtn->setObjectName(QStringLiteral("addPassBtn"));
        addPassBtn->setGeometry(QRect(10, 110, 80, 25));
        addPassBtn->setCursor(QCursor(Qt::PointingHandCursor));
        addPassBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        removePassBtn = new QPushButton(groupBox);
        removePassBtn->setObjectName(QStringLiteral("removePassBtn"));
        removePassBtn->setGeometry(QRect(100, 110, 80, 25));
        removePassBtn->setCursor(QCursor(Qt::PointingHandCursor));
        removePassBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        label_6 = new QLabel(Eigrp);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 240, 61, 16));
        label_6->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        varianceBox = new QLineEdit(Eigrp);
        varianceBox->setObjectName(QStringLiteral("varianceBox"));
        varianceBox->setGeometry(QRect(88, 238, 41, 24));
        varianceBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        QWidget::setTabOrder(asNumBox, disableCheck);
        QWidget::setTabOrder(disableCheck, netBox1);
        QWidget::setTabOrder(netBox1, netBox2);
        QWidget::setTabOrder(netBox2, netBox3);
        QWidget::setTabOrder(netBox3, netBox4);
        QWidget::setTabOrder(netBox4, wildBox1);
        QWidget::setTabOrder(wildBox1, wildBox2);
        QWidget::setTabOrder(wildBox2, wildBox3);
        QWidget::setTabOrder(wildBox3, wildBox4);
        QWidget::setTabOrder(wildBox4, removeNetCheck);
        QWidget::setTabOrder(removeNetCheck, idBox1);
        QWidget::setTabOrder(idBox1, idBox2);
        QWidget::setTabOrder(idBox2, idBox3);
        QWidget::setTabOrder(idBox3, idBox4);
        QWidget::setTabOrder(idBox4, removeIdCheck);
        QWidget::setTabOrder(removeIdCheck, varianceBox);
        QWidget::setTabOrder(varianceBox, autoCheck);
        QWidget::setTabOrder(autoCheck, interfaceBox);
        QWidget::setTabOrder(interfaceBox, defaultPassCheck);
        QWidget::setTabOrder(defaultPassCheck, addPassBtn);
        QWidget::setTabOrder(addPassBtn, removePassBtn);
        QWidget::setTabOrder(removePassBtn, logCheck);
        QWidget::setTabOrder(logCheck, clearBtn);
        QWidget::setTabOrder(clearBtn, configBtn);
        QWidget::setTabOrder(configBtn, exitBtn);

        retranslateUi(Eigrp);

        QMetaObject::connectSlotsByName(Eigrp);
    } // setupUi

    void retranslateUi(QWidget *Eigrp)
    {
        Eigrp->setWindowTitle(QApplication::translate("Eigrp", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Eigrp", "AS Number", Q_NULLPTR));
        disableCheck->setText(QApplication::translate("Eigrp", "Disable", Q_NULLPTR));
        label_3->setText(QApplication::translate("Eigrp", "Wildcard", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("Eigrp", "Done", Q_NULLPTR));
        configBtn->setText(QApplication::translate("Eigrp", "Configure", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        configBtn->setShortcut(QApplication::translate("Eigrp", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        clearBtn->setText(QApplication::translate("Eigrp", "Clear", Q_NULLPTR));
        label_4->setText(QApplication::translate("Eigrp", "Router ID", Q_NULLPTR));
        removeNetCheck->setText(QApplication::translate("Eigrp", "Remove Network", Q_NULLPTR));
        removeIdCheck->setText(QApplication::translate("Eigrp", "Remove Router ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("Eigrp", "Network", Q_NULLPTR));
        autoCheck->setText(QApplication::translate("Eigrp", "Auto-Summary", Q_NULLPTR));
        logCheck->setText(QApplication::translate("Eigrp", "Log Neghbors", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Eigrp", "Passive Interface", Q_NULLPTR));
        label_5->setText(QApplication::translate("Eigrp", "Interface", Q_NULLPTR));
        defaultPassCheck->setText(QApplication::translate("Eigrp", "All Interfaces", Q_NULLPTR));
        addPassBtn->setText(QApplication::translate("Eigrp", "Add ", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        addPassBtn->setShortcut(QApplication::translate("Eigrp", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        removePassBtn->setText(QApplication::translate("Eigrp", "Remove", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        removePassBtn->setShortcut(QApplication::translate("Eigrp", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label_6->setText(QApplication::translate("Eigrp", "Variance", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Eigrp: public Ui_Eigrp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EIGRP_H
