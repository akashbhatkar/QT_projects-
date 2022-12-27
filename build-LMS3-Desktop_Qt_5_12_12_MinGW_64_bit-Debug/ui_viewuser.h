/********************************************************************************
** Form generated from reading UI file 'viewuser.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWUSER_H
#define UI_VIEWUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_viewuser
{
public:
    QListWidget *listWidget;

    void setupUi(QDialog *viewuser)
    {
        if (viewuser->objectName().isEmpty())
            viewuser->setObjectName(QString::fromUtf8("viewuser"));
        viewuser->resize(400, 300);
        listWidget = new QListWidget(viewuser);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(60, 50, 256, 192));

        retranslateUi(viewuser);

        QMetaObject::connectSlotsByName(viewuser);
    } // setupUi

    void retranslateUi(QDialog *viewuser)
    {
        viewuser->setWindowTitle(QApplication::translate("viewuser", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewuser: public Ui_viewuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWUSER_H
