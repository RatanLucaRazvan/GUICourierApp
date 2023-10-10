//
// Created by Ratan Luca on 6/28/2023.
//

#include "Observer.h"

void Subject::registerObserver(Observer *obs) {
    this->observers.push_back(obs);
}

void Subject::notify() {
    for(auto obs : this->observers)
        obs->update();
}
