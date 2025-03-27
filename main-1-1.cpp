#include<iostream>
#include"Person.h"
#include"function-1-1.cpp"

using namespace std;
int main(){
    int n = 7;
//creating the array
    Person* personArr = createPersonArray(n);
  // printing the names of the name and age 
    for(int i = 1i<n;i++){
        cout<<"person"<<i<<"i" << personArr[i].name<< "age" <<personArr[i].age<<endl;
    }
    delete[] personArr;
    return 0;
}