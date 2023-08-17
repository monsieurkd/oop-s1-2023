#include "Person.h"
#include <iostream>
extern PersonList createPersonList(int n);
int main(){
     PersonList list = createPersonList(5);
    for (int i = 0; i < 5; i++)
    {
        std::cout << i << " " << list.numPeople <<" "<< list.people[i].age << " " << list.people[i].name; 
    }
}