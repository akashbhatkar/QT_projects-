#include "assetmainwindow.h"
#include <QApplication>
//#include"Database_files/AssetManagerDBService.h"
#include"AssetManagerInformation.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AssetMainWindow w;
//    AssetManagerDBServiceInterface *ptrDB=AssetManagerDBService::CreateInstance();
//    AssetManagerInterface *assetInfo =new AssetManagerInformation(ptrDB);
//    assetInfo->save(w.m);
//    AssetReport obj(assetInfo);
//    obj.createReport();


    w.show();
    return a.exec();
}
