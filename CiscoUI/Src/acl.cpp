#include "acl.h"
#include "ui_acl.h"

std::vector<std::uint16_t> Acl::AclList;

Acl::Acl(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::Acl)
{
    ui->setupUi(this);
    this->setWindowTitle("ACL");

    ui->aclBox->setMaxLength(4);
    ui->ipBox1->setMaxLength(3);
    ui->ipBox2->setMaxLength(3);
    ui->ipBox3->setMaxLength(3);
    ui->ipBox4->setMaxLength(3);
    ui->wildBox1->setMaxLength(3);
    ui->wildBox2->setMaxLength(3);
    ui->wildBox3->setMaxLength(3);
    ui->wildBox4->setMaxLength(3);

    ClearBox();
}

Acl::~Acl()
{
    delete ui;
}

void Acl::ClearBox()
{
    ui->aclBox->clear();
    ui->ipBox1->clear();
    ui->ipBox2->clear();
    ui->ipBox3->clear();
    ui->ipBox4->clear();
    ui->wildBox1->clear();
    ui->wildBox2->clear();
    ui->wildBox3->clear();
    ui->wildBox4->clear();
    ui->permitCheck->setChecked(true);
    ui->hostCheck->setChecked(false);
    ui->anyCheck->setChecked(false);
    ui->disableCheck->setChecked(false);

    SetBox();
}

void Acl::SetBox()
{
    if (ui->hostCheck->isChecked())
    {
        //ui->anyCheck->setChecked(false);
        ui->ipBox1->setReadOnly(true);
        ui->ipBox2->setReadOnly(true);
        ui->ipBox3->setReadOnly(true);
        ui->ipBox4->setReadOnly(true);
        ui->wildBox1->setReadOnly(false);
        ui->wildBox2->setReadOnly(false);
        ui->wildBox3->setReadOnly(false);
        ui->wildBox4->setReadOnly(false);
    }
    else if (ui->anyCheck->isChecked())
    {
        //ui->hostCheck->setChecked(false);
        ui->ipBox1->setReadOnly(true);
        ui->ipBox2->setReadOnly(true);
        ui->ipBox3->setReadOnly(true);
        ui->ipBox4->setReadOnly(true);
        ui->wildBox1->setReadOnly(true);
        ui->wildBox2->setReadOnly(true);
        ui->wildBox3->setReadOnly(true);
        ui->wildBox4->setReadOnly(true);
    }
    else
    {
        ui->ipBox1->setReadOnly(false);
        ui->ipBox2->setReadOnly(false);
        ui->ipBox3->setReadOnly(false);
        ui->ipBox4->setReadOnly(false);
        ui->wildBox1->setReadOnly(false);
        ui->wildBox2->setReadOnly(false);
        ui->wildBox3->setReadOnly(false);
        ui->wildBox4->setReadOnly(false);
    }
}

bool Acl::CheckAcl()
{
    if ((ui->aclBox->text().toShort() > 99 && ui->aclBox->text().toShort() != 1300 &&
            ui->aclBox->text().toShort() != 1999) || ui->aclBox->text().toShort() < 0 ||
            ui->aclBox->text() == NULL)
        return false;
    else
        return true;
}

bool Acl::CheckAddress()
{
    if (ui->ipBox1->text() == NULL ||
            ui->ipBox2->text() == NULL ||
            ui->ipBox3->text() == NULL ||
            ui->ipBox4->text() == NULL ||
            ui->ipBox1->text().toShort() > 255 ||
            ui->ipBox2->text().toShort() > 255 ||
            ui->ipBox3->text().toShort() > 255 ||
            ui->ipBox4->text().toShort() > 255 ||
            ui->ipBox1->text().toShort() < 0 ||
            ui->ipBox2->text().toShort() < 0 ||
            ui->ipBox3->text().toShort() < 0 ||
            ui->ipBox4->text().toShort() < 0)
        return false;
    else
        return true;
}

