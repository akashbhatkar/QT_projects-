#include "AssetReport.h"
#include<QDebug>
#include"AssetManagerInformation.h"
#include<memory>
QString data[100];
unique_ptr< AssetManagerInformation> ai(new AssetManagerInformation());
AssetReport::AssetReport()
{

}

void AssetReport::generatepdf(int num,QString v[])
{
    qDebug()<<"generate pdf function";

    QPdfWriter mypdf("D:/Asset_pfd's/mypdf.pdf");
    QPainter mypainter(&mypdf);

    for(int i=0;i<num;i++)
        {
            data[i]=v[i];
        }
    mypainter.drawText(100,400,"Asset Name");
    mypainter.drawText(1000,400,"AssetType");//breadth,length,Name
    mypainter.drawText(1800,400,"AssetDescription");
    mypainter.drawText(3000,400,"AssetSerialNum");
    mypainter.drawText(4000,400,"Manufacturer");
    mypainter.drawText(5000,400,"AssetModel");
    mypainter.drawText(6000,400,"AssetOwner");
    mypainter.drawText(7000,400,"Condition");
    mypainter.drawText(8000,400,"Location");
    mypainter.drawText(9000,400,"Site");
    mypainter.drawText(5000,1400,"Image");


    mypainter.setPen(Qt::blue);
    mypainter.drawText(100,600,data[1]);//ai->GetAssetName(num));
    mypainter.drawText(1000,600,data[2]);//ai->GetAssetType(num));
    mypainter.drawText(1800,600,data[3]);//ai->GetAssetDescription(num));
    mypainter.drawText(3000,600,data[4]);//ai->GetAssetSerialNum(num));
    mypainter.drawText(4000,600,data[5]);//ai->GetManufacturer(num));
    mypainter.drawText(5000,600,data[6]);//ai->GetAssetModel(num));
    mypainter.drawText(6000,600,data[7]);//ai->GetAssetOwner(num));
    mypainter.drawText(7000,600,data[8]);//ai->GetAssetCondition(num));
    mypainter.drawText(8000,600,data[9]);//ai->GetAssetLocation(num));
    mypainter.drawText(9000,600,data[10]);//ai->GetAssetSite(num));
    QPixmap pic(data[11]);
    mypainter.drawPixmap(5000,1600,pic);

    mypainter.end();
}
