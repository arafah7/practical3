#include "Person.h"
// function for creating the structs
Person* createPersonArray(int n){
    // allocating memory for structs dynamically
    person* personArr = new Person[n];
    // initialising the values by for loop
    for(int i = 0;i<n;i++){
        personArr[i].name ="John Doe";
        personArr[i].age=0;
    }
    return personArr;
}