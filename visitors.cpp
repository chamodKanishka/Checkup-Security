#include "visitors.h"
#include "ui_visitors.h"

Visitors::Visitors(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Visitors)
{
    ui->setupUi(this);
}

Visitors::~Visitors()
{
    delete ui;
}
