#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "global.h"
#include "interface.h"
#include "config.h"
#include "setup.h"
#include "staticroute.h"
#include "eigrp.h"
#include "ospf.h"
#include "bgp.h"
#include "dhcp.h"
#include "nat.h"
#include "acl.h"
#include "settings.h"
#include "SubInterface.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
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

    void on_settingsBtn_clicked();

    void on_SubInterfaceBtn_clicked();

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
    Settings* settingsFrm = new Settings();
    SubInterface* subIntFrm = new SubInterface();
};

#endif // MAINWINDOW_H
