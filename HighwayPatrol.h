#pragma once 

#include "Highway.h"
#include "Vehicle.h"

//struct Highway;
struct HighwayPatrol : Vehicle 
{
    HighwayPatrol();

    ~HighwayPatrol();
    HighwayPatrol(const HighwayPatrol&);
    HighwayPatrol& operator=(HighwayPatrol&);

    void scanHighway(Highway* h);
    void pullOver( Vehicle* v, bool willArrest, Highway* h );
};
