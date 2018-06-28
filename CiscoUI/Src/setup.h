#ifndef SETUP_H
#define SETUP_H

#include <QWidget>
#include "global.h"

namespace Ui {
class Setup;
}

class Setup : public QWidget
{
    Q_OBJECT

public:
    explicit Setup(QWidget *parent = 0);
    ~Setup();

private slots:
    void on_exitBtn_clicked();

    void on_configBtn_clicked();

    void on_clearBtn_clicked();

private:
    Ui::Setup *ui;
    QMessageBox errBox;

    std::string Upload();
    std::string GetAddress();
    bool CheckIp();
    bool EmptyAddress();
    //bool AllEmpty();
    void ClearBox();

};

#endif // SETUP_H
