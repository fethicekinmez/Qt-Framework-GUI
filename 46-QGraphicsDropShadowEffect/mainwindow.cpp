#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    shadow_Effect = new QGraphicsDropShadowEffect();
    shadow_Effect->setBlurRadius(30);
    shadow_Effect->setColor(QColor(Qt::red));
    shadow_Effect->setOffset(10, 10);

    ui->label_image->setGraphicsEffect(shadow_Effect);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_spinBox_x_offset_valueChanged(int arg1)
{
    shadow_Effect->setXOffset(arg1);
}


void MainWindow::on_spinBox_y_offset_valueChanged(int arg1)
{
    shadow_Effect->setYOffset(arg1);
}



void MainWindow::on_spinBox_valueChanged(int arg1)
{
    shadow_Effect->setBlurRadius(double(arg1/100));
}

