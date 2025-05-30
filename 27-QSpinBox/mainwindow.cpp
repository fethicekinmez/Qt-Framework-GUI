#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked(){
    QMessageBox::information(this, "Qt", QString::number(ui->spinBox->value()));
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::information(this, "Qt", QString::number(ui->doubleSpinBox->value()));
}

