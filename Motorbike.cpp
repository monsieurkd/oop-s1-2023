
#include <time.h>
#include <stdint.h>
#include "motorbike.h"
#include "vehicle.h"
using namespace std;
Motorbike::Motorbike(int id) : Vehicle(id) {}
int Motorbike::getParkingDuration(){
    int parkingDuration = Vehicle::getParkingDuration();
    return parkingDuration*0.85;
};