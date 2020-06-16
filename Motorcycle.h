#pragma once

#include <iostream>
#include <limits>

#include "Vehicle.h"

// is Motorcycle a Vehicle?
struct Motorcycle : public Vehicle
{
    Motorcycle(const std::string& n);
    
    //~Motorcycle();
    //Motorcycle(const Motorcycle&);
    //Motorcycle& operator=(const Motorcycle&);

    void lanesplitAndRace( int topSpeed = std::numeric_limits<int>::max() );
    
    void tryToEvade() override;
    void setSpeed(int s) override;
};

