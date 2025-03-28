#include "Person.h"
#include <iostream>
using namespace std;

PersonList createPersonList(int n) {
    PersonList p_one;
    p_one.numPeople = n;
    // dynamically allocating the memory for person structs
    p_one.people = new Person[n];  

    
    for (int i = 0; i <  n; i++) {
        // initialising the name
            p_one.people[i].name = "Jane Doe";
        // initialising the age 
        p_one.people[i].age = 1;
    }
    return p_one;
}