#include "home.h"
#include "ui_home.h"
#include "widget.h"

#include <QStackedWidget>
#include <QPushButton>

home::home(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);
}

home::~home()
{
    delete ui;
}

QPushButton *home::getManagePKButton()
{
    return ui->managePokemonsButton;
}
