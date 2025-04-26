#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Start_clicked()
{
    LoadingScreen *loadingScreen = new LoadingScreen(this);
    this->hide();
    loadingScreen->show();
    qApp->processEvents(QEventLoop::AllEvents);
    loadingScreen->startLoading();
}

