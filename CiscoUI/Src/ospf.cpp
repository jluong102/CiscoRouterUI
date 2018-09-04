#include "ospf.h"
#include "ui_ospf.h"

Ospf::Ospf(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::Ospf)
{
    ui->setupUi(this);
    this->setWindowTitle("OSPF");

    ui->procIdBox->setMaxLength(5);
    ui->netBox1->setMaxLength(3);
    ui->netBox2->setMaxLength(3);
    ui->netBox3->setMaxLength(3);
    ui->netBox4->setMaxLength(3);
    ui->wildBox1->setMaxLength(3);
    ui->wildBox2->setMaxLength(3);
    ui->wildBox3->setMaxLength(3);
    ui->wildBox4->setMaxLength(3);
    ui->idBox1->setMaxLength(3);
    ui->idBox1->setMaxLength(3);
    ui->idBox1->setMaxLength(3);
    ui->idBox1->setMaxLength(3);
    ui->areaBox->setMaxLength(10); //Holds 4 BYTEs
    ui->interfaceBox->setMaxLength(10);
    ui->bandwidthBox->setMaxLength(10); //Holds Big Number

    ClearBox();
}

Ospf::~Ospf()
{
    delete ui;
    passStr = "";
}

void Ospf::ClearBox()
{
    ui->removeIdCheck->setChecked(false);
    ui->defaultPassCheck->setChecked(false);
    ui->logCheck->setChecked(false);
    ui->procIdBox->clear();
    ui->netBox1->clear();
    ui->netBox2->clear();
    ui->netBox3->clear();
    ui->netBox4->clear();
    ui->wildBox1->clear();
    ui->wildBox2->clear();
    ui->wildBox3->clear();
    ui->wildBox4->clear();
    ui->idBox1->clear();
    ui->idBox2->clear();
    ui->idBox3->clear();
    ui->idBox4->clear();
    ui->areaBox->clear();
    ui->interfaceBox->clear();
    ui->propCheck->setChecked(false);
    ui->alwaysCheck->setChecked(false);
    SetPassive();
    SetProp();
}

bool Ospf::CheckProcId()
{
    if (ui->procIdBox->text().toInt() > WORDRANGE || ui->procIdBox->text().toInt() < 0)
        return false;
    else
        return true;
}

bool Ospf::CheckAddress()
{
    if (ui->netBox1->text().toShort() > 255 ||
            ui->netBox2->text().toShort() > 255 ||
            ui->netBox3->text().toShort() > 255 ||
            ui->netBox4->text().toShort() > 255 ||
            ui->netBox1->text() == NULL ||
            ui->netBox2->text() == NULL ||
            ui->netBox3->text() == NULL ||
            ui->netBox4->text() == NULL)
        return false;
    else
        return true;

}

bool Ospf::CheckWild()
{
    if (ui->wildBox1->text().toShort() > 255 ||
            ui->wildBox2->text().toShort() > 255 ||
            ui->wildBox3->text().toShort() > 255 ||
            ui->wildBox4->text().toShort() > 255 ||
            ui->wildBox1->text() == NULL ||
            ui->wildBox2->text() == NULL ||
            ui->wildBox3->text() == NULL ||
            ui->wildBox4->text() == NULL)
        return false;
    else if (CheckWildCard(ui->wildBox1->text().toShort(), ui->wildBox2->text().toShort(),
             ui->wildBox3->text().toShort(), ui->wildBox4->text().toShort()))
        return false;
    else
        return true;
}

bool Ospf::CheckId()
{
    if(ui->idBox1->text().toShort() > 255 ||
            ui->idBox1->text().toShort() > 255 ||
            ui->idBox1->text().toShort() > 255 ||
            ui->idBox1->text().toShort() > 255 ||
            ui->idBox1->text() == NULL ||
            ui->idBox1->text() == NULL ||
            ui->idBox1->text() == NULL ||
            ui->idBox1->text() == NULL)
        return false;
    else
        return true;
}

bool Ospf::CheckArea()
{
    if(ui->areaBox->text().toLongLong() > DWORDRANGE || ui->areaBox->text().toLongLong() < 0)
        return false;
    else
        return true;
}

bool Ospf::CheckBandwidth()
{
    if (ui->bandwidthBox->text().toLongLong() > 4294967 || ui->areaBox->text().toLong() < 0)
        return false;
    else
        return true;
}

bool Ospf::EmptyArea()
{
    if(ui->areaBox->text() == NULL)
        return true;
    else
        return false;
}

bool Ospf::EmptyId()
{
    if(ui->idBox1->text() == NULL &&
            ui->idBox1->text() == NULL &&
            ui->idBox1->text() == NULL &&
            ui->idBox1->text() == NULL)
        return true;
    else
        return false;
}

bool Ospf::EmptyProcId()
{
    if(ui->procIdBox->text() == NULL)
        return true;
    else
        return false;
}

bool Ospf::EmptyWild()
{
    if (ui->wildBox1->text() == NULL &&
            ui->wildBox2->text() == NULL &&
            ui->wildBox3->text() == NULL &&
            ui->wildBox4->text() == NULL)
        return true;
    else
        return false;
}

bool Ospf::EmptyAddress()
{
    if (ui->netBox1->text() == NULL &&
            ui->netBox2->text() == NULL &&
            ui->netBox3->text() == NULL &&
            ui->netBox4->text() == NULL)
        return true;
    else
        return false;
}

bool Ospf::EmptyBandwidth()
{
    if(ui->bandwidthBox->text() == NULL)
        return true;
    else
        return false;
}

