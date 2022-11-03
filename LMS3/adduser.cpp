#include "adduser.h"
#include "ui_adduser.h"
#include<QSet>

QSet <QString> user;
adduser::adduser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adduser)
{
    ui->setupUi(this);

}

int adduser::trystudent(QString student)
{
//    for(int i=0;i<user.size();i++)
//    {
//        if(student!=user.])
//    }
    //user.
    if(user.contains(student))
    {
        return 1;
    }
    else
        return 0;

}

adduser::~adduser()
{
    delete ui;
}

void adduser::on_pushButton_addstudent_clicked()
{
    QString u=ui->lineEdit_addstudent->text();
     user.insert(u);
     ui->lineEdit_addstudent->clear();
}
