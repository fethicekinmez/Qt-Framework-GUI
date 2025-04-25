#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked(){
    QString text = QInputDialog::getText(this, tr("Get Text Value"), "Enter Text Value:");
    qDebug() << text;
}


void MainWindow::on_pushButton_2_clicked()
{
    QString password = QInputDialog::getText(this, tr("Get Password"), "Enter Password:", QLineEdit::Password);
    qDebug() << password;
}


void MainWindow::on_pushButton_3_clicked()
{
    int value = QInputDialog::getInt(this, tr("Get integer"), "Enter Value:");
    qDebug() << value;
}


void MainWindow::on_pushButton_4_clicked()
{
    double defaultValue = 33.3;
    double maxValue = 100;
    double minValue = 22;
    double decimalPoint = 3;
    double value = QInputDialog::getDouble(this, tr("Get Double"), "Enter Double:", defaultValue, minValue, maxValue, decimalPoint);
    qDebug() << value;
}

