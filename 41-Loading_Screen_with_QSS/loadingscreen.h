#ifndef LOADINGSCREEN_H
#define LOADINGSCREEN_H

#include <QMainWindow>
#include <QThread>

namespace Ui {
class LoadingScreen;
}

class LoadingScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoadingScreen(QWidget *parent = nullptr);
    ~LoadingScreen();

private:
    Ui::LoadingScreen *ui;

public:
    void startLoading();
};

#endif // LOADINGSCREEN_H
