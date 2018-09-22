#include "setup.h"
#include "ui_setup.h"

Setup::Setup(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::Setup)
{
    ui->setupUi(this);
    this->setWindowTitle("Setup");
    ClearBox();

    ui->hostBox->setMaxLength(25);
    ui->pwBox->setMaxLength(25);
}

Setup::~Setup()
{
    delete ui;
}


void Setup::on_exitBtn_clicked()
{
    this->close();
}

void Setup::ClearBox()
{
    ui->hostBox->clear();
    ui->pwBox->clear();
    ui->ipBox1->clear();
    ui->ipBox2->clear();
    ui->ipBox3->clear();
    ui->ipBox4->clear();
    ui->loginBox->clear();
    ui->motdBox->clear();
    ui->encryptCheck->setChecked(true);
    ui->secretCheck->setChecked(true);
    ui->domainCheck->setChecked(true);
}

bool Setup::CheckIp()
{
    if (ui->ipBox1->text().toUShort() > 255 ||
               ui->ipBox2->text().toUShort() > 255 ||
               ui->ipBox3->text().toUShort() > 255 ||
               ui->ipBox4->text().toUShort() > 255 ||
               ui->ipBox1->text() == NULL ||
               ui->ipBox2->text() == NULL ||
               ui->ipBox3->text() == NULL ||
               ui->ipBox4->text() == NULL)
           return false;
     else
           return true;
}

bool Setup::EmptyAddress()
{
    if(ui->ipBox1->text() == NULL &&
           ui->ipBox2->text() == NULL &&
           ui->ipBox3->text() == NULL &&
           ui->ipBox4->text() == NULL)
        return true;
    else
        return false;
}

/*bool Setup::AllEmpty()
{
    if (ui->hostBox->text() == NULL &&
        ui->pwBox->text() == NULL &&
        ui->ipBox1->text() == NULL &&
        ui->ipBox2->text() == NULL &&
        ui->ipBox3->text() == NULL &&
        ui->ipBox4->text() == NULL &&
        ui->loginBox->text() == NULL &&
        ui->motdBox->text() == NULL)
        return true;
    else
        return false;
}*/

std::string Setup::GetAddress()
{
    return ui->ipBox1->text().toStdString() + "." + ui->ipBox2->text().toStdString() + "." + ui->ipBox3->text().toStdString() + "." +
            ui->ipBox4->text().toStdString();
}


std::string Setup::Upload() //Makes String to add to config
{
    std::string addString;

    addString += "!Router Setup!\n" + Basic::GlobalConfig();

    if (ui->hostBox->text() != NULL)
        addString += "Hostname " + ui->hostBox->text().toStdString() + "\n";

    if (ui->pwBox->text() != NULL)
    {
        if (ui->secretCheck->isChecked() == true)
            addString += "Enable Secret ";
        else
            addString += "Enable Password ";
        addString += ui->pwBox->text().toStdString() + "\n";
        PwUsed = true;  //Set Password
        PwStore = ui->pwBox->text().toStdString();
    }

    if (PwUsed)
    {
        if (ui->encryptCheck->isChecked() == true)
            addString += "Service Password-Encryption\n";
        else
            addString += "No Service Password-Encryption\n";
    }

    if (!EmptyAddress())
        addString += "Ip Default-Gateway " + GetAddress() + "\n";

    if (ui->motdBox->text() != NULL)
        addString += "Banner MOTD \"" + ui->motdBox->text().toStdString() + "\"\n";

    if (ui->loginBox->text() != NULL)
        addString += "Banner Login \"" + ui->loginBox->text().toStdString() + "\"\n";

    if (ui->domainCheck->isChecked() == true)
        addString += "Ip Domain-Lookup\n";
    else
        addString += "No Ip Domain-Lookup\n";


    addString += Basic::LastMode();
    return addString;
}

void Setup::on_configBtn_clicked()
{
    if (!EmptyAddress())
    {
        if(!CheckIp())
        {
            errBox.information(0, "Error", "Invalid Ip Address");
            return;
        }
    }

    ConfigStore += Upload();
    ClearBox();
}

void Setup::on_clearBtn_clicked()
{
    ClearBox();
}
