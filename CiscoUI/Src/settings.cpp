#include "settings.h"
#include "ui_settings.h"

Settings::Settings(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::Settings)
{
    ui->setupUi(this);

    ui->saveBox->setMaxLength(30);
    ui->comPortBox->setMaxLength(10);
    ui->pwBox->setMaxLength(25);


    ClearBox();
}

Settings::~Settings()
{
    delete ui;
}

void Settings::SetDefaults()
{
    if (ui->comPortCheck->isChecked())
        ui->comPortBox->setReadOnly(true);
    else
        ui->comPortBox->setReadOnly(false);
}

void Settings::ClearBox()   //Defaults
{
    char saveName[SaveTo.length() + 1];
    strcpy(saveName, SaveTo.c_str()); //Convert String to Char*
    ui->saveBox->setText(saveName); //Sets to Current Save File

    char sendName[SendCom.length() + 1];
    strcpy(sendName, SendCom.c_str());
    ui->comPortBox->setText(sendName);

    if (PwUsed)
        ui->pwBox->setText("******");
    else
        ui->pwBox->clear();

    if (AppendFile)
        ui->appendCheck->setChecked(true);
    else
        ui->appendCheck->setChecked(false);
}

bool Settings::EmptySave()
{
    if (ui->saveBox->text() == NULL)
        return true;
    else
        return false;
}

bool Settings::EmptyComPort()
{
    if(ui->comPortBox->text() == NULL)
        return true;
    else
        return false;
}

void Settings::Update()
{
    if (EmptySave())
        SaveTo = "Config.txt";
    else
        SaveTo = ui->saveBox->text().toStdString();

    if (ui->comPortCheck->isChecked())
    {
        if (EmptyComPort())
            SendCom = "COM1";
        else
            SendCom = ui->comPortBox->text().toStdString();
    }

    if (!EmptyPassword())
        SetPassword();

    SetAppend(); //For Config File
}

void Settings::on_saveBtn_clicked()
{
    Update();
    ClearBox();
    errBox.about(nullptr, "Update", "Settings Saved");
}

void Settings::on_exitBtn_clicked()
{
    this->close();
}

void Settings::on_comPortCheck_stateChanged()
{
    SetDefaults();
}

bool Settings::EmptyPassword()
{
    if (ui->pwBox->text() == NULL || ui->pwBox->text() == "******")
        return true;
    else
        return false;
}

void Settings::SetPassword()
{
    PwStore = ui->pwBox->text().toStdString();
    PwUsed = true;
}

void Settings::SetAppend()
{
    if (ui->appendCheck->isChecked())
        AppendFile = true;
    else
        AppendFile = false;
}
