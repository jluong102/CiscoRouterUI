#ifndef DHCP_H
#define DHCP_H

#include <QWidget>
#include <vector>
#include "global.h"

namespace Ui {
class Dhcp;
}

class Dhcp : public QWidget , public Check::AddressChecks
{
    Q_OBJECT

public:
    explicit Dhcp(QWidget *parent = nullptr);
    ~Dhcp();

private slots:
    void on_configBtn_clicked();

    void on_clearBtn_clicked();

    void on_exitBtn_clicked();

    void on_addBtn_clicked();

    //void on_removeBtn_clicked();

private:
    Ui::Dhcp *ui;
    QMessageBox errBox;

    void ClearBox();
    void ClearEx();
    bool CheckNetwork();
    bool CheckDefRouter();
    bool CheckDns();
    bool CheckBios();
    bool CheckExclude();
    bool CheckLease();
    bool EmptyName();
    bool EmptyNetwork();
    bool EmptyDefRouter();
    bool EmptyDns();
    bool EmptyBios();
    bool EmptyDomain();
    bool EmptyExclude();
    bool EmptyLease();
    std::string Upload();
    std::string GetNetwork();
    std::string GetDefRouter();
    std::string GetDns();
    std::string GetBios();  //NetBIOS
    std::string GetLease();
    std::string GetExAddress(); // For Exclude list;
    std::string GetExList();

    std::vector <std::string> excludeList;
};

#endif // DHCP_H
