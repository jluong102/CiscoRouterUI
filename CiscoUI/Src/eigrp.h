#ifndef EIGRP_H
#define EIGRP_H

#include <QWidget>
#include "global.h"

namespace Ui {
class Eigrp;
}

class Eigrp : public QWidget
{
    Q_OBJECT

public:
    explicit Eigrp(QWidget *parent = 0);
    ~Eigrp();

private slots:
    void on_exitBtn_clicked();

    void on_clearBtn_clicked();

    void on_configBtn_clicked();

    void on_defaultPassCheck_stateChanged();

    void on_addPassBtn_clicked();

    void on_removePassBtn_clicked();

private:
    Ui::Eigrp *ui;
    QMessageBox errBox;

    bool CheckAsNum();
    bool CheckAddress();
    bool CheckWild();
    bool CheckVariance();
    bool CheckRouterID();
    bool EmptyInterface();
    bool EmptyWild();
    bool EmptyAddress();
    bool EmptyId();
    std::string GetAddress();
    std::string GetRouterID();
    std::string Upload();
    void ClearBox();
    void SetRead(); //Sets State of read-only boxes

    std::string passStr; //Used to hold passive interfaces
};

#endif // EIGRP_H
