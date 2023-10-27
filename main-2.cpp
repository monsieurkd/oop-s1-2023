#include <iostream>
#include "Snare.h"
#include "Persona.h"
#include "Spot.h"

int main() {
 
    Snare snare(2, 3);
    Persona persona(4, 5);

    std::cout << "Initial Snare Category: " << snare.getCategory() << ", Operative: " << snare.isOperative() << std::endl;
    std::cout << "Initial Persona Category: " << persona.getCategory() << std::endl;

    snare.implement(persona);

    std::cout << "Snare Category after implementation: " << snare.getCategory() << ", Operative: " << snare.isOperative() << std::endl;
    std::cout << "Persona Category after implementation: " << persona.getCategory() << std::endl;

    persona.shift(1, -1);
    std::cout << "Persona Location after shifting: " << std::get<0>(persona.getLoc()) << ", " << std::get<1>(persona.getLoc()) << std::endl;

    return 0;
}