#include "AirVehicle.h"
#include <string>
using namespace std;
#ifndef AIRPLANE_H
#define AIRPLANE_H

class Airplane : public AirVehicle{
private:
 int numPassengers;
 public:
 Airplane();
 Airplane(int w, int p);

int get_numPassengers();
void reducePassengers(int x);
 void fly(int headwind, int minutes);
};

#endif
