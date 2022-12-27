#include "assetmainwindow.h"
#include "./ui_assetmainwindow.h"
#include<QDebug>
#include<QMessageBox>
#include<QFileDialog>
#include<QPixmap>
#include"AssetManagerInformation.h"



AssetMainWindow::AssetMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AssetMainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_view,SIGNAL(clicked()),this,SLOT(openwindow()));
    connect(ui->pushButton_save,SIGNAL(clicked()),this,SLOT(saveclicked()));
    connect(ui->pushButton_imageUp,SIGNAL(clicked()),this,SLOT(imageupload()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(ChoseLocation()));
}

AssetMainWindow::~AssetMainWindow()
{
    delete ui;
}

void AssetMainWindow::openwindow()
{
    ar->show();
    ar->showrecord();
}

void AssetMainWindow::saveclicked()
{
    if(ui->lineEdit_an->text()==""||ui->lineEdit_at->text()==""||ui->comboBox__site->currentText()=="Choose Site"||ui->comboBox_loc->currentText()=="Choose Location")
    {
        QMessageBox::warning(this,"Warning","Please fill the mandatory spaces");
    }
    else
    {

    m.insert("AssetSite",ui->comboBox__site->currentText());//9
    m.insert("AssetType",ui->lineEdit_at->text());

    m.insert("AssetSrno",ui->lineEdit_srno->text());//3

    m.insert("AssetLocation",ui->comboBox_loc->currentText());//8

    m.insert("Assetname",ui->lineEdit_an->text());//1
    m.insert("AssetModel",ui->lineEdit_model->text());//5
    m.insert("AssetOwner",ui->lineEdit_owner->text());//6

    m.insert("AssetDescription",ui->lineEdit_ad->text());//2

    m.insert("AsseManuf",ui->lineEdit_mfg->text());//4

    m.insert("AssetCondition",ui->comboBox_cnd->currentText());//7
//    for (const auto &x: m)
//    {

//        qDebug()<<"Map information \n"<<x;
//    }
    AssetManagerInformation *ptr=new AssetManagerInformation();
    ptr->save(m);
     QMessageBox::information(this,"Success","Asset Added Successfully");
}


}
void AssetMainWindow::imageupload()
{
    QString image=QFileDialog::getOpenFileName(this,tr("open file"),"c://","JPG File(*.jpg);;PNG File(X.png");
    ui->label_image->setPixmap(image);
    ui->label_image->setScaledContents(true);
    if(image=="")
    {

        QMessageBox::warning(this,"Warning!","Error Image Not Upload");
    }
    else
    {
        m.insert("Image",image);
        QMessageBox::information(this,"Success","Image upload succesfully");
    }
}


void AssetMainWindow::ChoseLocation()
{
    ui->comboBox__site->clear();
    if(ui->comboBox_loc->currentText()=="Pune")
    {
        ui->comboBox__site->addItem("Choose Site");
        ui->comboBox__site->addItem("Viman Nagar");
        ui->comboBox__site->addItem("Magarpatta");
    }
    else if(ui->comboBox_loc->currentText()=="Hyderabad")
    {
        ui->comboBox__site->addItem("Choose Site");
        ui->comboBox__site->addItem("Somajiguda");
    }
}
