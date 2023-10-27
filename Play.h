// Task: Define a class Play to handle the gameplay mechanics and victory conditions.

// Requirements:

// Has a default constructor.
// The Play class should have a private member std::vector<Spot*> matrix and a std::vector<Spot*>& getMatrix() function.
// It should have a function initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight) that initializes the gameplay with a certain number of each object at random locations in the matrix.
// The Play class should provide a function playCycle(int maxCycles, double snareTriggerDistance) that:
// Runs the game for a certain number of cycles.
// In each cycle, shifts all Persona objects in the matrix to the right by calling the shift(1,0) function.
// Checks for any Snare objects near each Persona. If a Snare object is within the snareTriggerDistance, the Snare's implement function is called on the Persona.
// Checks if any Persona has stepped outside of the matrix. If so, the game is won by that Persona. Prints
// "Persona has won the game!"  and ends the game cycle.
// If the maximum number of cycles is reached and no persona won, it prints
// "Maximum number of cycles reached. Game over."
// Finally, write a main-3.cpp file to simulate the gameplay using the Play class and demonstrate how it handles the gameplay mechanics and victory conditions.

#ifndef PLAY_H
#define PLAY_H

#include "Spot.h"
#include "Snare.h"
#include "Persona.h"
#include "Assist.h"
#include <vector>

class Play
{
private:
    std::vector<Spot *> matrix;

public:
    std::vector<Spot *> &getMatrix()
    {
        return matrix;
    }

    void initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight)
    {

        std::srand(static_cast<unsigned>(std::time(nullptr)));
        for (int i = 0; i < numPersonas; i++)
        {
            int x = std::rand() % matrixWidth;
            int y = std::rand() % matrixHeight;
            matrix.push_back(new Persona(x, y));
        }

        for (int i = 0; i < numSnares; i++)
        {
            int x = std::rand() % matrixWidth;
            int y = std::rand() % matrixHeight;
            matrix.push_back(new Snare(x, y));
        }
    }

    void playCycle(int maxCycles, double snareTriggerDistance)
    {
        for (int cycle = 0; cycle < maxCycles; cycle++)
        {
            // Shift all Persona objects to the right
            for (Spot *spot : matrix)
            {
                if (spot->getCategory() == 'P')
                {
                    Persona *persona = dynamic_cast<Persona*>(spot);
                    persona->shift(1, 0);
                }
            }

            // Check for Snare objects near each Persona
            for (Spot *spot1 : matrix)
            {
                if (spot1->getCategory() == 'P')
                {
                    for (Spot *spot2 : matrix)
                    {
                        if (spot2->getCategory() == 'S' && dynamic_cast<Snare*>(spot2)->isOperative())
                        {
                            Assist assist; // Create an instance of the Assist class
                            double distance = assist.evaluateDistance(spot1->getLoc(), spot2->getLoc());
                            if (distance <= snareTriggerDistance)
                            {
                                Snare *snare = dynamic_cast<Snare*>(spot2);
                                snare->implement(*spot1);
                            }
                        }
                    }
                }
            }

            // Check if any Persona has stepped outside of the matrix
            for (Spot *spot : matrix)
            {
                if (spot->getCategory() == 'P')
                {
                    std::tuple<int, int> loc = spot->getLoc();
                    int x, y;
                    std::tie(x, y) = loc;
                    if (x < 0 || x >= maxCycles)
                    {
                        std::cout << "Persona has won the game!" << std::endl;
                        return;
                    }
                }
            }
        }

        std::cout << "Maximum number of cycles reached. Game over." << std::endl;
    }

     ~Play()
    {
        for (Spot* spot : matrix)
        {
            delete spot;
        }
    }
};

#endif