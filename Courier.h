//
// Created by Ratan Luca on 6/28/2023.
//

#ifndef PRACTICAL_EXAM_COURIER_H
#define PRACTICAL_EXAM_COURIER_H
#pragma once

#include <iostream>
#include <vector>

class Courier {
    std::string name;
    std::vector<std::string> streets;
    double centerX;
    double centerY;
    double radius;

public:
    Courier() {}

    std::string getName() const {return this->name;};
    std::vector<std::string> getStreets() const {return this->streets;};
    double getCenterX() const {return this->centerX;};
    double getCentery() const {return this->centerY;};
    double getRadius() const {return this->radius;};

    friend std::istream &operator>>(std::istream& input, Courier& courier);
};


#endif //PRACTICAL_EXAM_COURIER_H
