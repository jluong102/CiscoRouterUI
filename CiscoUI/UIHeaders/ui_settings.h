/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

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

class Ui_Settings
{
public:
    QLabel *label;
    QLineEdit *saveBox;
    QPushButton *exitBtn;
    QPushButton *saveBtn;
    QLineEdit *comPortBox;
    QLabel *label_2;
    QCheckBox *comPortCheck;
    QLabel *label_3;
    QLineEdit *pwBox;
    QCheckBox *appendCheck;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(418, 300);
        Settings->setStyleSheet(QLatin1String("gridline-color: rgb(0, 0, 0);\n"
"background-color: rgb(70, 70, 70);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"border-color: rgb(22, 22, 22);\n"
"selection-color: rgb(0, 85, 255);\n"
"selection-background-color: rgb(0, 0, 127);\n"
""));
        label = new QLabel(Settings);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(28, 20, 65, 16));
        label->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        saveBox = new QLineEdit(Settings);
        saveBox->setObjectName(QStringLiteral("saveBox"));
        saveBox->setGeometry(QRect(100, 20, 211, 24));
        saveBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        exitBtn = new QPushButton(Settings);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(310, 260, 80, 25));
        exitBtn->setCursor(QCursor(Qt::PointingHandCursor));
        exitBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        exitBtn->setFlat(false);
        saveBtn = new QPushButton(Settings);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));
        saveBtn->setGeometry(QRect(220, 260, 80, 25));
        saveBtn->setCursor(QCursor(Qt::PointingHandCursor));
        saveBtn->setStyleSheet(QLatin1String("color: rgb(0, 170, 255);\n"
"background-color: rgb(66, 66, 66);\n"
"border-color: rgb(0, 0, 0);"));
        comPortBox = new QLineEdit(Settings);
        comPortBox->setObjectName(QStringLiteral("comPortBox"));
        comPortBox->setGeometry(QRect(100, 50, 91, 24));
        comPortBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_2 = new QLabel(Settings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(28, 50, 65, 16));
        label_2->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        comPortCheck = new QCheckBox(Settings);
        comPortCheck->setObjectName(QStringLiteral("comPortCheck"));
        comPortCheck->setGeometry(QRect(220, 50, 121, 22));
        comPortCheck->setCursor(QCursor(Qt::PointingHandCursor));
        comPortCheck->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_3 = new QLabel(Settings);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(28, 80, 81, 16));
        label_3->setStyleSheet(QStringLiteral("color :rgb(0, 170, 255)"));
        pwBox = new QLineEdit(Settings);
        pwBox->setObjectName(QStringLiteral("pwBox"));
        pwBox->setGeometry(QRect(130, 80, 141, 24));
        pwBox->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));
        appendCheck = new QCheckBox(Settings);
        appendCheck->setObjectName(QStringLiteral("appendCheck"));
        appendCheck->setGeometry(QRect(320, 20, 121, 22));
        appendCheck->setCursor(QCursor(Qt::PointingHandCursor));
        appendCheck->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 0);"));

        retranslateUi(Settings);

        exitBtn->setDefault(false);


        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Settings", "Save To", Q_NULLPTR));
        saveBox->setText(QString());
        exitBtn->setText(QApplication::translate("Settings", "Done", Q_NULLPTR));
        saveBtn->setText(QApplication::translate("Settings", "Save", Q_NULLPTR));
        comPortBox->setText(QString());
        label_2->setText(QApplication::translate("Settings", "Send To", Q_NULLPTR));
        comPortCheck->setText(QApplication::translate("Settings", "Use Serial Port", Q_NULLPTR));
        label_3->setText(QApplication::translate("Settings", "Set Password", Q_NULLPTR));
        pwBox->setText(QString());
        appendCheck->setText(QApplication::translate("Settings", "Append File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
