#include "Executive.h" 
#include<iostream>

using namespace std;

Executive::Executive(char* aName, int aAge, char* aNIC, double aSalary, Address add, char* aDepartment) :Manager(aName, aAge, aNIC, aSalary, add, aDepartment) { }

void Executive::Print() { 
	cout << "Executive"<<endl; 
	Manager::Print(); 
}