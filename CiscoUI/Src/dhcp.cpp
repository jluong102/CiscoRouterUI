#include "dhcp.h"
#include "ui_dhcp.h"

Dhcp::Dhcp(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::Dhcp)
{
    ui->setupUi(this);
    this->setWindowTitle("DHCP");

    ui->nameBox->setMaxLength(15);
    ui->netBox1->setMaxLength(3);
    ui->netBox2->setMaxLength(3);
    ui->netBox3->setMaxLength(3);
    ui->netBox4->setMaxLength(3);
    ui->defBox1->setMaxLength(3);
    ui->defBox2->setMaxLength(3);
    ui->defBox3->setMaxLength(3);
    ui->defBox4->setMaxLength(3);
    ui->dnsBox1->setMaxLength(3);
    ui->dnsBox2->setMaxLength(3);
    ui->dnsBox3->setMaxLength(3);
    ui->dnsBox4->setMaxLength(3);
    ui->biosBox1->setMaxLength(3);
    ui->biosBox2->setMaxLength(3);
    ui->biosBox3->setMaxLength(3);
    ui->biosBox4->setMaxLength(3);
    ui->subBox1->setMaxLength(3);
    ui->subBox2->setMaxLength(3);
    ui->subBox3->setMaxLength(3);
    ui->subBox4->setMaxLength(3);
    ui->dayBox->setMaxLength(3);
    ui->hourBox->setMaxLength(2);
    ui->minBox->setMaxLength(2);
    ui->domainBox->setMaxLength(25);
    ui->exIpBox1->setMaxLength(3);
    ui->exIpBox2->setMaxLength(3);
    ui->exIpBox3->setMaxLength(3);
    ui->exIpBox4->setMaxLength(3);
    ui->exSubBox1->setMaxLength(3);
    ui->exSubBox2->setMaxLength(3);
    ui->exSubBox3->setMaxLength(3);
    ui->exSubBox4->setMaxLength(3);

    ClearBox();
}

Dhcp::~Dhcp()
{
    delete ui;
}

void Dhcp::ClearBox()
{
    ui->nameBox->clear();
    ui->netBox1->clear();
    ui->netBox2->clear();
    ui->netBox3->clear();
    ui->netBox4->clear();
    ui->subBox1->clear();
    ui->subBox2->clear();
    ui->subBox3->clear();
    ui->subBox4->clear();
    ui->defBox1->clear();
    ui->defBox2->clear();
    ui->defBox3->clear();
    ui->defBox4->clear();
    ui->dnsBox1->clear();
    ui->dnsBox2->clear();
    ui->dnsBox3->clear();
    ui->dnsBox4->clear();
    ui->biosBox1->clear();
    ui->biosBox2->clear();
    ui->biosBox3->clear();
    ui->biosBox4->clear();
    ui->onBtn->setChecked(true);
    ui->offBtn->setChecked(false);
    ui->dayBox->clear();
    ui->hourBox->clear();
    ui->minBox->clear();
    ui->domainBox->clear();
    ui->infCheck->setChecked(false);
    ui->disableCheck->setChecked(false);
    ClearEx();
}

void Dhcp::ClearEx()
{
    ui->exIpBox1->clear();
    ui->exIpBox2->clear();
    ui->exIpBox3->clear();
    ui->exIpBox4->clear();
    ui->exSubBox1->clear();
    ui->exSubBox2->clear();
    ui->exSubBox3->clear();
    ui->exSubBox4->clear();
}

