//
// Created by Ratan Luca on 6/28/2023.
//


#include "Utils.h"
#include <sstream>


std::string trim(const std::string& s)
{
    std::string result(s);

    int pos = result.find_first_not_of(' ');
    if(pos != -1)
        result.erase(0, pos);
    pos = result.find_last_not_of(' ');

    if(pos != std::string::npos)
        result.erase(pos + 1);

    return result;
}

std::vector<std::string> tokenize(std::string& str, char delimiter)
{
    std::stringstream ss(str);

    std::string token;

    std::vector<std::string> tokens;

    while(getline(ss, token, delimiter))
        tokens.push_back(token);

    return tokens;
}
