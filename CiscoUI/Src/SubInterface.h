#ifndef SUBINTERFACE_H
#define SUBINTERFACE_H

#include <QWidget>
#include "global.h"

namespace Ui {
class SubInterface;
}

class SubInterface : public QWidget, private Check::AddressChecks
{
    Q_OBJECT

public:
    explicit SubInterface(QWidget *parent = nullptr);
    ~SubInterface();

private slots:
    void on_configBtn_clicked();

    void on_exitBtn_clicked();

    void on_clearBtn_clicked();

private:
    Ui::SubInterface *ui;
    QMessageBox errBox;

    void ClearBox();
    bool ValidInterface();
    bool CheckAddress();
    bool EmptyAddress();
    std::string Upload();
    std::string GetAddress();
};

#endif // SUBINTERFACE_H
