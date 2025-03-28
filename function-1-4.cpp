#include "Person.h"
#include <iostream>
using namespace std;

PersonList shallowCopyPersonList(PersonList p_one) {
    PersonList newP_one;
      newP_one.numPeople = p_one.numPeople;
      // copying the data 
     newP_one.people = p_one.people; 

    return newP_one;
}
