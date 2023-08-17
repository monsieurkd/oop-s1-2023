#include "Person.h"
#include <iostream>
extern PersonList createPersonList(int n);
extern PersonList deepCopyPersonList(PersonList pl);
int main(){
     PersonList list = createPersonList(5);
    PersonList newlist = deepCopyPersonList(list);
        for (int i = 0; i < 5; i++)
    {
        std::cout << i << " " << newlist.numPeople <<" "<< newlist.people[i].age << " " << newlist.people[i].name; 
    }
}