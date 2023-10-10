//
// Created by Ratan Luca on 6/28/2023.
//

#include <vector>
#include "Package.h"
#include "Utils.h"

std::string Package::toString() {
    if(this->status == true)
        return this->recipient + "," + this->street + "," + std::to_string(this->number) + "," + std::to_string(this->x) + "," + std::to_string(this->y) + "," + "true";
    else
        return this->recipient + "," + this->street + "," + std::to_string(this->number) + "," + std::to_string(this->x) + "," + std::to_string(this->y) + "," + "false";
}

std::istream &operator>>(std::istream &input, Package &package) {
    std::string line;

    getline(input, line);
    std::vector<std::string> tokens = tokenize(line, ',');

    if(tokens.size() != 6)
        return input;

    package.recipient = trim(tokens[0]);
    package.street = trim(tokens[1]);
    package.number = stoi(trim(tokens[2]));
    package.x = stod(trim(tokens[3]));
    package.y = stod(trim(tokens[4]));
    if(tokens[5] == "true")
        package.status = true;
    else
        package.status = false;

    return input;
}

std::ostream &operator<<(std::ostream &output, Package &package) {
    output<<package.toString();
}
