#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QMessageBox>
#include<vector>
#include<iostream>
#include<QTableWidget>
#include<QTableWidgetItem>

QVector<QString > v2;
int cnt=0;
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
    QString u =ui->lineEdit->text();

    QString v=ui->comboBox->currentText();


    v2.push_back(u);
    v2.push_back(v);
    cnt++;
}

void MainWindow::on_pushButton_2_clicked()
{
   d1=new Dialogt1();
   d1->setdata(v2,cnt);
   d1->show();
}

