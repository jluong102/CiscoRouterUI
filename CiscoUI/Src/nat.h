#ifndef NAT_H
#define NAT_H

#include <QWidget>
#include "global.h"
#include "acl.h" //For Linking ACL's

namespace Ui {
class Nat;
}

class Nat : public QWidget
{
    Q_OBJECT

public:
    explicit Nat(QWidget *parent = 0);
    ~Nat();

private slots:
    void on_configBtn_clicked();

    void on_clearBtn_clicked();

    void on_exitBtn_clicked();

private:
    Ui::Nat *ui;
    QMessageBox errBox;

    void ClearBox();
    bool CheckStart();
    bool CheckEnd();
    bool CheckSub();
    bool CheckLink();
    /*bool EmptyStart();
    bool EmptyEnd();
    bool EmptySub();*/ //Not Needed
    bool EmptyLink(); //For Acl
    std::string Upload();
    std::string GetStart();
    std::string GetEnd();
    std::string GetSub();
};

#endif // NAT_H
