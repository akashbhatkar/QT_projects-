#include<iostream>
#include<QMap>
using namespace std;


class AssetManagerInterface
{
public:
    virtual QVector<QString> GetAssetName()=0;
    virtual QString GetAssetType(int)=0;
    virtual QString GetAssetDescription(int)=0;
    virtual QString GetAssetSerialNum(int)=0;
    virtual QString GetManufacturer(int)=0;
    virtual QString GetAssetModel(int)=0;
    virtual QString GetAssetOwner(int)=0;
    virtual QString GetAssetCondition(int)=0;
    virtual QString GetAssetLocation(int)=0;
    virtual QString GetAssetSite(int)=0;
    virtual void save(QMap<QString,QString>)=0;
};

