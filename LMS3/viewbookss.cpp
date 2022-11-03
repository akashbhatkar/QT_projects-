#include "viewbookss.h"
#include "ui_viewbookss.h"
#include<QTabWidget>
#include<QTableWidgetItem>
#include<QListWidget>
#include<QListWidgetItem>

viewbookss::viewbookss(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewbookss)
{
    ui->setupUi(this);

}
viewbookss::~viewbookss()
{
    delete ui;
}


void viewbookss::showdata(QVector<QString> v1,QVector<int> v2, int cnt)
{
    int k=0;
//    QListWidgetItem *item =ui->listWidget->currentItem();
//    //item=new QListWidgetItem();
//    for( i=0;i<cnt;i++)
//    {
//        //item->setText(v2[i]);
//        ui->listWidget->addItem(v2[i]);
//    }


         QTableWidget *table=new QTableWidget(this);

            table->setRowCount(cnt);//
            table->setColumnCount(2);//
            this->setFocus();
            QStringList hlablels;
            hlablels<<"Books Name"<<"Quantity";
            table->setHorizontalHeaderLabels(hlablels);

            for(int i=0;i<table->rowCount();i++)
            {
                QTableWidgetItem *item;

                for(int j=0;j<table->columnCount();j++)
                {
                    item=new QTableWidgetItem();
                    if(j==0)
                item->setText(v1[i]);
                    if((j==1)&&(v2[i]!=0))

                 item->setData(0,v2[i]);
                table->setItem(i,j,item);
                k++;
                }

            }

}
