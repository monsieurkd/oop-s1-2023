// Question 2: Descendant Classes and Polymorphism

// Task: Define classes Snare and Persona.

// Requirements:

// 1. Snare:

// Inherits from Spot and Influence.
// Has constructor Snare(int x, int y)
// The snare's spot category is 'S'.
// Has a bool member operative and a function bool isOperative() to check if the snare is still operative.
// Changes a spot's category to 'S' and deactivates the snare when implement(Spot& spot) is called.
// 2. Persona:
#ifndef SNARE_H
#define SNARE_H

#include "Spot.h"
#include "Influence.h"

class Snare : public Spot, public Influence {
public:
    Snare(int x, int y) : Spot(x, y, 'S') , operative(true){}
bool isOperative(){
    return operative;
}

void implement(Spot& spot) override{
    spot.setCategory('S');
    operative = false;
    }
      ~Snare() {
        // Add cleanup code here if necessary
    }
private:
bool operative ;

};


#endif // MINE_H
