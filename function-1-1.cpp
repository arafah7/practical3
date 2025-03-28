#include "Person.h"
#include <iostream>
using namespace std;

Person* createPersonArray(int n) {
    // dymically allocating the person structs
    Person* arr = new Person[n];  // Dynamically allocate an array of Person structs
             for (int i = 0; i < n; i++) {
        // initialsing the names
          arr[i].name = "John Doe";  
        // initialising the age
        arr[i].age = 0;            
    }
    // returning the array
    return arr;
}

