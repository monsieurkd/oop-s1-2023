// Inherits from Spot.
// Has constructor Persona(int x, int y)
// Has a member function void shift(int dx, int dy) to alter the persona's location.
// The persona's spot category is 'P'.
// Create a main-2.cpp file to demonstrate the functionality of the Snare and Persona classes and their interaction with each other.

#ifndef PERSONA_H
#define PERSONA_H

#include "Spot.h"
#include <tuple>

class Persona : public Spot {
public:
    Persona(int x, int y) : Spot(x, y, 'P') {}
void shift(int dx, int dy){
    int tempx, tempy;
    std::tie(tempx,tempy) = this->getLoc();
    this->setLoc(tempx+dx, tempy+dy);
}
    ~Persona() {
        // Add cleanup code here if necessary
    }
private:
bool operative ;

};

#endif // MINE_H
