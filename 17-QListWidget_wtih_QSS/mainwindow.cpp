#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QIcon icon = QApplication::style()->standardPixmap(QStyle::SP_DirLinkIcon);
    for(int i=1; i<=10; i++){
        ui->listWidget->addItem("Item-" + QString::number(i));
        ui->listWidget->item(i-1)->setIcon(icon);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
