#include "startingpage.h"
#include "ui_startingpage.h"

StartingPage::StartingPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StartingPage)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);
}

StartingPage::~StartingPage()
{
    delete ui;
}

void StartingPage::on_pushButton_Start_clicked()
{
    this->hide();
    MainWindow *loadingScreen = new MainWindow();
    loadingScreen->show();
    qApp->processEvents(QEventLoop::AllEvents);
    loadingScreen->startLoading();
}

