//
// Created by Ratan Luca on 6/28/2023.
//

#ifndef PRACTICAL_EXAM_COMPANYWINDOW_H
#define PRACTICAL_EXAM_COMPANYWINDOW_H

#include <QWidget>
#include "PackageServer.h"


QT_BEGIN_NAMESPACE
namespace Ui { class CompanyWindow; }
QT_END_NAMESPACE

class CompanyWindow : public QWidget, public Observer{
Q_OBJECT

public:
    explicit CompanyWindow(PackageServer& server, QWidget *parent = nullptr);

    ~CompanyWindow() override;
    void populateList();
    void update() override;

public slots:
    void addPackage();

private:
    Ui::CompanyWindow *ui;
    PackageServer& server;
};


#endif //PRACTICAL_EXAM_COMPANYWINDOW_H
