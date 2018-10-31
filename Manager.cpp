
#include "Manager.h" 
#include<iostream>

using namespace std;

Manager::Manager(char* aName, int aAge, char* aNIC, double aTaxRate, double aBasicSalary, Address add, char* aDepartment) :SalariedEmp(aName, aAge, aNIC, aTaxRate, aBasicSalary, add), Department(aDepartment) {
	if (aDepartment != NULL) { 
		int len = strlen(aDepartment) + 1; 
		Department = new char[len]; 
		strcpy_s(Department, len, aDepartment); 
	} 
	else { 
		Department = new char; 
		strcpy_s(Department, 1, "\0"); 
	} 
} 

void Manager::Print() { 
	SalariedEmp::Print();
	cout << "Department: " << Department << endl; 
}
