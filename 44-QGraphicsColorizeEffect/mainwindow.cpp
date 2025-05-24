#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent) , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    colorize_Effect = new QGraphicsColorizeEffect();
    ui->label_image->setGraphicsEffect(colorize_Effect);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_choose_color_clicked()
{
    QColor selectedColor = QColorDialog::getColor();
    colorize_Effect->setColor(selectedColor);
}


void MainWindow::on_doubleSpinBox_valueChanged(double arg1)
{
   colorize_Effect->setStrength(arg1);
}

