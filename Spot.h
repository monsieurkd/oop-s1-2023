// 1. Spot: A class portraying a single spot in a game matrix (i.e. the 2D grid), with members:

// std::tuple<int, int> location (representing the spot's location),
// char category (representing the type of entity in the spot).
// The class should include the following member functions:

// Spot(int x, int y, char category)
// std::tuple<int, int> getLoc()
// char getCategory()
// void setLoc(int x, int y)
// void setCategory(char category)
#ifndef SPOT_H
#define SPOT_H
#include <tuple>
#include <iostream>
class Spot{
    public:
    Spot(int x, int y, char category): location(std::make_tuple(x,y)), category(category){

    }
std::tuple<int, int> getLoc(){
    return this->location;
}
char getCategory(){
    return this->category;
}
void setLoc(int x, int y){
    location = std::make_tuple(x,y);
}
void setCategory(char category){
    this->category = category;  
}
virtual ~Spot(){};
protected:
std::tuple<int, int> location; //(representing the spot's location),
char category; //(representing the type of entity in the spot).

};

#endif