bool Dhcp::CheckNetwork()
{
    if (ui->netBox1->text() == NULL ||
            ui->netBox2->text() == NULL ||
            ui->netBox3->text() == NULL ||
            ui->netBox4->text() == NULL ||
            ui->netBox1->text().toShort() > 255 ||
            ui->netBox2->text().toShort() > 255 ||
            ui->netBox3->text().toShort() > 255 ||
            ui->netBox4->text().toShort() > 255 ||
            ui->netBox1->text().toShort() < 0 ||
            ui->netBox2->text().toShort() < 0 ||
            ui->netBox3->text().toShort() < 0 ||
            ui->netBox4->text().toShort() < 0 ||
            ui->subBox1->text() == NULL ||      //<-Subnet Needed
            ui->subBox2->text() == NULL ||
            ui->subBox3->text() == NULL ||
            ui->subBox4->text() == NULL ||
            ui->subBox1->text().toShort() > 255 ||
            ui->subBox2->text().toShort() > 255 ||
            ui->subBox3->text().toShort() > 255 ||
            ui->subBox4->text().toShort() > 255 ||
            ui->subBox1->text().toShort() < 0  ||
            ui->subBox2->text().toShort() < 0  ||
            ui->subBox3->text().toShort() < 0  ||
            ui->subBox4->text().toShort() < 0)
        return false;
    else if (!CheckSubnet(ui->subBox1->text().toShort(), ui->subBox2->text().toShort(),
                          ui->subBox3->text().toShort(), ui->subBox4->text().toShort()))
        return false;
    else
        return true;
}

bool Dhcp::CheckDefRouter()
{
    if(ui->defBox1->text() == NULL ||
            ui->defBox2->text() == NULL ||
            ui->defBox3->text() == NULL ||
            ui->defBox4->text() == NULL ||
            ui->defBox1->text().toShort() > 255 ||
            ui->defBox2->text().toShort() > 255 ||
            ui->defBox3->text().toShort() > 255 ||
            ui->defBox4->text().toShort() > 255 ||
            ui->defBox1->text().toShort() < 0 ||
            ui->defBox2->text().toShort() < 0 ||
            ui->defBox3->text().toShort() < 0 ||
            ui->defBox4->text().toShort() < 0)
        return false;
    else
        return true;
}

bool Dhcp::CheckDns()
{
    if(ui->dnsBox1->text() == NULL ||
            ui->dnsBox2->text() == NULL ||
            ui->dnsBox3->text() == NULL ||
            ui->dnsBox4->text() == NULL ||
            ui->dnsBox1->text().toShort() > 255 ||
            ui->dnsBox2->text().toShort() > 255 ||
            ui->dnsBox3->text().toShort() > 255 ||
            ui->dnsBox4->text().toShort() > 255 ||
            ui->dnsBox1->text().toShort() < 0 ||
            ui->dnsBox2->text().toShort() < 0 ||
            ui->dnsBox3->text().toShort() < 0 ||
            ui->dnsBox4->text().toShort() < 0)
        return false;
    else
        return true;
}

bool Dhcp::CheckBios()
{
    if(ui->biosBox1->text() == NULL ||
            ui->biosBox2->text() == NULL ||
            ui->biosBox3->text() == NULL ||
            ui->biosBox4->text() == NULL ||
            ui->biosBox1->text().toShort() > 255 ||
            ui->biosBox2->text().toShort() > 255 ||
            ui->biosBox3->text().toShort() > 255 ||
            ui->biosBox4->text().toShort() > 255 ||
            ui->biosBox1->text().toShort() < 0 ||
            ui->biosBox2->text().toShort() < 0 ||
            ui->biosBox3->text().toShort() < 0 ||
            ui->biosBox4->text().toShort() < 0)
        return false;
    else
        return true;
}

bool Dhcp::CheckExclude()
{
    if (ui->exIpBox1->text() == NULL ||
            ui->exIpBox2->text() == NULL ||
            ui->exIpBox3->text() == NULL ||
            ui->exIpBox4->text() == NULL ||
            ui->exIpBox1->text().toShort() > 255 ||
            ui->exIpBox2->text().toShort() > 255 ||
            ui->exIpBox3->text().toShort() > 255 ||
            ui->exIpBox4->text().toShort() > 255 ||
            ui->exIpBox1->text().toShort() < 0 ||
            ui->exIpBox2->text().toShort() < 0 ||
            ui->exIpBox3->text().toShort() < 0 ||
            ui->exIpBox4->text().toShort() < 0 ||
            ui->exIpBox1->text() == NULL ||
            ui->exSubBox2->text() == NULL ||
            ui->exSubBox3->text() == NULL ||
            ui->exSubBox4->text() == NULL ||
            ui->exSubBox1->text().toShort() > 255 ||
            ui->exSubBox2->text().toShort() > 255 ||
            ui->exSubBox3->text().toShort() > 255 ||
            ui->exSubBox4->text().toShort() > 255 ||
            ui->exSubBox1->text().toShort() < 0  ||
            ui->exSubBox2->text().toShort() < 0  ||
            ui->exSubBox3->text().toShort() < 0  ||
            ui->exSubBox4->text().toShort() < 0)
        return false;
    else if (!CheckSubnet(ui->exSubBox1->text().toShort(), ui->exSubBox2->text().toShort(),
                          ui->exSubBox3->text().toShort(), ui->exSubBox4->text().toShort()))
        return false;
    else
        return true;
}

