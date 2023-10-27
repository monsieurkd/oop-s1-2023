#include <iostream>
#include "Assists.h"
#include <tuple>
int main() {
    // Generate random positions
    Assists a,b;
    std::tuple<int, int> loc1 = a.createRandomLoc(10, 10);
    std::tuple<int, int> loc2 = b.createRandomLoc(10, 10);

    // Calculate distance between positions
    double distance = a.evaluateDistance(loc1, loc2);

    // Print the generated positions and distance
    std::cout << "Position 1: (" << std::get<0>(loc1) << ", " << std::get<1>(loc1) << ")\n";
    std::cout << "Position 2: (" << std::get<0>(loc2) << ", " << std::get<1>(loc2) << ")\n";
    std::cout << "Distance: " << distance << std::endl;

    return 0;
}