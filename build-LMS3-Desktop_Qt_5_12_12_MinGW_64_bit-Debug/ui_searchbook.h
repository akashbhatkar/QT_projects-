/********************************************************************************
** Form generated from reading UI file 'searchbook.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHBOOK_H
#define UI_SEARCHBOOK_H

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

class Ui_searchbook
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_bookname;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox_student;
    QPushButton *pushButton_searchbook;

    void setupUi(QDialog *searchbook)
    {
        if (searchbook->objectName().isEmpty())
            searchbook->setObjectName(QString::fromUtf8("searchbook"));
        searchbook->resize(400, 300);
        layoutWidget = new QWidget(searchbook);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 30, 271, 181));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_bookname = new QLineEdit(layoutWidget);
        lineEdit_bookname->setObjectName(QString::fromUtf8("lineEdit_bookname"));

        horizontalLayout->addWidget(lineEdit_bookname);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        comboBox_student = new QComboBox(layoutWidget);
        comboBox_student->addItem(QString());
        comboBox_student->setObjectName(QString::fromUtf8("comboBox_student"));

        horizontalLayout_2->addWidget(comboBox_student);


        verticalLayout_2->addLayout(horizontalLayout_2);

        pushButton_searchbook = new QPushButton(layoutWidget);
        pushButton_searchbook->setObjectName(QString::fromUtf8("pushButton_searchbook"));

        verticalLayout_2->addWidget(pushButton_searchbook);


        retranslateUi(searchbook);

        QMetaObject::connectSlotsByName(searchbook);
    } // setupUi

    void retranslateUi(QDialog *searchbook)
    {
        searchbook->setWindowTitle(QApplication::translate("searchbook", "Dialog", nullptr));
        label->setText(QApplication::translate("searchbook", "                          Search Book", nullptr));
        label_2->setText(QApplication::translate("searchbook", "Book Name   ", nullptr));
        label_3->setText(QApplication::translate("searchbook", "Student ID", nullptr));
        comboBox_student->setItemText(0, QApplication::translate("searchbook", "Select student", nullptr));

        pushButton_searchbook->setText(QApplication::translate("searchbook", "Issue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class searchbook: public Ui_searchbook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHBOOK_H
