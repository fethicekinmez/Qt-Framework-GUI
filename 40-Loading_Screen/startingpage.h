#ifndef STARTINGPAGE_H
#define STARTINGPAGE_H

#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class StartingPage;
}

class StartingPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit StartingPage(QWidget *parent = nullptr);
    ~StartingPage();

private slots:
    void on_pushButton_Start_clicked();

private:
    Ui::StartingPage *ui;
};

#endif // STARTINGPAGE_H
