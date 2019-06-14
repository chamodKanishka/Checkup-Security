#include "emergency.h"
#include "ui_emergency.h"

Emergency::Emergency(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Emergency)
{
    ui->setupUi(this);
}

Emergency::~Emergency()
{
    delete ui;
}
