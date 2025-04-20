#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);

    for(int i=1; i<=15; i++){
        ui->comboBox_2->addItem("Number-" + QString::number(i));
    }

    QObject::connect(ui->comboBox_2, SIGNAL(currentIndexChanged(int)), this, SLOT(comboBox_2_Index_Event(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_1_currentIndexChanged(int index){

    qInfo() << "Selected Index: " << index;
}


void MainWindow::on_comboBox_1_currentTextChanged(const QString &arg1){
    qInfo() << "Selected Text: " << arg1;
}


void MainWindow::on_pushButton_clicked(){
    ui->comboBox_1->setCurrentIndex(2);
}

void MainWindow::comboBox_2_Index_Event(int index){
    qInfo() << "Event number: " << index;
}

