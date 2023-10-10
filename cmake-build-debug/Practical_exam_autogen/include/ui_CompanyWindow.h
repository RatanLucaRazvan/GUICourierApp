/********************************************************************************
** Form generated from reading UI file 'companywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPANYWINDOW_H
#define UI_COMPANYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CompanyWindow
{
public:
    QGridLayout *gridLayout;
    QListWidget *allPackagesList;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *recipientLineEdit;
    QLabel *label_2;
    QLineEdit *streetLineEdit;
    QLabel *label_3;
    QLineEdit *numberLineEdit;
    QLabel *label_4;
    QLineEdit *xLineEdit;
    QLabel *label_5;
    QLineEdit *yLineEdit;
    QPushButton *addButton;

    void setupUi(QWidget *CompanyWindow)
    {
        if (CompanyWindow->objectName().isEmpty())
            CompanyWindow->setObjectName("CompanyWindow");
        CompanyWindow->resize(400, 300);
        gridLayout = new QGridLayout(CompanyWindow);
        gridLayout->setObjectName("gridLayout");
        allPackagesList = new QListWidget(CompanyWindow);
        allPackagesList->setObjectName("allPackagesList");

        gridLayout->addWidget(allPackagesList, 0, 0, 1, 2);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(CompanyWindow);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        recipientLineEdit = new QLineEdit(CompanyWindow);
        recipientLineEdit->setObjectName("recipientLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, recipientLineEdit);

        label_2 = new QLabel(CompanyWindow);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        streetLineEdit = new QLineEdit(CompanyWindow);
        streetLineEdit->setObjectName("streetLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, streetLineEdit);

        label_3 = new QLabel(CompanyWindow);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        numberLineEdit = new QLineEdit(CompanyWindow);
        numberLineEdit->setObjectName("numberLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, numberLineEdit);

        label_4 = new QLabel(CompanyWindow);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        xLineEdit = new QLineEdit(CompanyWindow);
        xLineEdit->setObjectName("xLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, xLineEdit);

        label_5 = new QLabel(CompanyWindow);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        yLineEdit = new QLineEdit(CompanyWindow);
        yLineEdit->setObjectName("yLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, yLineEdit);


        gridLayout->addLayout(formLayout, 1, 0, 1, 1);

        addButton = new QPushButton(CompanyWindow);
        addButton->setObjectName("addButton");

        gridLayout->addWidget(addButton, 1, 1, 1, 1);


        retranslateUi(CompanyWindow);
        QObject::connect(addButton, SIGNAL(clicked()), CompanyWindow, SLOT(addPackage()));

        QMetaObject::connectSlotsByName(CompanyWindow);
    } // setupUi

    void retranslateUi(QWidget *CompanyWindow)
    {
        CompanyWindow->setWindowTitle(QCoreApplication::translate("CompanyWindow", "CompanyWindow", nullptr));
        label->setText(QCoreApplication::translate("CompanyWindow", "Recipient", nullptr));
        label_2->setText(QCoreApplication::translate("CompanyWindow", "Street", nullptr));
        label_3->setText(QCoreApplication::translate("CompanyWindow", "Number", nullptr));
        label_4->setText(QCoreApplication::translate("CompanyWindow", "X Coord", nullptr));
        label_5->setText(QCoreApplication::translate("CompanyWindow", "Y Coord", nullptr));
        addButton->setText(QCoreApplication::translate("CompanyWindow", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CompanyWindow: public Ui_CompanyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPANYWINDOW_H
