#include "Person.h"
#include <iostream>
using namespace std;

int main() {
    // testing with 9 people 
    int n = 9;  
    // executing the functionn 
    PersonList p_one = createPersonList(n); 

    // Print the results
    for (int i = 0; i < p_one.numPeople; i++) {
        cout << "Person " << i + 1 << ": " << p_one.people[i].name << ", Age: " << p_one.people[i].age << endl;
    }
   // deleting the dynamic allocated memory 
    delete[] p_one.people; 
    return 0;
}
