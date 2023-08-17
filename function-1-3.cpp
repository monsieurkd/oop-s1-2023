#include "Person.h"
PersonList deepCopyPersonList(PersonList pl){
    PersonList newpl;
    newpl.numPeople = pl.numPeople;
    newpl.people = new Person[pl.numPeople];

    for (int i = 0; i < pl.numPeople; ++i) {
        newpl.people[i].name = pl.people[i].name;
        newpl.people[i].age = pl.people[i].age;
    }

    return newpl;
}