#ifndef VIEWUSER_H
#define VIEWUSER_H

#include <QDialog>

namespace Ui {
class viewuser;
}

class viewuser : public QDialog
{
    Q_OBJECT

public:
    explicit viewuser(QWidget *parent = nullptr);
    ~viewuser();
    void showstudents(QSet<QString>,int);

private:
    Ui::viewuser *ui;
};

#endif // VIEWUSER_H
