#ifndef STATICROUTE_H
#define STATICROUTE_H

#include <QWidget>
#include "Global.h"

namespace Ui {
class StaticRoute;
}

class StaticRoute : public QWidget
{
    Q_OBJECT

public:
    explicit StaticRoute(QWidget *parent = 0);
    ~StaticRoute();

private slots:
    void on_exitBtn_clicked();

    void on_clearBtn_clicked();

    void on_configBtn_clicked();

    void on_intBtn_clicked();

    void on_ipBtn_clicked();

private:
    Ui::StaticRoute *ui;
    QMessageBox* errBox;

    void ClearBox();
    void SwitchBox();
    std::string Upload();
    std::string GetAddress();
    bool CheckAddress();
    bool EmptyAddress();
};

#endif // STATICROUTE_H
