/********************************************************************************
** Form generated from reading UI file 'returnbook.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNBOOK_H
#define UI_RETURNBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_returnbook
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_SID;
    QPushButton *pushButton_search;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox_selectbook;
    QPushButton *pushButton_returnbook;

    void setupUi(QDialog *returnbook)
    {
        if (returnbook->objectName().isEmpty())
            returnbook->setObjectName(QString::fromUtf8("returnbook"));
        returnbook->resize(400, 300);
        widget = new QWidget(returnbook);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 20, 261, 171));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_SID = new QLineEdit(widget);
        lineEdit_SID->setObjectName(QString::fromUtf8("lineEdit_SID"));

        horizontalLayout->addWidget(lineEdit_SID);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_search = new QPushButton(widget);
        pushButton_search->setObjectName(QString::fromUtf8("pushButton_search"));

        verticalLayout->addWidget(pushButton_search);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        comboBox_selectbook = new QComboBox(widget);
        comboBox_selectbook->setObjectName(QString::fromUtf8("comboBox_selectbook"));

        horizontalLayout_2->addWidget(comboBox_selectbook);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_returnbook = new QPushButton(widget);
        pushButton_returnbook->setObjectName(QString::fromUtf8("pushButton_returnbook"));

        verticalLayout_2->addWidget(pushButton_returnbook);


        retranslateUi(returnbook);

        QMetaObject::connectSlotsByName(returnbook);
    } // setupUi

    void retranslateUi(QDialog *returnbook)
    {
        returnbook->setWindowTitle(QApplication::translate("returnbook", "Dialog", nullptr));
        label->setText(QApplication::translate("returnbook", "                            Return Book ", nullptr));
        label_2->setText(QApplication::translate("returnbook", "Student ID", nullptr));
        pushButton_search->setText(QApplication::translate("returnbook", "Search", nullptr));
        label_3->setText(QApplication::translate("returnbook", "Select Book", nullptr));
        pushButton_returnbook->setText(QApplication::translate("returnbook", "Return book", nullptr));
    } // retranslateUi

};

namespace Ui {
    class returnbook: public Ui_returnbook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNBOOK_H
