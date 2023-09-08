#include "AirVehicle.h"
#include "Airplane.h"
#include <string>
using namespace std;

Airplane::Airplane(): AirVehicle(){};
 Airplane::Airplane(int w, int p): AirVehicle(w){
    this->numPassengers = p;
 };

int Airplane::get_numPassengers(){
    return this->numPassengers;
};
void Airplane::reducePassengers(int x){
    
     
    if ( this->get_numPassengers() - x> 0 )
    {
        this->numPassengers -= x;
    }else{
        this->numPassengers = 0;
    }
    
};
 void Airplane::fly(int headwind, int minutes){
float fuel;
if(headwind >=60 ){
    fuel = 0.25;
}else{
    fuel = 0.5;
}

fuel += 0.001*this->get_numPassengers();


float fuelUse = fuel*minutes;
float fuelLeft = this->get_fuel() - fuelUse;
if(fuelLeft > 20){
this->set_numbetOfFlights(1);
this->set_fuel(fuelLeft);
}

 }