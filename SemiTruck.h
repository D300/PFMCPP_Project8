#pragma once
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& n);
    
    ~SemiTruck();
    SemiTruck(const SemiTruck&);
    SemiTruck& operator=(const SemiTruck&);

    void turnRadioOn();
    void pullOver();
};

