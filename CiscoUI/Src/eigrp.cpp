#include "eigrp.h"
#include "ui_eigrp.h"

Eigrp::Eigrp(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::Eigrp)
{
    ui->setupUi(this);
    this->setWindowTitle("EIGRP");

    ui->netBox1->setMaxLength(3);
    ui->netBox2->setMaxLength(3);
    ui->netBox3->setMaxLength(3);
    ui->netBox4->setMaxLength(3);
    ui->wildBox1->setMaxLength(3);
    ui->wildBox2->setMaxLength(3);
    ui->wildBox3->setMaxLength(3);
    ui->wildBox4->setMaxLength(3);
    ui->idBox1->setMaxLength(3);
    ui->idBox2->setMaxLength(3);
    ui->idBox3->setMaxLength(3);
    ui->idBox4->setMaxLength(3);
    ui->asNumBox->setMaxLength(5);
    ui->interfaceBox->setMaxLength(10);
    ui->varianceBox->setMaxLength(3);

    ClearBox();
}

Eigrp::~Eigrp()
{
    delete ui;
}

void Eigrp::ClearBox()
{
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
    ui->asNumBox->clear();
    ui->interfaceBox->clear();
    ui->disableCheck->setChecked(false);
    ui->removeNetCheck->setChecked(false);
    ui->removeIdCheck->setChecked(false);
    ui->autoCheck->setChecked(false);
    ui->logCheck->setChecked(false);
    ui->defaultPassCheck->setChecked(false);
    ui->varianceBox->clear();
    ui->defaultPassCheck->setChecked(false);
    passStr = "";
}

bool Eigrp::CheckAsNum()
{                                   //2 BYTES
    if (ui->asNumBox->text().toUInt() > WORDRANGE)
        return false;
    else
        return true;
}

bool Eigrp::CheckAddress()
{
    if (ui->netBox1->text() == NULL ||
            ui->netBox2->text() == NULL ||
            ui->netBox3->text() == NULL ||
            ui->netBox4->text() == NULL ||
            ui->netBox1->text().toUShort() > 255 ||
            ui->netBox2->text().toUShort() > 255 ||
            ui->netBox3->text().toUShort() > 255 ||
            ui->netBox4->text().toUShort() > 255)
        return false;
    else
        return true;
}

bool Eigrp::CheckWild()
{
    if(ui->wildBox1->text() == NULL ||
            ui->wildBox2->text() == NULL ||
            ui->wildBox3->text() == NULL ||
            ui->wildBox4->text() == NULL ||
            ui->wildBox1->text().toUShort() > 255 ||
            ui->wildBox2->text().toUShort() > 255 ||
            ui->wildBox3->text().toUShort() > 255 ||
            ui->wildBox4->text().toUShort() > 255)
        return false;
    else if (!CheckWildCard(ui->wildBox1->text().toShort(), ui->wildBox2->text().toShort(),
                            ui->wildBox3->text().toShort(), ui->wildBox4->text().toShort()))
        return false;
    else
        return true;
}

bool Eigrp::CheckRouterID()
{
    if (ui->idBox1->text() == NULL ||
            ui->idBox2->text() == NULL ||
            ui->idBox3->text() == NULL ||
            ui->idBox4->text() == NULL ||
            ui->idBox1->text().toUShort() > 255 ||
            ui->idBox2->text().toUShort() > 255 ||
            ui->idBox3->text().toUShort() > 255 ||
            ui->idBox4->text().toUShort() > 255)
        return false;
    else
        return true;
}

bool Eigrp::CheckVariance()
{
    if (ui->varianceBox->text().toShort() > 128 || ui->varianceBox->text().toShort() < 0)
        return false;
    else
        return true;
}

bool Eigrp::EmptyInterface()
{
    if (ui->interfaceBox->text() == NULL)
        return true;
    else
        return false;
}

bool Eigrp::EmptyAddress()
{
    if(ui->netBox1->text() == NULL &&
            ui->netBox2->text() == NULL &&
            ui->netBox3->text() == NULL &&
            ui->netBox4->text() == NULL)
        return true;
    else
        return false;
}

bool Eigrp::EmptyWild()
{
    if (ui->wildBox1->text() == NULL &&
            ui->wildBox2->text() == NULL &&
            ui->wildBox3->text() == NULL &&
            ui->wildBox4->text() == NULL)
         return true;
    else
         return false;
}

bool Eigrp::EmptyId()
{
    if(ui->idBox1->text() == NULL &&
            ui->idBox2->text() == NULL &&
            ui->idBox3->text() == NULL &&
            ui->idBox4->text() == NULL)
        return true;
    else
        return false;
}

