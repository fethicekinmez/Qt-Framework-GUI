#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QMessageBox>
#include <QAction>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_actionSub_Item_1_Menu_1_triggered();

    void on_actionSub_Item_2_Menu_1_triggered();

    void on_actionSub_Item_3_Menu_1_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
