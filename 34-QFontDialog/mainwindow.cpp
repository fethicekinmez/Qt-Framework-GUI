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

void MainWindow::on_pushButton_Font_clicked()
{
    bool isOk = false;
    QFont fontValue = QFontDialog::getFont(&isOk, this);
    ui->textEdit->setFont(fontValue);
}

