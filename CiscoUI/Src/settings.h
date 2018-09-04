#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include "global.h"
#include "config.h"

namespace Ui {
class Settings;
}

class Settings : public QWidget
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();

private slots:
    void on_saveBtn_clicked();

    void on_exitBtn_clicked();

    void on_comPortCheck_stateChanged();

private:
    Ui::Settings *ui;
    QMessageBox errBox;

    void ClearBox();
    void SetDefaults();
    void SetPassword();
    void Update();
    bool EmptySave();
    bool EmptyComPort();
    bool EmptyPassword();
    void SetAppend();
};

#endif // SETTINGS_H
