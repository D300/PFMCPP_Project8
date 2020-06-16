#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) { }
    
SemiTruck::~SemiTruck() = default;
SemiTruck::SemiTruck(const SemiTruck&) = default;
SemiTruck& SemiTruck::operator=(const SemiTruck&) = default;

void SemiTruck::turnRadioOn()
{
    std::cout << "radio on" << std::endl;
}

void SemiTruck::pullOver()
{
    std::cout << "Alright, slowing down now!" << std::endl;
}
