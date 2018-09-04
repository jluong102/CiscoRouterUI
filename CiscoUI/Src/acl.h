#ifndef ACL_H
#define ACL_H

#include <QWidget>
#include "global.h"
#include "vector"

namespace Ui {
class Acl;
}

class Acl : public QWidget, public Check::AddressChecks
{
    Q_OBJECT

public:
    explicit Acl(QWidget *parent = nullptr);
    ~Acl();

    static std::vector<uint16_t> AclList;

private slots:
    void on_configBtn_clicked();

    void on_clearBtn_clicked();

    void on_exitBtn_clicked();

    void on_hostCheck_stateChanged();

    void on_anyCheck_stateChanged();

private:
    Ui::Acl *ui;
    QMessageBox errBox;

    void ClearBox();
    void SetBox();
    bool CheckAcl();
    bool CheckAddress();
    bool CheckWild();
    bool EmptyAddress();
    bool EmptyWild();
    std::string Upload();
    std::string GetAddress();
    std::string GetWild();
};

#endif // ACL_H
