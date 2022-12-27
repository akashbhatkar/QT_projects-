/********************************************************************************
** Form generated from reading UI file 'appmainpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPMAINPAGE_H
#define UI_APPMAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_appmainpage
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_vb;
    QPushButton *pushButton_2_vu;
    QPushButton *pushButton_3_sb;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_5_au;
    QPushButton *pushButton_6_ab;
    QPushButton *pushButton_rb;

    void setupUi(QDialog *appmainpage)
    {
        if (appmainpage->objectName().isEmpty())
            appmainpage->setObjectName(QString::fromUtf8("appmainpage"));
        appmainpage->resize(689, 457);
        layoutWidget = new QWidget(appmainpage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 130, 571, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_vb = new QPushButton(layoutWidget);
        pushButton_vb->setObjectName(QString::fromUtf8("pushButton_vb"));

        horizontalLayout->addWidget(pushButton_vb);

        pushButton_2_vu = new QPushButton(layoutWidget);
        pushButton_2_vu->setObjectName(QString::fromUtf8("pushButton_2_vu"));

        horizontalLayout->addWidget(pushButton_2_vu);

        pushButton_3_sb = new QPushButton(layoutWidget);
        pushButton_3_sb->setObjectName(QString::fromUtf8("pushButton_3_sb"));

        horizontalLayout->addWidget(pushButton_3_sb);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_5_au = new QPushButton(layoutWidget);
        pushButton_5_au->setObjectName(QString::fromUtf8("pushButton_5_au"));

        horizontalLayout_2->addWidget(pushButton_5_au);

        pushButton_6_ab = new QPushButton(layoutWidget);
        pushButton_6_ab->setObjectName(QString::fromUtf8("pushButton_6_ab"));

        horizontalLayout_2->addWidget(pushButton_6_ab);

        pushButton_rb = new QPushButton(layoutWidget);
        pushButton_rb->setObjectName(QString::fromUtf8("pushButton_rb"));

        horizontalLayout_2->addWidget(pushButton_rb);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(appmainpage);

        QMetaObject::connectSlotsByName(appmainpage);
    } // setupUi

    void retranslateUi(QDialog *appmainpage)
    {
        appmainpage->setWindowTitle(QApplication::translate("appmainpage", "Dialog", nullptr));
        pushButton_vb->setText(QApplication::translate("appmainpage", "view Books", nullptr));
        pushButton_2_vu->setText(QApplication::translate("appmainpage", "View Users", nullptr));
        pushButton_3_sb->setText(QApplication::translate("appmainpage", "Issue Book ", nullptr));
        pushButton_5_au->setText(QApplication::translate("appmainpage", "Add User", nullptr));
        pushButton_6_ab->setText(QApplication::translate("appmainpage", "Add Book", nullptr));
        pushButton_rb->setText(QApplication::translate("appmainpage", "Return book", nullptr));
    } // retranslateUi

};

namespace Ui {
    class appmainpage: public Ui_appmainpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPMAINPAGE_H
