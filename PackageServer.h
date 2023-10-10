//
// Created by Ratan Luca on 6/28/2023.
//

#ifndef PRACTICAL_EXAM_PACKAGESERVER_H
#define PRACTICAL_EXAM_PACKAGESERVER_H


#include <vector>
#include "Package.h"
#include "Observer.h"

class PackageServer : public Subject
{
private:
    std::vector<Package> allPackages;
public:
    PackageServer() {this->readFromFile();};
    void readFromFile();
    void writeToFile();
    void updatePackge(const Package& package);
    std::vector<Package> getAll();
    void addPackage(const std::string recipient, const std::string street, const int& number, const double& x, const double& y, bool status);
};


#endif //PRACTICAL_EXAM_PACKAGESERVER_H
