#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QDir>
#include <QTextStream>
#include <QDebug>
#include <QString>
#include <QMessageBox>

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
    void on_pushButton_read_clicked();

    void on_pushButton_write_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_copy_clicked();

    void on_pushButton_rename_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