bool Dhcp::CheckLease()
{
    if(ui->dayBox->text().toShort() > 365 || ui->dayBox->text().toShort() < 0)
        return false;
    else if (ui->hourBox->text().toShort() > 24 || ui->hourBox->text().toShort() < 0)
        return false;
    else if (ui->minBox->text().toShort() > 60 || ui->minBox->text().toShort() < 0)
        return false;
    else
        return true;
}

bool Dhcp::EmptyName()
{
    if(ui->nameBox->text() == NULL)
        return true;
    else
        return false;
}

bool Dhcp::EmptyNetwork()
{
    if(ui->netBox1->text() == NULL &&
            ui->netBox2->text() == NULL &&
            ui->netBox3->text() == NULL &&
            ui->netBox4->text() == NULL &&
            ui->subBox1->text() == NULL &&
            ui->subBox2->text() == NULL &&
            ui->subBox3->text() == NULL &&
            ui->subBox4->text() == NULL)
        return true;
    else
        return false;
}

bool Dhcp::EmptyDomain()
{
    if(ui->domainBox->text() == NULL)
        return true;
    else
        return false;
}

bool Dhcp::EmptyDefRouter()
{
    if(ui->defBox1->text() == NULL &&
            ui->defBox2->text() == NULL &&
            ui->defBox3->text() == NULL &&
            ui->defBox4->text() == NULL)
        return true;
    else
        return false;
}

bool Dhcp::EmptyDns()
{
    if(ui->dnsBox1->text() == NULL &&
            ui->dnsBox2->text() == NULL &&
            ui->dnsBox3->text() == NULL &&
            ui->dnsBox4->text() == NULL)
        return true;
    else
        return false;
}

bool Dhcp::EmptyBios()
{
    if(ui->biosBox1->text() == NULL &&
            ui->biosBox2->text() == NULL &&
            ui->biosBox3->text() == NULL &&
            ui->biosBox4->text() == NULL)
        return true;
    else
        return false;
}

bool Dhcp::EmptyExclude()
{
    if(ui->exIpBox1->text() == NULL &&
            ui->exIpBox2->text() == NULL &&
            ui->exIpBox3->text() == NULL &&
            ui->exIpBox4->text() == NULL &&
            ui->exIpBox1->text() == NULL &&
            ui->exSubBox2->text() == NULL &&
            ui->exSubBox3->text() == NULL &&
            ui->exSubBox4->text() == NULL)
        return true;
    else
        return false;
}

bool Dhcp::EmptyLease()
{
    if (ui->dayBox->text() == NULL &&
            ui->hourBox->text() == NULL &&
            ui->minBox->text() == NULL)
        return true;
    else
        return false;
}

std::string Dhcp::GetNetwork()
{
    return ui->netBox1->text().toStdString() + "." + ui->netBox2->text().toStdString() + "." + ui->netBox3->text().toStdString() + "." +
            ui->netBox4->text().toStdString() + " " + ui->subBox1->text().toStdString() + "." + ui->subBox2->text().toStdString() + "." +
            ui->subBox3->text().toStdString() + "." + ui->subBox4->text().toStdString();
}

std::string Dhcp::GetDefRouter()
{
    return ui->defBox1->text().toStdString() + "." + ui->defBox2->text().toStdString() + "." + ui->defBox3->text().toStdString() + "." +
            ui->defBox4->text().toStdString();
}

