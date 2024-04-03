#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlTableModel>
#include <QStackedWidget>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class widget; }
QT_END_NAMESPACE

class widget : public QWidget
{
    Q_OBJECT

public:
    widget(QWidget *parent = nullptr);
    ~widget();

    QPushButton *getEndButton();

private:
    Ui::widget *ui;

    QSqlTableModel *model;
    QSqlDatabase db;

public slots:
    void addPokemon();
    void removePokemon();
    void saveDB();
};
#endif // WIDGET_H
