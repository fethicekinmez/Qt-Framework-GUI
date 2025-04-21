#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);
    ui->tableWidget->setRowCount(70);
    for(int i=0; i<70; i++){
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString("Qt-0-") + QString::number(i)));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString("Qt-1-") + QString::number(i)));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString("Qt-2-") + QString::number(i)));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
