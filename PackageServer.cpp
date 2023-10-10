//
// Created by Ratan Luca on 6/28/2023.
//

#include <fstream>
#include "PackageServer.h"

void PackageServer::addPackage(const std::string recipient, const std::string street, const int &number, const double &x,
                          const double &y, bool status) {
    Package package{recipient, street, number, x, y, status};
    this->allPackages.push_back(package);
    this->writeToFile();
}

void PackageServer::readFromFile() {
    std::ifstream data("Packages.txt");

    Package package;

    while(!data.eof())
    {
        data>>package;
        this->allPackages.push_back(package);
    }

    data.close();
}

std::vector<Package> PackageServer::getAll() {
    return this->allPackages;
}

void PackageServer::writeToFile() {
    std::ofstream data("Packages.txt");

    for(int i = 0; i < this->allPackages.size(); i++)
    {
        data<<this->allPackages[i];
        if(i != this->allPackages.size() - 1)
            data<<"\n";
    }

    data.close();
}

void PackageServer::updatePackge(const Package &package) {
    auto iteratorFroVector = this->allPackages.end();
    for(auto iterator = this->allPackages.begin(); iterator != this->allPackages.end(); iterator++)
    {
        if((*iterator).getRecipient() == package.getRecipient())
            iteratorFroVector = iterator;

    }

    (*iteratorFroVector).setStatus(true);

    this->writeToFile();
    this->notify();
}
