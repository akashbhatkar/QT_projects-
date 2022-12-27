#include "assetrecord.h"
#include "ui_assetrecord.h"
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QTableWidget>
#include<QTableWidgetItem>
#include"AssetManagerInformation.h"
QVector<QString> van;
AssetManagerInformation *am=new AssetManagerInformation();
AssetRecord::AssetRecord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AssetRecord)
{
    ui->setupUi(this);
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(passrecord()));
}

AssetRecord::~AssetRecord()
{
    delete ui;
}

void AssetRecord::showrecord()
{
   AssetManagerDBService *p=AssetManagerDBService::CreateInstance();
   p->db.open();


  QSqlQuery *query=new QSqlQuery(p->db);
  query->prepare("select * from data");

  query->exec();
  model->setQuery(*query);
  ui->tableView->setModel(model);
  //p->db.close();

//QVector<QString> vname;
//    QTableWidget *table=new QTableWidget(this);

//       table->setRowCount(15);//
//       table->setColumnCount(12);//
//       this->setFocus();
//       QStringList hlablels;
//       hlablels<<"Asset Name"<<"Type"<<"Description"<<"Serial Number"<<"Manufacturer"<<"Model"<<"Owner"<<"condition"<<"Location"<<"Site";
//       table->setHorizontalHeaderLabels(hlablels);

//       for(int i=0;i<table->rowCount();i++)
//       {
//           QTableWidgetItem *item;
//            vname=  am->GetAssetName();
//           for(int j=0;j<table->columnCount();j++)
//           {
//               item=new QTableWidgetItem();
//               if(j==0)
//               {


//               }
//           item->setText(v1[i]);
//               if((j==1)&&(v2[i]!=0))

//            item->setData(0,v2[i]);
//           table->setItem(i,j,item);
//           k++;
//           }

//       }
//}
}
void AssetRecord::passrecord()
{
    int y=model->columnCount();
    int select=ui->tableView->selectionModel()->currentIndex().row();
    QString str[100];
    for(int i=0;i<y;i++)
    {
        str[i]=ui->tableView->model()->data(ui->tableView->model()->index(select,i)).toString();
    }
    arr->generatepdf(y,str);

}



