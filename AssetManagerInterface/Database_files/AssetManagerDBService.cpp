#include"AssetManagerDBService.h"
#include<QMap>

AssetManagerDBService* AssetManagerDBService:: service=nullptr;

AssetManagerDBService::AssetManagerDBService()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(path);

    if (!db.open())
    {
        qDebug() << "Error: connection with database fail";
    }
    else
    {
        qDebug() << "Database: connection ok";
    }
}


AssetManagerDBService::~AssetManagerDBService()
{

}
AssetManagerDBService* AssetManagerDBService::CreateInstance()
{
    if(service == nullptr)
    {
        service=new AssetManagerDBService();
        return service;
    }
    else
        return service;
}

void AssetManagerDBService::update(QMap<QString,QString> m)
{
    QString ch[100];
    int i=0;
    QSqlQuery queryAdd;
    QMap<QString,QString>::iterator it1;
    for( i,it1=m.begin();it1!=m.end();it1++,i++)
    {
        ch[i]= it1.value();
    }
 queryAdd.prepare("INSERT INTO data(Assetname,AssetType,AssetDescription,AssetSrno,AsseManuf,AssetModel,AssetOwner,AssetCondition,AssetLocation,AssetSite,Image) VALUES (:Assetname,:AssetType,:AssetDescription,:AssetSrno,:AsseManuf,:AssetModel,:AssetOwner,:AssetCondition,:AssetLocation,:AssetSite,:Image)");
        queryAdd.bindValue(":Assetname",ch[9]);
        queryAdd.bindValue(":AssetType",ch[8]);
        queryAdd.bindValue(":AssetDescription",ch[2]);
        queryAdd.bindValue(":AssetSrno",ch[7]);
        queryAdd.bindValue(":AsseManuf",ch[0]);
        queryAdd.bindValue(":AssetModel",ch[4]);
        queryAdd.bindValue(":AssetOwner",ch[5]);
        queryAdd.bindValue(":AssetCondition",ch[1]);
        queryAdd.bindValue(":AssetLocation",ch[3]);
        queryAdd.bindValue(":AssetSite",ch[6]);
        queryAdd.bindValue(":Image",ch[10]);

    if(queryAdd.exec())
    {
        qDebug()<< "add success";
    }
    else
    {

        qDebug() << "add user failed: ";
    }
}

void AssetManagerDBService::Delete()
{

}

void AssetManagerDBService::createtable()
{
    QSqlQuery query;
    query.prepare("CREATE TABLE data(id INTEGER PRIMARY KEY, Assetname TEXT,AssetType TEXT, AssetDescription TEXT,AssetSrno TEXT, AsseManuf TEXT, AssetModel TEXT, AssetOwner TEXT,AssetCondition TEXT, AssetLocation TEXT,AssetSite TEXT,Image TEXT);");

    if (!query.exec())
    {
        qDebug() << "Couldn't create the table 'data': one might already exist.";

    }
    else
        qDebug() << "Created table"<<endl;

}

QVector<QString> AssetManagerDBService::GetName()
{
//    QString snum=QString::number(num);
//QSqlQuery query("SELECT AssetName FROM data WHERE id =\'"+snum +"\'");
//query.bindValue(":snum", snum);
//QString Book;
//while (query.next())
//{
//    Book=
//    qDebug()<<"Book= "<<Book;
//}
//return Book;
    QVector<QString> names;
    QSqlQuery query("SELECT * FROM data");
    int id=query.record().indexOf("Assetname");
    QString an;
    while (query.next())
    {
        an=query.value(id).toString();
        names.push_back(an);
    }
    return names;
//    QList<QString> v;
//    QSqlQuery query("SELECT * FROM bookdatatable");
//    int id=query.record().indexOf("Books");
//    QString Book;
//    while (query.next())
//    {
//        Book=query.value(id).toString();
//        v.append(Book);
//    }
//    return v;

}


QString AssetManagerDBService::GetType(int)
{
return "Akash";
}

QString AssetManagerDBService::GetDescription(int)
{
return "Akash";
}

QString AssetManagerDBService::GetSerialNum(int)
{
return "Akash";
}

QString AssetManagerDBService::GetManufacturer(int)
{
return "Akash";
}

QString AssetManagerDBService::GetModel(int)
{
return "Akash";
}

QString AssetManagerDBService::GetOwner(int)
{
return "Akash";
}

QString AssetManagerDBService::GetCondition(int)
{
return "Akash";
}

QString AssetManagerDBService::GetLocation(int)
{
return "Akash";
}

QString AssetManagerDBService::GetSite(int)
{
return "Akash";
}


