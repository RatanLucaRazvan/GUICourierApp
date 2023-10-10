//
// Created by Ratan Luca on 6/28/2023.
//

#ifndef PRACTICAL_EXAM_COURIERWINDOW_H
#define PRACTICAL_EXAM_COURIERWINDOW_H

#include <QWidget>
#include "Courier.h"
#include "PackageServer.h"


QT_BEGIN_NAMESPACE
namespace Ui { class CourierWindow; }
QT_END_NAMESPACE

class CourierWindow : public QWidget, public Observer {
Q_OBJECT

public:
    explicit CourierWindow(PackageServer& server, Courier& courier, QWidget *parent = nullptr);

    ~CourierWindow() override;
    void populateList();
    void update() override;
    int getSelectedIndex();

public slots:
    void deliverPackage();

private:
    Ui::CourierWindow *ui;
    PackageServer& server;
    Courier& courier;
};


#endif //PRACTICAL_EXAM_COURIERWINDOW_H
