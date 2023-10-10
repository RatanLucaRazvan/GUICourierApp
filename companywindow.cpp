//
// Created by Ratan Luca on 6/28/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_CompanyWindow.h" resolved

#include "companywindow.h"
#include "ui_CompanyWindow.h"


CompanyWindow::CompanyWindow(PackageServer& server, QWidget *parent) :
        server{server}, QWidget(parent), ui(new Ui::CompanyWindow) {
    ui->setupUi(this);
    this->populateList();
    this->server.registerObserver(this);
}

CompanyWindow::~CompanyWindow() {
    delete ui;
}

void CompanyWindow::populateList() {
    std::vector<Package> packages = this->server.getAll();

    for(int i = 0; i < packages.size();i++)
    {
        this->ui->allPackagesList->addItem(QString::fromStdString(packages[i].toString()));
        if(packages[i].getStatus() == true)
            this->ui->allPackagesList->item(i)->setBackground(QBrush{Qt::green});
    }
}

void CompanyWindow::addPackage() {
    std::string recipient = this->ui->recipientLineEdit->text().toStdString();
    std::string street = this->ui->streetLineEdit->text().toStdString();
    int number = stoi(this->ui->numberLineEdit->text().toStdString());
    double x = stod(this->ui->xLineEdit->text().toStdString());
    double y = stod(this->ui->xLineEdit->text().toStdString());

    this->server.addPackage(recipient, street,number,x,y,false);
    this->server.notify();
}

void CompanyWindow::update() {
    this->ui->allPackagesList->clear();
    std::vector<Package> packages = this->server.getAll();

    for(int i = 0; i < packages.size();i++)
    {
        this->ui->allPackagesList->addItem(QString::fromStdString(packages[i].toString()));
        if(packages[i].getStatus() == true)
            this->ui->allPackagesList->item(i)->setBackground(QBrush{Qt::green});
    }
}