std::string Dhcp::GetDns()
{
    return ui->dnsBox1->text().toStdString() + "." + ui->dnsBox2->text().toStdString() + "." + ui->dnsBox3->text().toStdString() + "." +
            ui->dnsBox4->text().toStdString();
}

std::string Dhcp::GetBios()
{
    return ui->biosBox1->text().toStdString() + "." + ui->biosBox2->text().toStdString() + "." + ui->biosBox3->text().toStdString() + "." +
            ui->biosBox4->text().toStdString();
}

std::string Dhcp::GetExAddress()
{
    return ui->exIpBox1->text().toStdString() + "." + ui->exIpBox2->text().toStdString() + "." + ui->exIpBox3->text().toStdString() + "." +
            ui->exIpBox4->text().toStdString() + " " + ui->exSubBox1->text().toStdString() + "." + ui->exSubBox2->text().toStdString() + "." +
            ui->exSubBox3->text().toStdString() + "." +ui->exSubBox4->text().toStdString();
}

std::string Dhcp::GetLease()
{
    if(ui->infCheck->isChecked())
    {
        return "Infinite";
    }
    else
    {
        return ui->dayBox->text().toStdString() + " " + ui->hourBox->text().toStdString() + " " +
                ui->minBox->text().toStdString();
    }
}

std::string Dhcp::GetExList()
{
    std::string exStr;

    for (auto i : excludeList)
    {
        exStr += "Ip DHCP Excluded-Address " + i + "\n";
    }
    excludeList.clear(); //Clears List to Avoid Repeats

    return exStr;
}

std::string Dhcp::Upload()
{
    std::string addString;

    addString += "!DHCP!\n";
    addString += Basic::GlobalConfig();

    if (ui->disableCheck->isChecked())
        return addString += "No Ip DHCP Pool " + ui->nameBox->text().toStdString() + "\n" + Basic::Logout();
    addString += "Ip DHCP Pool " + ui->nameBox->text().toStdString() + "\n";

    if (!EmptyNetwork())
        addString += "Network " + GetNetwork() + "\n";

    if (!EmptyDefRouter())
        addString += "Default-Router " + GetDefRouter() + "\n";

    if (!EmptyBios())
        addString += "NetBIOS-Name-Server " + GetBios() + "\n";

    if (!EmptyDomain())
        addString += "Domain-Name " + ui->domainBox->text().toStdString() + "\n";

    if (!EmptyLease())
        addString += "Lease " + GetLease() + "\n";

    addString += Basic::LastMode();

    if (!excludeList.empty())
        addString += GetExList();

    if (ui->offBtn->isChecked())
        addString += "No Service DHCP\n";
    else
        addString += "Service DHCP\n";

    addString += Basic::Logout();
    return addString;
}

void Dhcp::on_configBtn_clicked()
{
    if(EmptyName())
    {
        errBox.information(nullptr, "Error", "DHCP Name Required");
        return;
    }
    else if(!CheckNetwork() && !EmptyNetwork())
    {
        errBox.information(nullptr, "Error", "Invaild Network Address or Subnet");
        return;
    }
    else if (!CheckDefRouter() && !EmptyDefRouter())
    {
        errBox.information(nullptr, "Error", "Invaild Default Router");
        return;
    }
    else if (!CheckBios() && !EmptyBios())

    {
        errBox.information(nullptr, "Error", "Invaild NetBIOS");
        return;
    }
    else if (!CheckLease() && !EmptyLease())

    {
        errBox.information(nullptr, "Error", "Invaild Lease Time");
        return;
    }

    ConfigStore += Upload();
    ClearBox();
}

void Dhcp::on_clearBtn_clicked()
{
    ClearBox();
}

void Dhcp::on_exitBtn_clicked()
{
    this->close();
}

///////////Exclude List////////////
void Dhcp::on_addBtn_clicked()
{
    excludeList.push_back(GetExAddress());
    ClearEx();
}
///////////////////////////////////
