#include "home.h"
#include "ui_home.h"
#include "widget.h"

home::home(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);

    widget *w = new widget;
    ui->stackedWidget->insertWidget(1, w);
}

home::~home()
{
    delete ui;
}

void home::openManageWindow()
{
    ui->stackedWidget->setCurrentIndex(1);
}
