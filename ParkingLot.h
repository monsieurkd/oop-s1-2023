#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "vehicle.h"
#include <iostream>

class ParkingLot {
private:
    int maxCapacity;
    int currentCount;
    Vehicle** vehicles;

public:
    ParkingLot(int capacity) ;

    ~ParkingLot() ;

    int getCount() ;

    void parkVehicle(Vehicle* vehicle) ;

    void unparkVehicle(int vehicleID) ;

    int countOverstayingVehicles(int maxParkingDuration);




};

#endif