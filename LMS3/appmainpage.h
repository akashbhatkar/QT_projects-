#ifndef APPMAINPAGE_H
#define APPMAINPAGE_H

#include <QDialog>
#include"addbookss.h"
#include"adduser.h"
#include"viewbookss.h"
#include"searchbook.h"
#include"viewuser.h"
#include"returnbook.h"

namespace Ui {
class appmainpage;
}

class appmainpage : public QDialog
{
    Q_OBJECT

public:
    explicit appmainpage(QWidget *parent = nullptr);
    ~appmainpage();

private slots:
    void on_pushButton_6_ab_clicked();

    void on_pushButton_5_au_clicked();

    void on_pushButton_vb_clicked();

    void on_pushButton_3_sb_clicked();

    void on_pushButton_2_vu_clicked();

    void on_pushButton_rb_clicked();

private:
    Ui::appmainpage *ui;
    addbookss *ab;
    adduser *au;
    viewbookss *vb;
    searchbook *sb;
    viewuser *vu;
   returnbook *rb;
};

#endif // APPMAINPAGE_H
