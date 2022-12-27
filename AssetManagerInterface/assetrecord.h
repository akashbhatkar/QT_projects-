#ifndef ASSETRECORD_H
#define ASSETRECORD_H

#include <QDialog>
#include<Database_files/AssetManagerDBService.h>
#include<QPdfWriter>
#include<QPainter>
#include"AssetReport.h"
#include<QSqlQueryModel>


namespace Ui {
class AssetRecord;
}

class AssetRecord : public QDialog
{
    Q_OBJECT

public:
    explicit AssetRecord(QWidget *parent = nullptr);
    ~AssetRecord();
    void showrecord();
private:
    Ui::AssetRecord *ui;
   AssetReport* arr=new AssetReport();
   QSqlQueryModel *model=new QSqlQueryModel();


private slots:
    void passrecord();

};

#endif // ASSETRECORD_H
