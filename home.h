#ifndef HOME_H
#define HOME_H

#include <QWidget>
#include <QStackedWidget>
#include <QPushButton>

namespace Ui {
class home;
}

class home : public QWidget
{
    Q_OBJECT

public:
    explicit home(QWidget *parent = nullptr);
    ~home();

    QPushButton *getManagePKButton();

private:
    Ui::home *ui;
};

#endif // HOME_H
