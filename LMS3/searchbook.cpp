#include "searchbook.h"
#include "ui_searchbook.h"
#include"addbookss.h"
#include<QMessageBox>
//#include"addbookss.cpp"
#include"appmainpage.cpp"
#include"adduser.h"
#include"QMultiMap"
#include"returnbook.h"
searchbook::searchbook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::searchbook)
{
    ui->setupUi(this);
    for(auto &u: user)
    {
    ui->comboBox_student->addItem(u);
    }
}

searchbook::~searchbook()
{
    delete ui;
}

void searchbook::on_pushButton_searchbook_clicked()
{
    QString book=ui->lineEdit_bookname->text();
    QString student=ui->comboBox_student->currentText();
    returnbook rb;
    rb.filldetails(book,student);
    if(student=="Select student")
        QMessageBox::warning(this,"warning","student is not selected ");
    else
    {
            addbookss oadd;
        if(oadd.trysearch(book)==0)
          QMessageBox::warning(this,"warning","book is not available");
        else
            oadd.issuesearched(book);
        QMessageBox::information(this,"succesffull","book is issued");
        ui->lineEdit_bookname->clear();

    }


}
