#include "Person.h"
#include <iostream>
PersonList createPersonList(int n){
    PersonList arr;
    arr.numPeople = n;
    arr.people = new Person[n];
    for (int i = 0; i < n; i++)
    {
        arr.people[i].name = "Jane Doe";
        arr.people[i].age = 1;
    }
    return arr;
}
extern PersonList deepCopyPersonList(PersonList pl);
int main(){
     PersonList list = createPersonList(5);
    PersonList newlist = deepCopyPersonList(list);
        for (int i = 0; i < 5; i++)
    {
        std::cout << i << " " << newlist.numPeople <<" "<< newlist.people[i].age << " " << newlist.people[i].name; 
    }
}