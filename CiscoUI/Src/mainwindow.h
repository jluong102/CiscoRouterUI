#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Global.h"
#include "interface.h"
#include "config.h"
#include "setup.h"
#include "StaticRoute.h"
#include "eigrp.h"
#include "ospf.h"
#include "bgp.h"
#include "dhcp.h"
#include "nat.h"
#include "acl.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_toolButton_clicked();

    void on_InterfaceBtn_clicked();

    void on_uploadBtn_clicked();

    void on_setupBtn_clicked();

    void on_staticBtn_clicked();

    void on_eigrpBtn_clicked();

    void on_ospfBtn_clicked();

    void on_bgpBtn_clicked();

    void on_dhcpBtn_clicked();

    void on_natBtn_clicked();

    void on_alcBtn_clicked();

private:
    Ui::MainWindow *ui;
    Interface* interFrm = new Interface();
    Setup* setupFrm = new Setup();
    StaticRoute* staticFrm = new StaticRoute();
    Eigrp* eigrpFrm = new Eigrp();
    Ospf* ospfFrm = new Ospf();
    Bgp* bgpFrm = new Bgp();
    Dhcp* dhcpFrm = new Dhcp();
    Nat* natFrm = new Nat();
    Acl* aclFrm = new Acl();
};

#endif // MAINWINDOW_H
