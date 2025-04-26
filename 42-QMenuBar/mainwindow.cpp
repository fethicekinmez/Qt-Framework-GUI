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

void MainWindow::on_actionSub_Item_1_Menu_1_triggered()
{
    QMessageBox::information(this, "Qt Tutorial", "Item 1 Menu 1");
}


void MainWindow::on_actionSub_Item_2_Menu_1_triggered()
{
    QMessageBox::information(this, "Qt Tutorial", "Item 2 Menu 1");
}


void MainWindow::on_actionSub_Item_3_Menu_1_triggered()
{
    QMessageBox::information(this, "Qt Tutorial", "Item 3 Menu 1");
}

