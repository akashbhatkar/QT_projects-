#ifndef ASSETMAINWINDOW_H
#define ASSETMAINWINDOW_H

#include <QMainWindow>
#include"assetrecord.h"
#include<QMap>
#include<memory>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class AssetMainWindow; }
QT_END_NAMESPACE

class AssetMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    AssetMainWindow(QWidget *parent = nullptr);
    ~AssetMainWindow();
    QMap<QString,QString> m;

private slots:
    void openwindow();
        void imageupload();
        void ChoseLocation();
public slots:
        void saveclicked();


private:
    Ui::AssetMainWindow *ui;
//    unique_ptr <AssetRecord>ar(new AssetRecord());
    AssetRecord *ar=new AssetRecord();
};

#endif // ASSETMAINWINDOW_H
