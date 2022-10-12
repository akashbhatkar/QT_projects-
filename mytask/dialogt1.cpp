#include "dialogt1.h"
#include "ui_dialogt1.h"
#include<QTableWidget>
#include<QTableWidgetItem>


Dialogt1::Dialogt1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogt1)
{
    ui->setupUi(this);

}

Dialogt1::~Dialogt1()
{
    delete ui;
}

void Dialogt1::setdata(QVector<QString> v2, int cnt)
{
int k=0;

     QTableWidget *table=new QTableWidget(this);

        table->setRowCount(cnt);
        table->setColumnCount(2);
        this->setFocus();
        QStringList hlablels;
        hlablels<<"name" << "skills";
        table->setHorizontalHeaderLabels(hlablels);

        for(int i=0;i<cnt;i++)
        {
            QTableWidgetItem *item;
            for(int j=0;j<2;j++)
            {
                item=new QTableWidgetItem();
                if(j==0)
                    item->setText(v2[k++]);
                if(j==1)
                    item->setText(v2[k++]);

                table->setItem(i,j,item);
            }
       }

}
