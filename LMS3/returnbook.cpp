#include "returnbook.h"
#include "ui_returnbook.h"
#include"searchbook.h"
//#include"searchbook.cpp"
#include"addbookss.h"
#include"adduser.h"
#include<QList>
#include<QMessageBox>
QList<QString> value;
QMultiMap<QString,QString> mmp;

returnbook::returnbook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::returnbook)
{
    ui->setupUi(this);

}

void returnbook::filldetails(QString book, QString student)
{
    addbookss abb;
    if(abb.trysearch(book))
    mmp.insert(student,book);


}

returnbook::~returnbook()
{
    delete ui;
}

void returnbook::on_pushButton_search_clicked()
{

//    value=mmp.values(ui->lineEdit_SID->text());
//    QListIterator<QString> iter(value);
//    while(iter.hasNext())
//    {
//        ui->comboBox_selectbook->addItem(iter.next());
//    }








//    foreach (QString v, value)
//    {
//        ui->comboBox_selectbook->currentText();
//    }
//    (int i = 0; i < values.size(); ++i)
//        //cout << values.at(i) << Qt::endl;
//    int i;
//    for(auto &u: value.at(i))
//    {
//    ui->comboBox_selectbook->currentText();
//    }
    adduser au;
    if(au.trystudent(ui->lineEdit_SID->text()))
    {
    QMultiMap<QString, QString>::iterator i = mmp.find(ui->lineEdit_SID->text());
    while (i != mmp.end() && i.key() == ui->lineEdit_SID->text()) {
        //cout << i.value() << Qt::endl;
        ui->comboBox_selectbook->addItem(i.value());
        ++i;
    }
    }
    else
    {
        QMessageBox::warning(this,"Warning","student is not registered with us");
    }
}

void returnbook::on_pushButton_returnbook_clicked()
{

    QString listdata =ui->comboBox_selectbook->currentText();
    QString listcombo =ui->lineEdit_SID->text();
   int i=mmp.remove(listcombo,listdata);
    ui->comboBox_selectbook->clear();
    addbookss rss;
    rss.returnsearched(listdata);


}
