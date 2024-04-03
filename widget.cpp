#include "widget.h"
#include "ui_widget.h"

widget::widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::widget)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./pk2024.db");
    if (db.open()) {
        qDebug() << "OUI";
    } else {
        qDebug() << "NON";
    }

    model=new QSqlTableModel(0, db);
    model->setTable("pokemon");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    model->setHeaderData(0, Qt::Horizontal, tr("Name"));

    ui->tbPokemon->setModel(model);
    ui->tbPokemon->setAlternatingRowColors(true);
}

widget::~widget()
{
    db.close();
    delete ui;
}

void widget::saveDB()
{
    bool flag = model->submitAll();
    if (flag == false)
    {
        qDebug() << "Erreur d'enregistrement de la base de donnée";
    }
}

void widget::addPokemon()
{
    model->insertRows(0, 1);
    model->setData(model->index(0, 0), ui->nameLineEdit->text());
    model->setData(model->index(0, 1), ui->tailleLineEdit->text());
    model->setData(model->index(0, 2), ui->poidsLineEdit->text());
    model->setData(model->index(0, 3), ui->pvSlider->value());
    model->setData(model->index(0, 4), ui->pcSlider->value());
    model->setData(model->index(0, 5), ui->typeComboBox->currentText());

    saveDB();
}

void widget::removePokemon()
{
    model->removeRow(ui->tbPokemon->currentIndex().row());
    saveDB();
}

void widget::endButton()
{}