std::string Eigrp::GetAddress()
{
    std::string addressStr;
    addressStr += ui->netBox1->text().toStdString() + "." + ui->netBox2->text().toStdString() + "." + ui->netBox3->text().toStdString() + "." +
            ui->netBox4->text().toStdString() + " ";

    if (!EmptyWild())
    {
        addressStr += ui->wildBox1->text().toStdString() + "." + ui->wildBox2->text().toStdString() + "." +
                ui->wildBox3->text().toStdString() + "." + ui->wildBox4->text().toStdString();
    }

    return addressStr;
}

std::string Eigrp::GetRouterID()
{
    return ui->idBox1->text().toStdString() + "." + ui->idBox2->text().toStdString() + "." + ui->idBox3->text().toStdString() + "." +
            ui->idBox4->text().toStdString();
}

std::string Eigrp::Upload()
{
    std::string addString;

    addString += "!EIGRP!\n";
    addString += Basic::GlobalConfig();

    if (ui->disableCheck->isChecked())
       return addString += "No Router Eigrp " + ui->asNumBox->text().toStdString() + "\n";
    else
        addString += "Router Eigrp " + ui->asNumBox->text().toStdString() + "\n";

    //Network Add/Remove
    if (!EmptyAddress())
    {
        if (!ui->removeNetCheck->isChecked())
        {    //Adds Network Address and Wild Card if used
             addString += "Network " + GetAddress() + "\n";
        }
        else
        {       //Error Check in Config Btn
            addString += "No Network" + GetAddress() + "\n";
        }

        addString += passStr; //Add Passive Interfaces <- needs a network address

        if ( ui->varianceBox->text() != NULL)
            addString += "Variance " + ui->varianceBox->text().toStdString() + "\n";
    }

    //Router ID
    if (!EmptyId())
    {
        if (!ui->removeIdCheck->isChecked())
            addString += "Eigrp Router-Id " + GetRouterID() + "\n";
        else
            addString += "No Eigrp Router-Id " + GetRouterID() + "\n";
    }

    if (ui->autoCheck->isChecked())
        addString += "Auto-Summary\n";
    else
        addString += "No Auto-Summary\n";

    if(ui->logCheck->isChecked())
        addString += "Eigrp Log-Neighbor-changes\n";
    else
        addString += "No Eigrp Log-Neighbor-changes\n";

    addString += Basic::LastMode() + Basic::Logout();
    return addString;
}

void Eigrp::on_exitBtn_clicked()
{
    this->close();
}

void Eigrp::on_clearBtn_clicked()
{
    ClearBox();
}

void Eigrp::on_configBtn_clicked()      //Add Config
{
    if (!CheckAsNum())
    {
        errBox.information(nullptr, "Error", "Invalid AS Number");
        return;
    }
    else if (ui->asNumBox->text() == NULL)
    {
        errBox.information(nullptr, "Error", "Must have an AS Number");
        return;
    }
    else if (!CheckWild() && !EmptyWild())
    {
        errBox.information(nullptr, "Error", "Invaild Wild Card");
        return;
    }
    else if (!CheckAddress() && !EmptyAddress())
    {
        errBox.information(nullptr, "Error", "Invaild Network Address");
        return;
    }
    else if (!CheckVariance())
    {
        errBox.information(nullptr, "Error", "Invaild Variance Number");
        return;
    }

    ConfigStore += Upload();
    ClearBox();
}

void Eigrp::SetRead()
{
    if (ui->defaultPassCheck->isChecked())   //Makes Interface box read-only when not used
        ui->interfaceBox->setReadOnly(true);
    else
        ui->interfaceBox->setReadOnly(false);
}

void Eigrp::on_defaultPassCheck_stateChanged()
{
    SetRead();
}

////////Passive Interface Buttons//////////////
void Eigrp::on_addPassBtn_clicked()
{
    if (ui->defaultPassCheck->isChecked())
    {
        passStr += "Passive-Interface Default\n";
        ui->interfaceBox->clear();
    }
    else if (!EmptyInterface())
    {
        passStr += "Passive-Interface " + ui->interfaceBox->text().toStdString() + "\n";
        ui->interfaceBox->clear();
    }
    else
    {
        errBox.information(nullptr, "Error", "Invalid Interface");
    }
}

void Eigrp::on_removePassBtn_clicked()
{
    if (ui->defaultPassCheck->isChecked())
    {
        passStr += "No Passive-Interface Default\n";
        ui->interfaceBox->clear();
        ui->defaultPassCheck->setChecked(false);
    }
    else if (!EmptyInterface())
    {
        passStr += "No Passive-Interface " + ui->interfaceBox->text().toStdString() + "\n";
        ui->interfaceBox->clear();
        ui->defaultPassCheck->setChecked(false);
    }
    else
    {
        errBox.information(nullptr, "Error", "Invalid Interface");
    }
}
//////////////////////////////////////////////
