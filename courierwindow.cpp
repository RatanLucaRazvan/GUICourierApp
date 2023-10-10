//
// Created by Ratan Luca on 6/28/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_CourierWindow.h" resolved

#include "courierwindow.h"
#include "ui_CourierWindow.h"
#include <cmath>
#include <QMessageBox>


CourierWindow::CourierWindow(PackageServer& server, Courier& courier, QWidget *parent) :
       server{server}, courier{courier}, QWidget(parent), ui(new Ui::CourierWindow) {
    ui->setupUi(this);
    this->populateList();
    this->server.registerObserver(this);
}

CourierWindow::~CourierWindow() {
    delete ui;
}

void CourierWindow::populateList() {
    std::vector<Package> packages = this->server.getAll();
    std::vector<std::string> streets = this->courier.getStreets();

    for(auto package : packages)
    {
        std::vector<std::string> streets = this->courier.getStreets();
        auto iteratorForArray = streets.end();
        for(auto iterator = streets.begin(); iterator != streets.end(); iterator++)
        {
            if(package.getStreet() == (*iterator))
                iteratorForArray = iterator;
        }

        bool isInRange = false;
        double distanceX = this->courier.getCenterX() - package.getX();
        double distanceY = this->courier.getCentery() - package.getY();
        double distance = sqrt(pow(distanceX,2) + pow(distanceY,2));
        if(distance < this->courier.getRadius())
            isInRange = true;
        if(package.getStatus() == false && (isInRange == true || iteratorForArray != streets.end()))
            this->ui->packagesList->addItem(QString::fromStdString(package.toString()));
    }
}

void CourierWindow::update() {
    this->ui->packagesList->clear();
    std::vector<Package> packages = this->server.getAll();
    std::vector<std::string> streets = this->courier.getStreets();

    for(auto package : packages)
    {
        std::vector<std::string> streets = this->courier.getStreets();
        auto iteratorForArray = streets.end();
        for(auto iterator = streets.begin(); iterator != streets.end(); iterator++)
        {
            if(package.getStreet() == (*iterator))
                iteratorForArray = iterator;
        }

        bool isInRange = false;
        double distanceX = this->courier.getCenterX() - package.getX();
        double distanceY = this->courier.getCentery() - package.getY();
        double distance = sqrt(pow(distanceX,2) + pow(distanceY,2));
        if(distance < this->courier.getRadius())
            isInRange = true;
        if(package.getStatus() == false && (isInRange == true || iteratorForArray != streets.end()))
            this->ui->packagesList->addItem(QString::fromStdString(package.toString()));
    }
}

void CourierWindow::deliverPackage() {
    int index = this->getSelectedIndex();

    if(index == -1)
    {
        QMessageBox::critical(this, "Error", "Not selected");
        return;
    }
    std::vector<Package> filterredPackages;
    std::vector<Package> packages = this->server.getAll();
    std::vector<std::string> streets = this->courier.getStreets();
    for(auto package : packages)
    {
        std::vector<std::string> streets = this->courier.getStreets();
        auto iteratorForArray = streets.end();
        for(auto iterator = streets.begin(); iterator != streets.end(); iterator++)
        {
            if(package.getStreet() == (*iterator))
                iteratorForArray = iterator;
        }

        bool isInRange = false;
        double distanceX = this->courier.getCenterX() - package.getX();
        double distanceY = this->courier.getCentery() - package.getY();
        double distance = sqrt(pow(distanceX,2) + pow(distanceY,2));
        if(distance < this->courier.getRadius())
            isInRange = true;
        if(package.getStatus() == false && (isInRange == true || iteratorForArray != streets.end()))
            filterredPackages.push_back(package);
    }

    Package package = filterredPackages[index];
    if(package.getStatus() == true)
    {
        QMessageBox::critical(this, "Error", "Not selected");
        return;
    }

    this->server.updatePackge(package);

}

int CourierWindow::getSelectedIndex() {
    QModelIndexList index = this->ui->packagesList->selectionModel()->selectedIndexes();

    if(index.size() == 0)
        return -1;

    return index.at(0).row();
}
