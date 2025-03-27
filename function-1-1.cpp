#include "Person.h"
#include "function-1-1.h" 
#include<iostream>
// function for creating the structs
Person* createPersonArray(int n){
    // allocating memory for structs dynamically
    Person* personArr = new Person[n];
    // initialising the values by for loop
    for(int i = 0;i<n;i++){
        personArr[i].name ="John Doe";
        personArr[i].age=0;
    }
    return personArr;
}
