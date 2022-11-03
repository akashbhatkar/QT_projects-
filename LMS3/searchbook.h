#ifndef SEARCHBOOK_H
#define SEARCHBOOK_H

#include <QDialog>
//#include"addbookss.h"
namespace Ui {
class searchbook;
}

class searchbook : public QDialog
{
    Q_OBJECT

public:
    explicit searchbook(QWidget *parent = nullptr);
    ~searchbook();
    //int trysearch(QString);

private slots:
    void on_pushButton_searchbook_clicked();

private:
    Ui::searchbook *ui;
};

#endif // SEARCHBOOK_H
