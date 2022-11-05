#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"QMessageBox"

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


void MainWindow::on_pushButton_clicked()
{
    QString username =ui->lineEdit ->text();
    QString password =ui->lineEdit_2->text();

    if((username=="dtiot")&&(password=="1234"))
    {
        ui->stackedWidget->setCurrentIndex(1);

    }
        else {
       QMessageBox::warning(this,"Login","incorrect ID or Password");
    }
}

void MainWindow::on_pushButton_logout_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_6_ab_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
