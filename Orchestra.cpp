#include "Orchestra.h"
#include "Musician.h"
#include <iostream>

Orchestra::Orchestra(){
    _maxSize = 0;
}        // default constructor
Orchestra::Orchestra(int size){
    _maxSize = size;
    MusicianList  = new Musician[_maxSize];

}   // constructor for an orchestra of given size

// returns the number of musicians who have joined the orchestra
int Orchestra::get_current_number_of_members(){return _size;}

// returns true if any musician in the orchestra plays the specified instrument
// otherwise returns false
bool Orchestra::has_instrument(std::string instrument){
    bool check = false;
    for (int i = 0; i < _size; i++)
    {
        if(MusicianList[i].get_instrument() == instrument){
            check = true;
        }
    }return check;
    
}

Musician* Orchestra::get_members(){
return MusicianList ;
}       // returns the array of members of the orchestra

// returns true and adds new musician to the orchestra if the orchestra is not full
// otherwise returns false
bool Orchestra::add_musician(Musician new_musician){
    if(_size <= _maxSize -1){
        MusicianList[_size] = new_musician;
        _size +=1;
        return true;
    }else{return false;}
}
Orchestra::~Orchestra(){
    delete[] MusicianList;
}