#pragma once

#include<iostream>
#include"AssetManagerDBServiceInterface.h"
#include<QSqlDatabase>
#include<QDebug>
#include<qsqlquery.h>
#include<QSqlRecord>
const QString path="assetdatabase.db";
using namespace std;

class AssetManagerDBService:public AssetManagerDBServiceInterface
{

private:
    static AssetManagerDBService* service;
    AssetManagerDBService();



    ~AssetManagerDBService();
public:
    static AssetManagerDBService *CreateInstance();

       void update(QMap<QString,QString>);
       void Delete();
       void createtable();
       virtual QVector<QString> GetName();
       virtual QString GetType(int);
       virtual QString GetDescription(int);
       virtual QString GetSerialNum(int);
       virtual QString GetManufacturer(int);
       virtual QString GetModel(int);
       virtual QString GetOwner(int);
       virtual QString GetCondition(int);
       virtual QString GetLocation(int);
       virtual QString GetSite(int);
      QSqlDatabase db;
};
