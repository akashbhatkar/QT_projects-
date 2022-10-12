#ifndef DIALOGT1_H
#define DIALOGT1_H

#include <QDialog>
#include<vector>
#include<memory>
namespace Ui {
class Dialogt1;
}

class Dialogt1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogt1(QWidget *parent = nullptr);
    ~Dialogt1();
        void setdata(QVector<QString>,int);

private:
    Ui::Dialogt1 *ui;
//    void tableWIdgetDisplay(QVector<QString> v2,QVector<QString> v3,int cnt);

};

#endif // DIALOGT1_H
