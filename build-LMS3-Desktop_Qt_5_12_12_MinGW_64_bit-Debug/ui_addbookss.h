/********************************************************************************
** Form generated from reading UI file 'addbookss.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOKSS_H
#define UI_ADDBOOKSS_H

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

class Ui_addbookss
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_book;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_addbook;
    QPushButton *pushButton_add;

    void setupUi(QDialog *addbookss)
    {
        if (addbookss->objectName().isEmpty())
            addbookss->setObjectName(QString::fromUtf8("addbookss"));
        addbookss->resize(422, 331);
        layoutWidget = new QWidget(addbookss);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 70, 233, 95));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_book = new QLineEdit(layoutWidget);
        lineEdit_book->setObjectName(QString::fromUtf8("lineEdit_book"));

        horizontalLayout->addWidget(lineEdit_book);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox_addbook = new QComboBox(layoutWidget);
        comboBox_addbook->addItem(QString());
        comboBox_addbook->addItem(QString());
        comboBox_addbook->addItem(QString());
        comboBox_addbook->addItem(QString());
        comboBox_addbook->addItem(QString());
        comboBox_addbook->addItem(QString());
        comboBox_addbook->addItem(QString());
        comboBox_addbook->addItem(QString());
        comboBox_addbook->addItem(QString());
        comboBox_addbook->addItem(QString());
        comboBox_addbook->addItem(QString());
        comboBox_addbook->setObjectName(QString::fromUtf8("comboBox_addbook"));

        horizontalLayout_2->addWidget(comboBox_addbook);


        verticalLayout_2->addLayout(horizontalLayout_2);

        pushButton_add = new QPushButton(layoutWidget);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));

        verticalLayout_2->addWidget(pushButton_add);


        retranslateUi(addbookss);

        QMetaObject::connectSlotsByName(addbookss);
    } // setupUi

    void retranslateUi(QDialog *addbookss)
    {
        addbookss->setWindowTitle(QApplication::translate("addbookss", "Dialog", nullptr));
        label->setText(QApplication::translate("addbookss", "Book Name", nullptr));
        label_2->setText(QApplication::translate("addbookss", "Quantity", nullptr));
        comboBox_addbook->setItemText(0, QApplication::translate("addbookss", "Select", nullptr));
        comboBox_addbook->setItemText(1, QApplication::translate("addbookss", "1", nullptr));
        comboBox_addbook->setItemText(2, QApplication::translate("addbookss", "2", nullptr));
        comboBox_addbook->setItemText(3, QApplication::translate("addbookss", "3", nullptr));
        comboBox_addbook->setItemText(4, QApplication::translate("addbookss", "4", nullptr));
        comboBox_addbook->setItemText(5, QApplication::translate("addbookss", "5", nullptr));
        comboBox_addbook->setItemText(6, QApplication::translate("addbookss", "6", nullptr));
        comboBox_addbook->setItemText(7, QApplication::translate("addbookss", "7", nullptr));
        comboBox_addbook->setItemText(8, QApplication::translate("addbookss", "8", nullptr));
        comboBox_addbook->setItemText(9, QApplication::translate("addbookss", "9", nullptr));
        comboBox_addbook->setItemText(10, QApplication::translate("addbookss", "10", nullptr));

        pushButton_add->setText(QApplication::translate("addbookss", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addbookss: public Ui_addbookss {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOKSS_H
