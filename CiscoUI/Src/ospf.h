#ifndef OSPF_H
#define OSPF_H

#include <QWidget>
#include "global.h"

namespace Ui {
class Ospf;
}

class Ospf : public QWidget
{
    Q_OBJECT

public:
    explicit Ospf(QWidget *parent = 0);
    ~Ospf();

private slots:
    void on_exitBtn_clicked();

    void on_clearBtn_clicked();

    void on_configBtn_clicked();

    void on_addPassBtn_clicked();

    void on_removePassBtn_clicked();

    void on_defaultPassCheck_stateChanged();

    void on_propCheck_stateChanged();

private:
    Ui::Ospf *ui;
    QMessageBox errBox;

    bool CheckArea();
    bool CheckProcId();
    bool CheckWild();
    bool CheckId();  //Router ID
    bool CheckAddress();
    bool CheckPass();  //Passive Interface
    bool CheckBandwidth();
    bool EmptyAddress();
    bool EmptyArea();
    bool EmptyProcId();
    bool EmptyWild();
    bool EmptyId();
    bool EmptyBandwidth();
    std::string Upload();
    std::string GetAddress();
    std::string GetId(); //Router ID
    std::string GetPassInterface();
    void ClearBox();
    void SetPassive();
    void SetProp();

    std::string passStr;

};

#endif // OSPF_H
