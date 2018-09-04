#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent, Qt::FramelessWindowHint),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Cisco Router");

    //Color Palette <- Colors Changed with style sheets
    /*QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::black);
    this->setAutoFillBackground(true);
    this->setPalette(pal);*/
}

MainWindow::~MainWindow()
{
    delete ui;
    delete interFrm;
    delete setupFrm;
    delete staticFrm;
    delete ospfFrm;
    delete eigrpFrm;
    delete bgpFrm;
    delete dhcpFrm;
    delete natFrm;
    delete aclFrm;
    delete settingsFrm;
}

void MainWindow::on_toolButton_clicked()
{
    exit(1);
}

void MainWindow::on_uploadBtn_clicked()
{
    QMessageBox msgUpload;
    SendConfig();
    msgUpload.information(nullptr, "Upload Complete", "Config Uploaded");
}

void MainWindow::on_InterfaceBtn_clicked()
{
    //interFrm = new Interface(); //Uncomment for more windows
    interFrm->show();
}

void MainWindow::on_setupBtn_clicked()
{
    //setupFrm = new Setup();
    setupFrm->show();
}

void MainWindow::on_staticBtn_clicked()
{
    //staticFrm = new StaticRoute();
    staticFrm->show();
}

void MainWindow::on_eigrpBtn_clicked()
{
    //eigrpFrm = new Eigrp();
    eigrpFrm->show();
}

void MainWindow::on_ospfBtn_clicked()
{
    //ospfFrm = new Ospf();
    ospfFrm->show();
}

void MainWindow::on_bgpBtn_clicked()
{
    //bgpFrm = new Bgp();
    bgpFrm->show();
}

void MainWindow::on_dhcpBtn_clicked()
{
    //dhcpFrm = new Dhcp();
    dhcpFrm->show();
}

void MainWindow::on_natBtn_clicked()
{
    //natFrm = new Nat();
    natFrm->show();
}

void MainWindow::on_alcBtn_clicked()
{
    //aclFrm = new Acl();
    aclFrm->show();
}

void MainWindow::on_settingsBtn_clicked()
{
    settingsFrm->show();
}
