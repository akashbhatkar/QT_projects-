#include "appmainpage.h"
#include "ui_appmainpage.h"
#include"addbookss.cpp"
#include"adduser.cpp"

appmainpage::appmainpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::appmainpage)
{
    ui->setupUi(this);
}

appmainpage::~appmainpage()
{
    delete ui;
}

void appmainpage::on_pushButton_6_ab_clicked()
{
    ab= new addbookss();
    ab->show();
}

void appmainpage::on_pushButton_5_au_clicked()
{
    au=new adduser();
    au->show();
}

void appmainpage::on_pushButton_vb_clicked()
{
    vb=new viewbookss();
    vb->showdata(badd,qadd,cnt);
    vb->show();
}

void appmainpage::on_pushButton_3_sb_clicked()
{
    sb=new searchbook();
    sb->show();
}

void appmainpage::on_pushButton_2_vu_clicked()
{
    vu=new viewuser();
    vu->showstudents(user,user.size());
    vu->show();
}

void appmainpage::on_pushButton_rb_clicked()
{
   rb=new returnbook();
   rb->show();
}