std::string Ospf::GetAddress()
{
    return ui->netBox1->text().toStdString() + "." + ui->netBox2->text().toStdString() + "." + ui->netBox3->text().toStdString() + "." +
            ui->netBox4->text().toStdString() + " " + ui->wildBox1->text().toStdString() + "." + ui->wildBox2->text().toStdString() + "." +
            ui->wildBox3->text().toStdString() + "." + ui->wildBox4->text().toStdString() + " ";
}

std::string Ospf::GetId()
{
    return ui->idBox1->text().toStdString() + "." + ui->idBox2->text().toStdString() + "." +  ui->idBox3->text().toStdString() + "." +
            ui->idBox4->text().toStdString();
}

std::string Ospf::Upload()
{
    std::string addString;
    addString += "!OSPF!\n";
    addString += Basic::GlobalConfig();

    addString += "Router Ospf " + ui->procIdBox->text().toStdString() + "\n";

    if (!EmptyAddress() && !EmptyWild() && !EmptyArea())
    {
        if (ui->disableCheck->isChecked())
        {
            addString += "No Network " + GetAddress() + "Area " + ui->areaBox->text().toStdString() + "\n";
            return addString + Basic::LastMode() + Basic::Logout();
        }
        else
        {
            addString += "Network " + GetAddress() + "Area " + ui->areaBox->text().toStdString() + "\n";
        }
    }

    if (!EmptyId())
    {
        if (!ui->removeIdCheck->isChecked())
            addString += "Router-ID " + GetId() + "\n";
        else
            addString += "No Router-ID " + GetId() + "\n";
    }

    if (ui->logCheck->isChecked())
            addString += "Log-Adjacency-Changes Detail\n";

    if (passStr != "")
        addString += passStr;

    if (!EmptyBandwidth())
        addString += "Auto-Cost Reference-Bandwidth " + ui->bandwidthBox->text().toStdString() + "\n";

    if (ui->propCheck->isChecked())
        if (ui->alwaysCheck->isChecked())
            addString += "Default-Informaiton Orginate Always\n";
        else
            addString += "Default-Informaiton Orginate\n";
    else
        addString += "No Default-Informaiton Orginate\n";

    addString += Basic::LastMode();
    addString += Basic::Logout();
    return addString;
}

void Ospf::on_configBtn_clicked()
{
    if(!CheckProcId())      //Checks
    {
        errBox.information(nullptr, "Error", "Invaild Process ID");
        return;
    }
    else if (EmptyProcId())
    {
        errBox.information(nullptr, "Error", "Must Have Process ID");
        return;
    }
    else if (!CheckAddress() && !EmptyAddress())
    {
        errBox.information(nullptr, "Error", "Invaild Network Address");
        return;
    }
    else if (!CheckWild() && !EmptyWild())
    {
        errBox.information(nullptr, "Error", "Invaild Wildcard");
        return;
    }
    else if (!CheckArea() && !EmptyArea())
    {
        errBox.information(nullptr, "Error", "Invaild Area ID");
        return;
    }
    else if (!EmptyAddress() || !EmptyArea() || !EmptyProcId())
    {
        if (EmptyAddress() || EmptyArea() || EmptyProcId())
        {
            errBox.information(nullptr, "Error", "Incomplete Information");
            return;
        }
    }
    else if (!CheckId() && !EmptyId())
    {
        errBox.information(0, "Error", "Invaild Router ID");
        return;
    }
    else if (!CheckBandwidth() && !EmptyBandwidth())
    {
        errBox.information(0, "Error", "Invaild Bandwidth Value");
        return;
    }

    ConfigStore += Upload();
    ClearBox();
}

void Ospf::on_exitBtn_clicked()
{
    this->close();
}

void Ospf::on_clearBtn_clicked()
{
    ClearBox();
}

////////Passive Interface Stuff////////////////
bool Ospf::CheckPass()
{
    if (ui->defaultPassCheck->isChecked())
        return true;
    else if (ui->interfaceBox->text() == NULL)
        return false;
    else
        return true;
}

std::string Ospf::GetPassInterface()
{
    if (ui->defaultPassCheck->isChecked())
        return "Default Interface\n";
    else
       return ui->interfaceBox->text().toStdString() + "\n";
}

void Ospf::on_addPassBtn_clicked()
{
    if (CheckPass())
    {
        passStr += "Passive-Interface ";
    }
    else
    {
        errBox.information(0, "Error", "Invaild Interface");
        return;
    }

    passStr += GetPassInterface();
    ui->interfaceBox->clear();
    ui->defaultPassCheck->setChecked(false);
}

void Ospf::on_removePassBtn_clicked()
{
    if (CheckPass())
    {
        passStr += "No Passive-Interface ";
    }
    else
    {
        errBox.information(nullptr, "Error", "Invaild Interface");
        return;
    }

    passStr += GetPassInterface();
    ui->interfaceBox->clear();
    ui->defaultPassCheck->setChecked(false);
}

void Ospf::on_defaultPassCheck_stateChanged()
{
   SetPassive();
}

void Ospf::SetPassive()
{
    if(ui->defaultPassCheck->isChecked())
        ui->interfaceBox->setReadOnly(true);
    else
        ui->interfaceBox->setReadOnly(false);
}
////////////////////////////////////////////////////

void Ospf::SetProp()
{
    if(ui->propCheck->isChecked())
        ui->alwaysCheck->setHidden(false);
    else
        ui->alwaysCheck->setHidden(true);
}

void Ospf::on_propCheck_stateChanged()
{
    SetProp();
}
