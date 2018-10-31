#include "Executive.h" 
#include<iostream>

using namespace std;

Executive::Executive(char* aName, int aAge, char* aNIC, double aTaxRate, double aBasicSalary, Address add, char* aDepartment) :Manager(aName, aAge, aNIC, aTaxRate, aBasicSalary, add, aDepartment) { }

void Executive::Print() { 
	cout << "Executive"<<endl; 
	Manager::Print(); 
}