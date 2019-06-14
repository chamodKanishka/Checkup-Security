#include "viewvsitors.h"
#include "ui_viewvsitors.h"

ViewVsitors::ViewVsitors(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ViewVsitors)
{
    ui->setupUi(this);
}

ViewVsitors::~ViewVsitors()
{
    delete ui;
}
