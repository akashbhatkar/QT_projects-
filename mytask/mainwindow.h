#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include<dialogt1.h>
#include<memory>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();



private:
    Ui::MainWindow *ui;

   Dialogt1 *d1;

};
#endif // MAINWINDOW_H
