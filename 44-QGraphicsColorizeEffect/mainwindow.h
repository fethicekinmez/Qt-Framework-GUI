#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsColorizeEffect>
#include <QColorDialog>

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
    void on_pushButton_choose_color_clicked();

    void on_doubleSpinBox_valueChanged(double arg1);

private:
    Ui::MainWindow *ui;

    QGraphicsColorizeEffect *colorize_Effect;
};
#endif // MAINWINDOW_H
