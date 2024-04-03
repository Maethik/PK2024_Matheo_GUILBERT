#include "managewindows.h"
#include "ui_managewindows.h"
#include "widget.h"
#include "home.h"

manageWindows::manageWindows(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::manageWindows)
{
    ui->setupUi(this);

    home *menu = new home;
    widget *managePK = new widget;

    ui->stackedWidget->insertWidget(0, menu);
    ui->stackedWidget->insertWidget(1, managePK);

    ui->stackedWidget->setCurrentIndex(0);

    connect(menu->getManagePKButton(), SIGNAL(clicked()), this, SLOT(openPKManager()));
    connect(managePK->getEndButton(), SIGNAL(clicked()), this, SLOT(openMenu()));
}

manageWindows::~manageWindows()
{
    delete ui;
}

void manageWindows::openPKManager()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void manageWindows::openMenu()
{
    ui->stackedWidget->setCurrentIndex(0);
}
