/********************************************************************************
** Form generated from reading UI file 'courierwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURIERWINDOW_H
#define UI_COURIERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CourierWindow
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *packagesList;
    QPushButton *deliverButton;

    void setupUi(QWidget *CourierWindow)
    {
        if (CourierWindow->objectName().isEmpty())
            CourierWindow->setObjectName("CourierWindow");
        CourierWindow->resize(400, 300);
        verticalLayout = new QVBoxLayout(CourierWindow);
        verticalLayout->setObjectName("verticalLayout");
        packagesList = new QListWidget(CourierWindow);
        packagesList->setObjectName("packagesList");

        verticalLayout->addWidget(packagesList);

        deliverButton = new QPushButton(CourierWindow);
        deliverButton->setObjectName("deliverButton");

        verticalLayout->addWidget(deliverButton);


        retranslateUi(CourierWindow);
        QObject::connect(deliverButton, SIGNAL(clicked()), CourierWindow, SLOT(deliverPackage()));

        QMetaObject::connectSlotsByName(CourierWindow);
    } // setupUi

    void retranslateUi(QWidget *CourierWindow)
    {
        CourierWindow->setWindowTitle(QCoreApplication::translate("CourierWindow", "CourierWindow", nullptr));
        deliverButton->setText(QCoreApplication::translate("CourierWindow", "Deliver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CourierWindow: public Ui_CourierWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURIERWINDOW_H