bool Acl::CheckWild()
{
    if (ui->wildBox1->text() == NULL ||
            ui->wildBox2->text() == NULL ||
            ui->wildBox3->text() == NULL ||
            ui->wildBox4->text() == NULL ||
            ui->wildBox1->text().toShort() > 255 ||
            ui->wildBox2->text().toShort() > 255 ||
            ui->wildBox3->text().toShort() > 255 ||
            ui->wildBox4->text().toShort() > 255 ||
            ui->wildBox1->text().toShort() < 0 ||
            ui->wildBox2->text().toShort() < 0 ||
            ui->wildBox3->text().toShort() < 0 ||
            ui->wildBox4->text().toShort() < 0)
        return false;
    else if (!CheckWildCard(ui->wildBox1->text().toShort(), ui->wildBox2->text().toShort(),
                                   ui->wildBox3->text().toShort(), ui->wildBox4->text().toShort()))
        return false;
    else
        return true;
}

bool Acl::EmptyAddress()
{
    if (ui->ipBox1->text() == NULL &&
            ui->ipBox2->text() == NULL &&
            ui->ipBox3->text() == NULL &&
            ui->ipBox4->text() == NULL)
        return true;
    else
        return false;
}

bool Acl::EmptyWild()
{
    if (ui->wildBox1->text() == NULL &&
            ui->wildBox2->text() == NULL &&
            ui->wildBox3->text() == NULL &&
            ui->wildBox4->text() == NULL)
        return true;
    else
        return false;
}

std::string Acl::GetAddress()
{
    return ui->ipBox1->text().toStdString() + "." + ui->ipBox2->text().toStdString() + "." + ui->ipBox3->text().toStdString() + "." +
            ui->ipBox4->text().toStdString();
}

std::string Acl::GetWild()
{
    return ui->wildBox1->text().toStdString() + "." + ui->wildBox2->text().toStdString() + "." + ui->wildBox3->text().toStdString() + "." +
            ui->wildBox4->text().toStdString();
}

std::string Acl::Upload()
{
    std::string addString;

    addString += "!ACL!";
    addString += Basic::GlobalConfig();

    if (ui->disableCheck->isChecked())
        return addString + "No Access-List " + ui->aclBox->text().toStdString() + "\n" + Basic::LastMode();

    addString += "Access-List " + ui->aclBox->text().toStdString();
    AclList.push_back(ui->aclBox->text().toUShort());// <- For Link Check

    if(ui->permitCheck->isChecked())
        addString += " Permit ";
    else
        addString += " Deny ";

    if (ui->anyCheck->isChecked())
        addString += "Any ";
    else if (ui->hostCheck->isChecked())
        addString += "Host ";
    else
        addString += GetAddress() + " ";

    if (!ui->anyCheck->isChecked())
        addString += GetWild();

    addString += "\n";
    addString += Basic::LastMode();
    return addString;
}

void Acl::on_configBtn_clicked()
{
    if(!CheckAcl())
    {
        errBox.information(nullptr, "Error", "Invaild Acl Number");
        return;
    }
    else if (!CheckAddress() && !ui->hostCheck->isChecked() && !ui->anyCheck->isChecked() && !ui->disableCheck->isChecked())
    {
        errBox.information(nullptr, "Error", "Invaild Ip Address");
        return;
    }
    else if (!CheckWild() && !ui->anyCheck->isChecked() && !ui->disableCheck->isChecked())
    {
        errBox.information(nullptr, "Error", "Invaild Wildcard Address");
        return;
    }

    ConfigStore += Upload();
    ClearBox();
}

void Acl::on_clearBtn_clicked()
{
    ClearBox();
}

void Acl::on_exitBtn_clicked()
{
    this->close();
}

///////////////////////////////
void Acl::on_hostCheck_stateChanged()
{
    SetBox();
    ui->anyCheck->setChecked(false);
}

void Acl::on_anyCheck_stateChanged()
{
    SetBox();
    ui->hostCheck->setChecked(false);
}
///////////////////////////////
