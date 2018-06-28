#ifndef INTERFACE_H
#define INTERFACE_H

#include <QWidget>
#include "Global.h"

namespace Ui {
class Interface;
}

class Interface : public QWidget
{
    Q_OBJECT

public:
    explicit Interface(QWidget *parent = 0);
    ~Interface();

private slots:
    void on_configBtn_clicked();

    void on_exitBtn_clicked();

    void on_clearBtn_clicked();

    void on_clockCheck_stateChanged();

private:
    Ui::Interface *ui;
    QMessageBox errBox;

    bool ValidInterface();
    void ClearBox();
    bool CheckAddress();
    bool EmptyAddress();
    std::string Upload();
    std::string GetAddress();


};

#endif // INTERFACE_H
