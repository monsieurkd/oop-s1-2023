#include "Musician.h"


Musician::Musician(std::string instrument, int experience) {_instrument = instrument; _experience = experience ;}
Musician::Musician(){
    _instrument = "NULL";
    _experience = 0;
};
std::string Musician::get_instrument(){
    return _instrument;
};
int Musician::get_experience() {
    return _experience;
};






