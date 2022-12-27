#pragma once

#include<iostream>
#include<QMap>
using namespace std;

class AssetManagerDBServiceInterface
{
public:

    virtual void update(QMap<QString,QString>)=0;
    virtual void Delete()=0;
    virtual void createtable()=0;
    virtual QVector<QString> GetName()=0;
    virtual QString GetType(int)=0;
    virtual QString GetDescription(int)=0;
    virtual QString GetSerialNum(int)=0;
    virtual QString GetManufacturer(int)=0;
    virtual QString GetModel(int)=0;
    virtual QString GetOwner(int)=0;
    virtual QString GetCondition(int)=0;
    virtual QString GetLocation(int)=0;
    virtual QString GetSite(int)=0;


};
