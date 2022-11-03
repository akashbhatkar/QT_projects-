#include "addbookss.h"
#include "ui_addbookss.h"
#include<QMessageBox>


QVector<QString> badd;
QVector<int> qadd;

int cnt=0,cnt1=0;
addbookss::addbookss(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addbookss)
{
    ui->setupUi(this);
}

addbookss::~addbookss()
{
    delete ui;
}

int addbookss::trysearch(QString str)
{
    cnt1=0;

    for(int i=0;i<badd.size();i++)
       {
           if(str==badd[i])
               cnt1++;
       }
       if(cnt1==0)
           return 0;
       else
           return 1;
}

void addbookss::issuesearched(QString book)
{
     for(int i=0;i<badd.size();i++)
     {
         if(book==badd[i])
         {
         if(qadd[i]<=0)
         {
             QMessageBox::warning(this,"warning","no more books available in library");
         }
         else
         {
             qadd[i]=qadd[i]-1;
         }
         }
     }
}


void addbookss::on_pushButton_add_clicked()
{
    QString u=ui->lineEdit_book->text();

    int i;
    i=ui->comboBox_addbook->currentIndex();

    badd.push_back(u);
    if(i==0)
    {
       QMessageBox::warning(this,"Warning","select the quantity first");

    }
    else
    {
    qadd.push_back(i);
    cnt++;
    ui->lineEdit_book->clear();
    //ui->comboBox_addbook->clearEditText();

    }

}
void addbookss::returnsearched(QString book)
{
    for(int i=0;i<badd.size();i++)
    {
        if(book==badd[i])
        {
            qadd[i]=qadd[i]+1;
        }
    }
}
