#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsDropShadowEffect>

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
    void on_spinBox_x_offset_valueChanged(int arg1);

    void on_spinBox_y_offset_valueChanged(int arg1);

    void on_spinBox_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;

    QGraphicsDropShadowEffect *shadow_Effect;
};
#endif // MAINWINDOW_H
