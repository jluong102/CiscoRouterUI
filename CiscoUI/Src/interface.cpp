#include "interface.h"
#include "ui_interface.h"

Interface::Interface(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::Interface)
{
    ui->setupUi(this);
    this->setWindowTitle("Interfaces");
    ClearBox();

    //Setup Stuff
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

Interface::~Interface()
{
    delete ui;
}

bool Interface::ValidInterface()
{
   if(ui->interfaceBox->text() == NULL)
       return false;
   else
       return true;
}

void Interface::ClearBox()
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
    ui->descripBox->clear();
    ui->shutBox->setChecked(true);
    ui->clockCheck->setChecked(false);
    ui->clockCombo->setHidden(true);
}

bool Interface::CheckAddress()
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

bool Interface::EmptyAddress()
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

std::string Interface::Upload()  //Sets Data
{
    std::string addString;
    addString += "!Interface!\n";
    addString += Basic::GlobalConfig();
    addString += "Interface " + ui->interfaceBox->text().toStdString() + "\n";

    if (!EmptyAddress())
        addString += "Ip address " + GetAddress() + "\n";

    if (ui->shutBox->isChecked() == true)
        addString += "Shutdown\n";
    else
        addString += "No Shutdown\n";

    if (ui->duplexCombo->currentIndex() == 2)
        addString += "Duplex Full\n";
    else if (ui->duplexCombo->currentIndex() == 1)
        addString += "Duplex Half\n";
    else
        addString += "Duplex Auto\n";

    if (ui->speedCombo->currentIndex() == 0)
        addString += "Speed Auto\n";
    else if (ui->speedCombo->currentIndex() == 1)
        addString += "Speed 10\n";
    else if (ui->speedCombo->currentIndex() == 2)
        addString += "Speed 100\n";
    else
        addString += "Speed 1000\n";

    if (ui->descripBox->text() != NULL)
        addString += "Description " + ui->descripBox->text().toStdString() + "\n";

    if (ui->clockCheck->isChecked() == true)
    {
        addString += "Clock Rate ";
        switch (ui->clockCombo->currentIndex())
        {
        case 0:
            addString += "1200\n";
            break;
        case 1:
            addString += "2400\n";
            break;
        case 2:
            addString += "4800\n";
            break;
        case 3:
            addString += "9600\n";
            break;
        case 4:
            addString += "19200\n";
            break;
        case 5:
            addString += "38400\n";
            break;
        case 6:
            addString += "56000\n";
            break;
        case 7:
            addString += "64000\n";
            break;
        case 8:
            addString += "72000\n";
            break;
        case 9:
            addString += "125000\n";
            break;
        case 10:
            addString += "148000\n";
            break;
        case 11:
            addString += "250000\n";
            break;
        case 12:
            addString += "500000\n";
            break;
        case 13:
            addString += "800000\n";
            break;
        case 14:
            addString += "1000000\n";
            break;
        case 15:
            addString += "1300000\n";
            break;
        case 16:
            addString += "2000000\n";
            break;
        default:
            addString += "4000000\n";
        }

    }


    addString += Basic::LastMode() + Basic::Logout();
    return addString;
}

std::string Interface::GetAddress()
{
    return ui->ipBox1->text().toStdString() +  "." + ui->ipBox2->text().toStdString() + "." + ui->ipBox3->text().toStdString() + "." +
            ui->ipBox4->text().toStdString() + " " +
            ui->subBox1->text().toStdString() + "." + ui->subBox2->text().toStdString() + "." + ui->subBox3->text().toStdString() + "." +
            ui->subBox4->text().toStdString();
}

void Interface::on_configBtn_clicked() //Run Checks Before Upload
{
    if (!ValidInterface())
    {
      errBox.information(nullptr, "Error", "Invalid Interface");
      return;
    }
    else if (!CheckAddress() && !EmptyAddress())
    {
       errBox.information(nullptr, "Error", "Invalid Ip Address or Subnet");
       return;
    }

    ConfigStore += Upload();
    ClearBox();
    //errBox.information(0, "Updated", "Config Updated"); <-Used For Testing, Not Needed, but could be readded

}

void Interface::on_exitBtn_clicked()
{
    this->close();
}



void Interface::on_clearBtn_clicked()
{
    ClearBox();
}

void Interface::on_clockCheck_stateChanged()
{
    if (ui->clockCheck->isChecked() == true)
         ui->clockCombo->setHidden(false);
    else
         ui->clockCombo->setHidden(true);
}
