#include "bgp.h"
#include "ui_bgp.h"

Bgp::Bgp(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::Bgp)
{
    ui->setupUi(this);
    this->setWindowTitle("BGP");

    ui->routeProcBox->setMaxLength(5);  //2 BYTEs
    ui->neighborBox1->setMaxLength(3);
    ui->neighborBox2->setMaxLength(3);
    ui->neighborBox3->setMaxLength(3);
    ui->neighborBox4->setMaxLength(3);
    ui->asNumBox->setMaxLength(5);  //2 BYTEs
    ui->netBox1->setMaxLength(3);
    ui->netBox2->setMaxLength(3);
    ui->netBox3->setMaxLength(3);
    ui->netBox4->setMaxLength(3);
    ui->maskBox1->setMaxLength(3);
    ui->maskBox2->setMaxLength(3);
    ui->maskBox3->setMaxLength(3);
    ui->maskBox4->setMaxLength(3);
    ui->loopBox->setMaxLength(15);

    ClearBox();
}

Bgp::~Bgp()
{
    delete ui;
}

void Bgp::ClearBox()
{
    ui->routeProcBox->clear();
    ui->neighborBox1->clear();
    ui->neighborBox2->clear();
    ui->neighborBox3->clear();
    ui->neighborBox4->clear();
    ui->asNumBox->clear();
    ui->netBox1->clear();
    ui->netBox2->clear();
    ui->netBox3->clear();
    ui->netBox4->clear();
    ui->maskBox1->clear();
    ui->maskBox2->clear();
    ui->maskBox3->clear();
    ui->maskBox4->clear();
    ui->loopBox->clear();
    ui->disableCheck->setChecked(false);
}

bool Bgp::CheckRouteProc()
{
    if(ui->routeProcBox->text().toLong() > WORDRANGE || ui->routeProcBox->text().toLong() < 0)
        return false;
    else
        return true;
}

bool Bgp::CheckNeighbor()
{
    if(ui->neighborBox1->text().toShort() > 255 ||
            ui->neighborBox2->text().toShort() > 255 ||
            ui->neighborBox3->text().toShort() > 255 ||
            ui->neighborBox4->text().toShort() > 255 ||
            ui->neighborBox1->text() == NULL ||
            ui->neighborBox2->text() == NULL ||
            ui->neighborBox3->text() == NULL ||
            ui->neighborBox4->text() == NULL)
        return false;
    else
        return true;
}

bool Bgp::CheckAsNum()
{
    if(ui->asNumBox->text().toLong() > WORDRANGE || ui->asNumBox->text().toLong() < 0)
        return false;
    else
        return true;
}

bool Bgp::CheckNetwork()
{
    if(ui->netBox1->text().toShort() > 255 ||
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

bool Bgp::CheckMask()
{
    if(ui->maskBox1->text().toShort() > 255 ||
            ui->maskBox2->text().toShort() > 255 ||
            ui->maskBox3->text().toShort() > 255 ||
            ui->maskBox4->text().toShort() > 255 ||
            ui->maskBox1->text() == NULL ||
            ui->maskBox2->text() == NULL ||
            ui->maskBox3->text() == NULL ||
            ui->maskBox4->text() == NULL)
        return false;
    else if (!CheckSubnet(ui->maskBox1->text().toShort(), ui->maskBox2->text().toShort(),
                       ui->maskBox3->text().toShort(), ui->maskBox4->text().toShort()))
        return false;
    else
        return true;
}

bool Bgp::EmptyRouteProc()
{
    if(ui->routeProcBox->text() == NULL)
        return true;
    else
        return false;
}

bool Bgp::EmptyNeighbor()
{
    if(ui->neighborBox1->text() == NULL &&
            ui->neighborBox2->text() == NULL &&
            ui->neighborBox3->text() == NULL &&
            ui->neighborBox4->text() == NULL)
        return true;
    else
        return false;
}

bool Bgp::EmptyAsNum()
{
    if (ui->asNumBox->text() == NULL)
          return true;
    else
          return false;
}

bool Bgp::EmptyNetwork()
{
    if(ui->netBox1->text() == NULL &&
            ui->netBox2->text() == NULL &&
            ui->netBox3->text() == NULL &&
            ui->netBox4->text() == NULL)
        return true;
    else
        return false;
}

bool Bgp::EmptyMask()
{
    if(ui->maskBox1->text() == NULL &&
            ui->maskBox2->text() == NULL &&
            ui->maskBox3->text() == NULL &&
            ui->maskBox4->text() == NULL)
        return true;
    else
        return false;
}

bool Bgp::EmptyLoop()
{
    if (ui->loopBox->text() == NULL)
        return false;
    else
        return true;
}

std::string Bgp::GetNeighbor()
{
    return ui->neighborBox1->text().toStdString() + "." + ui->neighborBox2->text().toStdString() + "." + ui->neighborBox3->text().toStdString() + "." +
            ui->neighborBox4->text().toStdString();
}

std::string Bgp::GetNetwork()
{
    return ui->netBox1->text().toStdString() + "." + ui->netBox2->text().toStdString() + "." + ui->netBox3->text().toStdString() + "." +
            ui->netBox4->text().toStdString();
}

std::string Bgp::GetMask()
{
    return ui->maskBox1->text().toStdString() + "." + ui->maskBox2->text().toStdString() + "." + ui->maskBox3->text().toStdString() + "." +
            ui->maskBox4->text().toStdString();
}

std::string Bgp::Upload()
{
    std::string addString;

    addString += "!BGP!\n";
    addString += Basic::GlobalConfig();

    if (ui->disableCheck->isChecked())
        return addString += "No Router BGP " +  ui->routeProcBox->text().toStdString() + "\n";
    else
        addString += "Router BGP " +  ui->routeProcBox->text().toStdString() + "\n";

    if (!EmptyNeighbor())                          //Spaces Needed
    {
        addString += "Neighbor " + GetNeighbor() + " Remote-AS " + ui->asNumBox->text().toStdString();

        if (!EmptyLoop())
                addString += " Update-Source" + ui->loopBox->text().toStdString();
        addString += "\n";
    }

    if (!EmptyNetwork())
    {
        addString += "Network " + GetNetwork();

        if (!EmptyMask())
            addString += " Mask " + GetMask();
        addString += "\n";
    }

    addString += Basic::LastMode();
    addString += Basic::Logout();
    return addString;
}

void Bgp::on_configBtn_clicked()
{
    if (!CheckRouteProc() || EmptyRouteProc())
    {
        errBox.information(nullptr, "Error", "Invaild Router Process");
        return;
    }
    else if (!CheckNeighbor() && !EmptyNeighbor() && !CheckAsNum() && !EmptyAsNum())
    {
        errBox.information(nullptr, "Error", "Invaild Neighbor Address or AS Number");
        return;
    }
    else if (!CheckNetwork() && !EmptyNetwork())
    {
        errBox.information(nullptr, "Error", "Invaild Network Address");
        return;
    }
    else if (!CheckNetwork() && !EmptyNetwork() && !CheckMask() && !EmptyMask())
    {
        errBox.information(nullptr, "Error", "Invaild Network Mask");
        return;
    }

    ConfigStore += Upload();
    ClearBox();
}

void Bgp::on_exitBtn_clicked()
{
    this->close();
}

void Bgp::on_clearBtn_clicked()
{
    ClearBox();
}

