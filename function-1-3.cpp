#include "Person.h"
#include <iostream>
using namespace std;

PersonList deepCopyPersonList(PersonList p_one) {
    PersonList newP_one;
    newP_one.numPeople = p_one.numPeople;
    newP_one.people = new Person[p_one.numPeople];

    for (int i = 0; i < p_one.numPeople; i++) {
        // copying the data 
           newP_one.people[i] = p_one.people[i]; 
    }

    return newP_one;
}
