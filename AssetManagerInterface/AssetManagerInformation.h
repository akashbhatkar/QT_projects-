#include<iostream>
#include<QString>
#include"AssetManagerInterface.h"
#include"Database_files/AssetManagerDBServiceInterface.h"
#include<QMap>
using namespace std;


class AssetManagerInformation:public AssetManagerInterface
{
private:
    QString AssetName;
    QString AssetDescription;
    QString AssetModel;
    QString AssetSerialNum;
    QString AssetManufacurer;
    QString AssetOwner;
    QString AssetCondition;
    QString AssetLocation;
    QString AssetSite;
    QMap<QString,QString> m1;


public:
    AssetManagerInformation(AssetManagerDBServiceInterface *ptr);
    AssetManagerInformation();
    QVector<QString> GetAssetName();
    QString GetAssetType(int);
    QString GetAssetDescription(int);
    QString GetAssetSerialNum(int);
    QString GetManufacturer(int);
    QString GetAssetModel(int);
    QString GetAssetOwner(int);
    QString GetAssetCondition(int);
    QString GetAssetLocation(int);
    QString GetAssetSite(int);
    void save(QMap<QString,QString>);
};
