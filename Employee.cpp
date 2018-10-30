#include "Employee.h"
#include "Address.h"
#include<iostream>
using namespace std;

// File scope starts here 

/*private static member cannot be accessed outside the class except for initialization*/
int Employee::noOfEmployees = 0;	// intitalize class variable 

// Employee overloaded constructor initializes all data members to user supplied values 
Employee::Employee(char* aName, int aAge, char* aNIC, double aSalary, Address add) : Name(aName), Age(aAge), NIC(aNIC), salary(aSalary), eAddress(add) {
	// initialization using member intializing list 
	if (aName != NULL) {
		int len = strlen(aName) + 1;
		Name = new char[len];
		strcpy_s(Name, len, aName);
	}
	else { 
		Name = new char;
		strcpy_s(Name, 1, "\0");
	}

	if (aNIC != NULL) {
		int len = strlen(aNIC) + 1;
		NIC = new char[len];
		strcpy_s(NIC, len, aNIC);
	}
	else {
		NIC = new char;
		strcpy_s(NIC, 1, "\0");
	}
	noOfEmployees++; // increment no. of employees within constructor 
}// end overloaded constructor Employee

 // Emplopyee destructor 
Employee::~Employee() {
	noOfEmployees--; // decrement no. of employees each time destructor is called 
}// end ~Employee destructor 

 // static member function to access class variable 
int Employee::getTotalEmployee() {
	return noOfEmployees;
}// end static member function 

 // set ZIP Code value 
void Employee::setZIP(int aZIP) {
	eAddress.setPostCode(aZIP);
}// end function setZIP 

 // get ZIP Code value 
int Employee::getZIP()const {
	return eAddress.getPostCode();
}// end function getZIP 

 // print employee detail 
void Employee::Print()const {
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "NIC: " << NIC << endl;
	cout << "Salary: " << salary << endl;
	cout << "Address: " << endl;
	eAddress.PrintAddress();
}// end function print