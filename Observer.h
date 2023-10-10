//
// Created by Ratan Luca on 6/28/2023.
//

#ifndef PRACTICAL_EXAM_OBSERVER_H
#define PRACTICAL_EXAM_OBSERVER_H
#include <iostream>
#include <vector>

class Observer {
public:
    virtual void update() = 0;
    virtual ~Observer() {};
};


class Subject
{
private:
    std::vector<Observer*> observers;
public:
    virtual ~Subject() {};
    void registerObserver(Observer* obs);
    void notify();
};


#endif //PRACTICAL_EXAM_OBSERVER_H
