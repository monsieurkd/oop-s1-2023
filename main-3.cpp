#include <iostream>
#include "Play.h"
#include "Spot.h"
#include "Persona.h"
#include "Snare.h"
int main() {
    Play game;
    game.initPlay(2, 3, 10, 5);
    game.playCycle(20, 2.0);


    for (Spot* spot : game.getMatrix()) {
        delete spot;
    }

    return 0;
}