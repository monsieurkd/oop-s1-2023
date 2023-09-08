#include "AirVehicle.h"



 AirVehicle::AirVehicle(){

 };
  AirVehicle::AirVehicle(int w){
    this->fuel = 100;
    this->numberOfFlights = 0;
    this->weight = w;


  };

  void AirVehicle::refuel(){
    this -> fuel = 100;
  };
 void AirVehicle::fly(int headwind, int minutes){
this->numberOfFlights += 1;
 };

 void AirVehicle::set_weight(int w){
this->weight = w;
 };
void AirVehicle::set_fuel(float f){
    this->fuel = f;
};
void AirVehicle::set_numberOfFlights(int n){
    this->numberOfFlights = n;
};
int AirVehicle::get_weight(){
    return this->weight;
};
float AirVehicle::get_fuel(){
    return this->fuel;
};
int AirVehicle::get_numberOfFlights(){
    return this->numberOfFlights;
};