#ifndef HOME_H
#define HOME_H

#include <QWidget>

namespace Ui {
class home;
}

class home : public QWidget
{
    Q_OBJECT

public:
    explicit home(QWidget *parent = nullptr);
    ~home();

private:
    Ui::home *ui;

public slots:
    void openManageWindow();
};

#endif // HOME_H
