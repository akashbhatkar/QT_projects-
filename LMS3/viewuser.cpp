#include "viewuser.h"
#include "ui_viewuser.h"
#include<QListWidget>
#include<QListWidgetItem>

viewuser::viewuser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewuser)
{
    ui->setupUi(this);
}

viewuser::~viewuser()
{
    delete ui;
}

void viewuser::showstudents(QSet<QString>v2, int cnt)
{
        QListWidgetItem *item = ui->listWidget->currentItem();
        item=new QListWidgetItem();
        //QSet<QString>
        for( auto str:v2)
        {
            item->setText(str);
            ui->listWidget->addItem(str);
        }

}
