#include "Person.h"
#include <iostream>
using namespace std;

PersonList shallowCopyPersonList(PersonList p_one); //

int main() {
   
    PersonList original;
    original.numPeople = 3;
    original.people = new Person[3]{
        {"Alice", 25},
        {"Bob", 30},
        {"Charlie", 35}
    };

    // doing the shallow copy 
    PersonList copy = shallowCopyPersonList(original);

    
    cout << "Original: " << original.people[0].name << endl;
    cout << "Copy: " << copy.people[0].name << endl;

    // Clearing up the memory 
    delete[] original.people;
   

    return 0;
}