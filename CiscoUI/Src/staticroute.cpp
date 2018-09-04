#include "StaticRoute.h"
#include "ui_staticroute.h"

StaticRoute::StaticRoute(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::StaticRoute)
{
    ui->setupUi(this);
    this->setWindowTitle("Static Route");

    ui->interfaceBox->setMaxLength(10);
    ui->ipBox1->setMaxLength(3);
    ui->ipBox2->setMaxLength(3);
    ui->ipBox3->setMaxLength(3);
    ui->ipBox4->setMaxLength(3);
    ui->subBox1->setMaxLength(3);
    ui->subBox2->setMaxLength(3);
    ui->subBox3->setMaxLength(3);
    ui->subBox4->setMaxLength(3);
    ui->intBox1->setMaxLength(3);
    ui->intBox2->setMaxLength(3);
    ui->intBox3->setMaxLength(3);
    ui->intBox4->setMaxLength(3);
    ClearBox();
}

StaticRoute::~StaticRoute()
{
    delete ui;
}

bool StaticRoute::CheckAddress()
{
    if (ui->ipBtn->isChecked())
    {
        if (ui->intBox1->text() == NULL ||
                ui->intBox2->text() == NULL ||
                ui->intBox3->text() == NULL ||
                ui->intBox4->text() == NULL)
            return false;
    }

    if (ui->ipBox1->text().toUShort() > 255 ||
            ui->ipBox2->text().toUShort() > 255 ||
            ui->ipBox3->text().toUShort() > 255 ||
            ui->ipBox4->text().toUShort() > 255 ||
            ui->ipBox1->text() == NULL ||
            ui->ipBox2->text() == NULL ||
            ui->ipBox3->text() == NULL ||
            ui->ipBox4->text() == NULL ||
            ui->subBox1->text().toUShort() > 255 ||
            ui->subBox2->text().toUShort() > 255 ||
            ui->subBox3->text().toUShort() > 255 ||
            ui->subBox4->text().toUShort() > 255 ||
            ui->subBox1->text() == NULL ||
            ui->subBox2->text() == NULL ||
            ui->subBox3->text() == NULL ||
            ui->subBox4->text() == NULL)
        return false;
    else if (CheckSubnet(ui->ipBox1->text().toShort(), ui->ipBox2->text().toShort(),
                         ui->ipBox3->text().toShort(), ui->ipBox4->text().toShort()))
        return false;
    else
        return true;
}

bool StaticRoute::EmptyAddress()
{
    if(ui->ipBox1->text() == NULL &&
           ui->ipBox2->text() == NULL &&
           ui->ipBox3->text() == NULL &&
           ui->ipBox4->text() == NULL &&
           ui->subBox1->text() == NULL &&
           ui->subBox2->text() == NULL &&
           ui->subBox3->text() == NULL &&
           ui->subBox4->text() == NULL)
        return true;
    else
        return false;
}

void StaticRoute::ClearBox()
{
    ui->ipBox1->clear();
    ui->ipBox2->clear();
    ui->ipBox3->clear();
    ui->ipBox4->clear();
    ui->subBox1->clear();
    ui->subBox2->clear();
    ui->subBox3->clear();
    ui->subBox4->clear();
    ui->interfaceBox->clear();
    ui->intBox1->clear();
    ui->intBox2->clear();
    ui->intBox3->clear();
    ui->intBox4->clear();
    ui->intBtn->setChecked(false);
    ui->ipBtn->setChecked(true);
    SwitchBox();
}

void StaticRoute::SwitchBox()
{
    if(ui->intBtn->isChecked())
    {
        ui->interfaceBox->setHidden(false);
        ui->intBox1->setHidden(true);
        ui->intBox2->setHidden(true);
        ui->intBox3->setHidden(true);
        ui->intBox4->setHidden(true);
    }
    else
    {
        ui->interfaceBox->setHidden(true);
        ui->intBox1->setHidden(false);
        ui->intBox2->setHidden(false);
        ui->intBox3->setHidden(false);
        ui->intBox4->setHidden(false);
    }
}

std::string StaticRoute::GetAddress()
{
    std::string addressStr;

    addressStr += ui->ipBox1->text().toStdString() + "." + ui->ipBox2->text().toStdString() + "." + ui->ipBox3->text().toStdString() + "." +
            ui->ipBox4->text().toStdString() + " " + ui->subBox1->text().toStdString() + "." + ui->subBox2->text().toStdString() + "." +
            ui->subBox3->text().toStdString() + "." + ui->subBox3->text().toStdString() + " ";

    if (ui->ipBtn->isChecked())
    {
        addressStr += ui->intBox1->text().toStdString() + "." + ui->intBox2->text().toStdString() + "." + ui->intBox3->text().toStdString() + "." +
                ui->intBox4->text().toStdString();
    }
    else
    {
        addressStr += ui->interfaceBox->text().toStdString();
    }

    return addressStr + "\n";
}

std::string StaticRoute::Upload()
{
    std::string addString;

    addString += "!Static Route!\n";
    addString += Basic::GlobalConfig();
    addString += "Ip Route " + GetAddress();
    addString += Basic::Logout();

    return addString;
}

void StaticRoute::on_exitBtn_clicked()
{
    this->close();
}

void StaticRoute::on_clearBtn_clicked()
{
    ClearBox();
}

void StaticRoute::on_configBtn_clicked() //Calls Upload
{
    if (!CheckAddress() || EmptyAddress())
    {
        errBox->information(nullptr, "Error", "Invalid Ip Address or Subnet");
        return;
    }
    else if (ui->intBtn->isChecked() && ui->intBtn->text() == NULL)
    {
        errBox->information(nullptr, "Error", "Invalid Interface");
        return;
    }

    ConfigStore += Upload();
    ClearBox();
}
///////////
void StaticRoute::on_intBtn_clicked()   //Makes sure correct radio button is checked
{
    SwitchBox();

    if (ui->ipBtn->isChecked() == true)
    {
        ui->ipBtn->setChecked(false);
        ui->intBtn->setChecked(true);
    }
}

void StaticRoute::on_ipBtn_clicked()
{
    SwitchBox();

    if (ui->intBtn->isChecked() == true)
    {
        ui->ipBtn->setChecked(true);
        ui->intBtn->setChecked(false);
    }
}
////////////
