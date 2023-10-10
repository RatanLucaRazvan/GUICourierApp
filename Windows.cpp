//
// Created by Ratan Luca on 6/28/2023.
//

#include <fstream>
#include "Windows.h"
#include "companywindow.h"

void Windows::readCouriersFromFile() {
    std::ifstream data("Couriers.txt");

    Courier courier;

    while(!data.eof())
    {
        data>>courier;
        this->couriers.push_back(courier);
    }

    data.close();
}

void Windows::openWindows() {
    for(auto& courier : this->couriers)
    {
        CourierWindow* window = new CourierWindow{server, courier};
        window->setWindowTitle(QString::fromStdString(courier.getName() + " center: " + std::to_string(courier.getCenterX()) + " " + std::to_string(courier.getCentery()) + " radius: " + std::to_string(courier.getRadius())));
        window->show();
        this->windows.push_back(window);
    }

    CompanyWindow* companyWindow = new CompanyWindow(server);
    companyWindow->show();
}
