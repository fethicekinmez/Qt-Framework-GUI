#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);

    for(int i=1; i<=10; i++){
        QIcon icon = QApplication::style()->standardPixmap(QStyle::SP_DirIcon);
        ui->listWidget_1->addItem("Item-" + QString::number(i));
        ui->listWidget_1->item(i-1)->setIcon(icon);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_listWidget_1_itemDoubleClicked(QListWidgetItem *item){
    qInfo() << item->text() << " double clicked";

}

