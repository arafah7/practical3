#include "Person.h"
#include <iostream>
using namespace std;
extern Person* createPersonArray(int n);
int main() {
    int n = 8;  
    // execting the function 
    Person* people = createPersonArray(n);  

    //  printing the results 
      for (int i = 0; i < n; i++) {
        cout << "Person " << i + 1 << ": " << people[i].name << ", Age: " << people[i].age << endl;
    }
          // empty the dynamic memory 
    delete[] people;  
    return 0;
}
