#ifndef ADDBOOKSS_H
#define ADDBOOKSS_H

#include <QDialog>


namespace Ui {
class addbookss;
}

class addbookss : public QDialog
{
    Q_OBJECT

public:
    explicit addbookss(QWidget *parent = nullptr);
    int trysearch(QString);
    void issuesearched(QString);
    void returnsearched(QString);
    ~addbookss();



private slots:
   // void on_pushButton_clicked();

    void on_pushButton_add_clicked();

private:
    Ui::addbookss *ui;
};

#endif // ADDBOOKSS_H
