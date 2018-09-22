#include "SubInterface.h"
#include "ui_subinterface.h"

/*Note that this will still work with normal interfaces
    will probably update later on to only work with one*/

SubInterface::SubInterface(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::SubInterface)
{
    ui->setupUi(this);
    this->setWindowTitle("Subinterface");
    ClearBox();

    ui->interfaceBox->setMaxLength(10);
    ui->ipBox1->setMaxLength(3);
    ui->ipBox2->setMaxLength(3);
    ui->ipBox3->setMaxLength(3);
    ui->ipBox4->setMaxLength(3);
    ui->subBox1->setMaxLength(3);
    ui->subBox2->setMaxLength(3);
    ui->subBox3->setMaxLength(3);
    ui->subBox4->setMaxLength(3);
    ui->descripBox->setMaxLength(30);

}

SubInterface::~SubInterface()
{
    delete ui;
}

void SubInterface::ClearBox()
{
    ui->interfaceBox->clear();
    ui->ipBox1->clear();
    ui->ipBox2->clear();
    ui->ipBox3->clear();
    ui->ipBox4->clear();
    ui->subBox1->clear();
    ui->subBox2->clear();
    ui->subBox3->clear();
    ui->subBox4->clear();
    ui->descripBox->clear();
}

bool SubInterface::ValidInterface()
{
    if (ui->interfaceBox->text() == NULL)
        return false;
    else
        return true;
}

bool SubInterface::CheckAddress()
{
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
    else if (!CheckSubnet(ui->subBox1->text().toShort(), ui->subBox2->text().toShort(),
                      ui->subBox3->text().toShort(), ui->subBox4->text().toShort()))
        return false;
    else
        return true;
}

bool SubInterface::EmptyAddress()
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

std::string SubInterface::GetAddress()
{
    return ui->ipBox1->text().toStdString() +  "." + ui->ipBox2->text().toStdString() + "." + ui->ipBox3->text().toStdString() + "." +
           ui->ipBox4->text().toStdString() + " " +
           ui->subBox1->text().toStdString() + "." + ui->subBox2->text().toStdString() + "." + ui->subBox3->text().toStdString() + "." +
           ui->subBox4->text().toStdString();

}

std::string SubInterface::Upload()
{
    std::string addString;
    addString += "!Subinterface!\n";
    addString += Basic::GlobalConfig();

    addString +=  "Interface " + ui->interfaceBox->text().toStdString() + "\n";

    if (!EmptyAddress())
        addString += "IP Address " + GetAddress() + "\n";

    if (ui->shutBox->isChecked())
        addString += "Shutdown\n";

    if (ui->descripBox->text() != NULL)
        addString += "Description " + ui->descripBox->text().toStdString() + "\n";

    if (ui->dotBox->text() != NULL)
        addString += "Encapsulation Dot1Q " + ui->dotBox->text().toStdString() + "\n";

    if (ui->ipInsideCheck)
        addString += "IP NAT Inside\n";
    else
        addString += "No IP NAT Inside\n";

    addString += Basic::LastMode();
    return addString;
}

void SubInterface::on_clearBtn_clicked()
{
    ClearBox();
}

void SubInterface::on_configBtn_clicked()
{
    if (!ValidInterface())
    {
        errBox.information(nullptr, "Error", "Invalid Interface");
        return;
    }
    else if (!CheckAddress())
    {
        errBox.information(nullptr, "Error", "Invalid Address");
        return;
    }

    ConfigStore += Upload();
    ClearBox();
}

void SubInterface::on_exitBtn_clicked()
{
    this->close();
}
