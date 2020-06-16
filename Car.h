#pragma once
#include "Vehicle.h"

struct Car : public Vehicle
{
    Car(const std::string& s);
    
    ~Car();
    Car(const Car&);
    Car& operator=(const Car&);

    void closeWindows();
    void tryToEvade();
};
