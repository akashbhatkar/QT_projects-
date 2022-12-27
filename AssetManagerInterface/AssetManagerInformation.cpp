#include "AssetManagerInformation.h"
#include "assetmainwindow.h"
#include<QDebug>
#include"Database_files/AssetManagerDBService.h"
#include<memory>

AssetManagerDBServiceInterface *ptrDB=AssetManagerDBService::CreateInstance();
AssetManagerInformation::AssetManagerInformation(AssetManagerDBServiceInterface *ptr)
{

}

AssetManagerInformation::AssetManagerInformation()
{


}

QVector<QString> AssetManagerInformation::GetAssetName()
{
QVector<QString>v;
// return ptrDB->GetName(num);
v=ptrDB->GetName();
for(int i=0;i<v.size();i++)
{
    qDebug()<<v[i]<<" ";
}
}


QString AssetManagerInformation::GetAssetType(int num)
{
 return ptrDB->GetType(num);
}

QString AssetManagerInformation::GetAssetModel(int num)
{
return ptrDB->GetModel(num);
}

QString AssetManagerInformation::GetAssetSerialNum(int num)
{
return ptrDB->GetSerialNum(num);
}

QString AssetManagerInformation::GetAssetDescription(int num)
{
return ptrDB->GetDescription(num);
}

QString AssetManagerInformation::GetManufacturer(int num)
{
return ptrDB->GetManufacturer(num);
}

QString AssetManagerInformation::GetAssetOwner(int num)
{
    return ptrDB->GetOwner(num);
}

QString AssetManagerInformation::GetAssetCondition(int num)
{
    return ptrDB->GetCondition(num);
}

QString AssetManagerInformation::GetAssetLocation(int num)
{
    return ptrDB->GetLocation(num);
}

QString AssetManagerInformation::GetAssetSite(int num)
{
    return ptrDB->GetSite(num);
}



void AssetManagerInformation::save(QMap<QString,QString> m)
{
    qDebug()<<"Save Function"<<endl;
  m1=m;

  ptrDB->createtable();
   ptrDB->update(m1);

}
