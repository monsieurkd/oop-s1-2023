

// 3. Assists: A class with static functions:

#include <tuple>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
// Additionally, create a main-1.cpp file to test the functionality of the classes defined above.
#ifndef ASSIST_H
#define ASSIST_H
class Assist{
    public:
std::tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight){
    static bool seed = false;
    if(!seed){
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        seed= true;

    }
    int x = std::rand() % matrixWidth;
    int y = std::rand() % matrixHeight;
return std::make_tuple(x,y);
}// (returns a random location within the game's matrix. (0,0) should be the first location),

double evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2) {
int x1,y1,x2,y2;
std::tie(x1,y1) = loc1;
std::tie(x2,y2) = loc2;
return std::sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));


}//(returns the Euclidean distance between two locations).

friend class Play;
};

#endif