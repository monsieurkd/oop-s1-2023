#ifndef AIRFLEET_H
#define AIRFLEET_H
#include "AirVehicle.h"
class AirFleet
{
private:
    AirVehicle **fleet;

public:
    AirFleet();

    AirVehicle **get_fleet();
};

#endif