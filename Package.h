//
// Created by Ratan Luca on 6/28/2023.
//

#ifndef PRACTICAL_EXAM_PACKAGE_H
#define PRACTICAL_EXAM_PACKAGE_H

#include <string>

#include <iostream>

class Package {
private:
    std::string recipient;
    std::string street;
    int number;
    double x;
    double y;
    bool status;
public:
    Package() {}
    Package(const std::string recipient, const std::string street, const int& number, const double& x, const double& y, bool status): recipient{recipient}, street{street}, number{number}, x{x}, y{y}, status{status} {}
    std::string getRecipient() const {return this->recipient;};
    std::string getStreet() const {return this->street;};
    int getStreetNumber() const {return this->number;};
    double getX() const {return this->x;};
    double getY() const {return this->y;};
    bool getStatus() const {return this->status;};

    void setStatus(bool newStatus)  {this->status = newStatus;};

    std::string toString();

    friend std::istream& operator>>(std::istream& input, Package& package);

    friend std::ostream& operator<<(std::ostream& output, Package& package);
};


#endif //PRACTICAL_EXAM_PACKAGE_H
