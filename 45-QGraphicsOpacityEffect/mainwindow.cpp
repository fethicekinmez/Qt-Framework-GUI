#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    opacity_Effect = new QGraphicsOpacityEffect();
    ui->label_image->setGraphicsEffect(opacity_Effect);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_doubleSpinBox_valueChanged(double arg1)
{
    opacity_Effect->setOpacity(arg1);
}

