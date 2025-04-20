#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

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

    void on_comboBox_1_currentIndexChanged(int index);

    void on_comboBox_1_currentTextChanged(const QString &arg1);

    void on_pushButton_clicked();

    void comboBox_2_Index_Event(int index);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
