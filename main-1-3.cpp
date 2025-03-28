#include "Person.h"
#include <iostream>
using namespace std;

extern PersonList deepCopyPersonList(PersonList p_one);

int main() {
    // Create a PersonList
    PersonList original_one;
    original_one.numPeople = 3;
        original_one.people = new Person[3]{
        {"Alice", 25},
        {"Bob", 30},
        {"Charlie", 35}
    };

    // doing the deep copy
    PersonList copy = deepCopyPersonList(original);

    // the results 
    cout << "Original: " << original_one.people[0].name << endl;
    cout << "Copy: " << copy.people[0].name << endl;

    // deleting the dyanmic memory 
    delete[] original_one.people;
    delete[] copy.people;

    return 0;
}
