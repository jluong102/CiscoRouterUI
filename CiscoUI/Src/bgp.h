#ifndef BGP_H
#define BGP_H

#include <QWidget>
#include "global.h"

namespace Ui {
class Bgp;
}

class Bgp : public QWidget, public Check::AddressChecks
{
    Q_OBJECT

public:
    explicit Bgp(QWidget *parent = nullptr);
    ~Bgp();

private slots:
    void on_exitBtn_clicked();

    void on_clearBtn_clicked();

    void on_configBtn_clicked();

private:
    Ui::Bgp *ui;
    QMessageBox errBox;

    void ClearBox();
    bool CheckAsNum();
    bool CheckRouteProc();
    bool CheckNeighbor();
    bool CheckNetwork();
    bool CheckMask();
    bool EmptyAsNum();
    bool EmptyRouteProc();
    bool EmptyNeighbor();
    bool EmptyNetwork();
    bool EmptyMask();
    bool EmptyLoop();
    std::string Upload();
    std::string GetNetwork();
    std::string GetNeighbor();
    std::string GetMask();
};

#endif // BGP_H
