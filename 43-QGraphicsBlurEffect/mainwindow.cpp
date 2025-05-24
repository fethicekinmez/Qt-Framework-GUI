#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    blur_Effect = new QGraphicsBlurEffect();
    blur_Effect->setBlurRadius(0);
    blur_Effect->setBlurHints(QGraphicsBlurEffect::BlurHint::QualityHint);

    ui->groupBox->setGraphicsEffect(blur_Effect);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_spinBox_valueChanged(int arg1){

    qDebug() << "Strength: " << arg1;
    blur_Effect->setBlurRadius(arg1);

}

