#include "errorhandeling.h"
#include "ui_errorhandeling.h"

ErrorHandeling::ErrorHandeling(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ErrorHandeling)
{
    ui->setupUi(this);
}

ErrorHandeling::~ErrorHandeling()
{
    delete ui;
}
