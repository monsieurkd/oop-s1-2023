#include "AirVehicle.h"
#include <string>
using namespace std;
#ifndef HELICOPTER_H
#define HELICOPTER_H

class Helicopter : public AirVehicle{
private:
 string name;
 public:
 Helicopter(int w, string n);
 void fly(int headwind, int minutes);
string get_name();
void set_name(string n);
};

#endif
