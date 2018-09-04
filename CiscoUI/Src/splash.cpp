#include "splash.h"
#include "ui_splash.h"

Splash::Splash(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::Splash)
{
    ui->setupUi(this);
    this->setWindowTitle("Welcome");
}

Splash::~Splash()
{
    delete ui;
}
