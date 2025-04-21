#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);
    ui->tableWidget->setRowCount(50);
    for(int i=0; i<50; i++){
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString("Qt-") + QString::number(i)));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString("Qt-") + QString::number(i)));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString("Qt-") + QString::number(i)));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString("Qt-") + QString::number(i)));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tableWidget_cellDoubleClicked(int row, int column){
    qDebug() << "row: " << row << ", column:" << column;
    qDebug() << ui->tableWidget->item(row, column)->text();

}

