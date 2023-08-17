#include "Person.h"
PersonList shallowCopyPersonList(PersonList pl) {
    PersonList newpl;
    newpl.numPeople = pl.numPeople;
    newpl.people = pl.people;



    return newpl;
}