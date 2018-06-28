#include "nat.h"
#include "ui_nat.h"

Nat::Nat(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::Nat)
{
    ui->setupUi(this);
    this->setWindowTitle("NAT");

    ui->nameBox->setMaxLength(10);
    ui->startBox1->setMaxLength(3);
    ui->startBox2->setMaxLength(3);
    ui->startBox3->setMaxLength(3);
    ui->startBox4->setMaxLength(3);
    ui->endBox1->setMaxLength(3);
    ui->endBox2->setMaxLength(3);
    ui->endBox3->setMaxLength(3);
    ui->endBox4->setMaxLength(3);
    ui->aclBox->setMaxLength(4);

    ClearBox();
}

Nat::~Nat()
{
    delete ui;
}

void Nat::ClearBox()
{
    ui->nameBox->clear();
    ui->startBox1->clear();
    ui->startBox2->clear();
    ui->startBox3->clear();
    ui->startBox4->clear();
    ui->endBox1->clear();
    ui->endBox2->clear();
    ui->endBox3->clear();
    ui->endBox4->clear();
    ui->subBox1->clear();
    ui->subBox2->clear();
    ui->subBox3->clear();
    ui->subBox4->clear();
    ui->aclBox->clear();
}

bool Nat::CheckStart()
{
    if (ui->startBox1->text() == NULL ||
            ui->startBox2->text() == NULL ||
            ui->startBox3->text() == NULL ||
            ui->startBox4->text() == NULL ||
            ui->startBox1->text().toShort() > 255 ||
            ui->startBox1->text().toShort() > 255 ||
            ui->startBox1->text().toShort() > 255 ||
            ui->startBox1->text().toShort() > 255 ||
            ui->startBox1->text().toShort() < 0 ||
            ui->startBox2->text().toShort() < 0 ||
            ui->startBox3->text().toShort() < 0 ||
            ui->startBox4->text().toShort() < 0)
        return false;
    else
        return true;
}

bool Nat::CheckEnd()
{
    if (ui->endBox1->text() == NULL ||
            ui->endBox2->text() == NULL ||
            ui->endBox3->text() == NULL ||
            ui->endBox4->text() == NULL ||
            ui->endBox1->text().toShort() > 255 ||
            ui->endBox2->text().toShort() > 255 ||
            ui->endBox3->text().toShort() > 255 ||
            ui->endBox4->text().toShort() > 255 ||
            ui->endBox1->text().toShort() < 0 ||
            ui->endBox2->text().toShort() < 0 ||
            ui->endBox3->text().toShort() < 0 ||
            ui->endBox4->text().toShort() < 0)
        return false;
    else
        return true;
}

bool Nat::CheckSub()
{
    if(ui->subBox1->text() == NULL ||
            ui->subBox2->text() == NULL ||
            ui->subBox3->text() == NULL ||
            ui->subBox4->text() == NULL ||
            ui->subBox1->text().toShort() > 255 ||
            ui->subBox2->text().toShort() > 255 ||
            ui->subBox3->text().toShort() > 255 ||
            ui->subBox4->text().toShort() > 255 ||
            ui->subBox1->text().toShort() < 0 ||
            ui->subBox2->text().toShort() < 0 ||
            ui->subBox3->text().toShort() < 0 ||
            ui->subBox4->text().toShort() < 0)
        return false;
    else
        return true;
}

bool Nat::CheckLink()
{
    for (auto i : Acl::AclList)
    {
        if(ui->aclBox->text().toShort() == i)
            return true;
    }
    return false;
}

bool Nat::EmptyLink()
{
    if(ui->aclBox->text() == NULL)
        return true;
    else
        return false;
}

std::string Nat::GetStart()
{
    return ui->startBox1->text().toStdString() + "." + ui->startBox2->text().toStdString() + "." + ui->startBox3->text().toStdString() + "." +
            ui->startBox4->text().toStdString();
}

std::string Nat::GetEnd()
{
    return ui->endBox1->text().toStdString() + "." + ui->endBox2->text().toStdString() + "." + ui->endBox3->text().toStdString() + "." +
            ui->endBox4->text().toStdString();
}

std::string Nat::GetSub()
{
    return ui->subBox1->text().toStdString() + "." + ui->subBox2->text().toStdString() + "." + ui->subBox3->text().toStdString() + "." +
            ui->subBox4->text().toStdString();
}

std::string Nat::Upload()
{
    std::string addString;

    addString += "!NAT!";
    addString += Basic::GlobalConfig();

    addString += "Ip NAT Pool " + ui->nameBox->text().toStdString() + " " + GetStart() + " " + GetEnd() + " Netmask " + GetSub() + "\n";

    if (!EmptyLink())
        addString += "Ip NAT Inside Source List " + ui->aclBox->text().toStdString() + " Pool " + ui->nameBox->text().toStdString() + "\n";

    addString += Basic::Logout();
    return addString;
}

void Nat::on_configBtn_clicked()
{
    if (ui->nameBox->text() == NULL)
    {
        errBox.information(0, "Error", "Invaild Address Pool Name");
        return;
    }
    else if (!CheckStart())
    {
        errBox.information(0, "Error", "Invaild Start Address");
        return;
    }
    else if (!CheckEnd())
    {
        errBox.information(0, "Error", "Invaild End Address");
        return;
    }
    else if (!CheckSub())
    {
        errBox.information(0, "Error", "Invaild Subnet");
        return;
    }
    else if (!CheckLink() && !EmptyLink())
    {
        errBox.information(0, "Error", "Invaild ACL");
        return;
    }

    ConfigStore += Upload();
    ClearBox();
}

void Nat::on_clearBtn_clicked()
{
    ClearBox();
}

void Nat::on_exitBtn_clicked()
{
    this->close();
}
