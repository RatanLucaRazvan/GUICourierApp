//
// Created by Ratan Luca on 6/28/2023.
//

#include "Courier.h"
#include "Utils.h"

std::istream &operator>>(std::istream &input, Courier &courier) {
    std::string line;

    getline(input, line);
    std::vector<std::string> tokens = tokenize(line, ',');

    if(tokens.size() < 4)
        return input;

    courier.name = trim(tokens[0]);
    std::vector<std::string> a;
    courier.streets = a;
    int i;
    for(i = 1; i < tokens.size() - 3; i++)
        courier.streets.push_back(trim(tokens[i]));

    courier.centerX = stod(trim(tokens[i]));
    i++;
    courier.centerY = stod(trim(tokens[i]));
    i++;
    courier.radius = stod(trim(tokens[i]));

    return input;
}
