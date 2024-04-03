#ifndef MANAGEWINDOWS_H
#define MANAGEWINDOWS_H

#include <QWidget>

namespace Ui {
class manageWindows;
}

class manageWindows : public QWidget
{
    Q_OBJECT

public:
    explicit manageWindows(QWidget *parent = nullptr);
    ~manageWindows();

private:
    Ui::manageWindows *ui;

public slots:
    void openPKManager();
    void openMenu();
};

#endif // MANAGEWINDOWS_H
