#ifndef VEHICLE_H
#define VEHICLE_H
#include <time.h>
#include <stdint.h>
using namespace std;

class Vehicle{
    protected:
time_t  _timeOfEntry;
int _ID;
public:
Vehicle(); //default constructor
Vehicle(int ID);
int getID();
int getParkingDuration();
};



#endif