//
// Created by Ratan Luca on 6/28/2023.
//

#ifndef PRACTICAL_EXAM_WINDOWS_H
#define PRACTICAL_EXAM_WINDOWS_H
#include <iostream>
#include <vector>
#include "Courier.h"
#include "courierwindow.h"
#include "PackageServer.h"

class Windows {
private:
    std::vector<Courier> couriers;
    std::vector<CourierWindow*> windows;
    PackageServer& server;
public:
    Windows(PackageServer& server): server{server} {}
    void readCouriersFromFile();
    void openWindows();
};


#endif //PRACTICAL_EXAM_WINDOWS_H
