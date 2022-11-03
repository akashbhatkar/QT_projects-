#ifndef VIEWBOOKSS_H
#define VIEWBOOKSS_H

#include <QDialog>

namespace Ui {
class viewbookss;
}

class viewbookss : public QDialog
{
    Q_OBJECT

public:
    explicit viewbookss(QWidget *parent = nullptr);
    ~viewbookss();
    void showdata(QVector<QString>,QVector<int>,int);

private:
    Ui::viewbookss *ui;
};

#endif // VIEWBOOKSS_H
