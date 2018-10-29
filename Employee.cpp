#include "Employee.h"
#include "Address.h"
#include<iostream>
using namespace std;

// File scope starts here 
int Employee::noOfEmployees = 0;	// intitalize class variable 

// Employee default constructor initializes all data members to empty string and zero 
Employee::Employee() :Name(""), Age(0), NIC(""), eAddress(){ 
	// initialization using member intializing list 
	noOfEmployees++; // increment no. of employees within constructor 
} // end default constructor Employee 
  

// Employee overloaded constructor initializes all data members to user supplied values 
Employee::Employee(char* aName, int aAge, char* aNIC, const Address & add) : Name(aName), Age(aAge), NIC(aNIC), eAddress(add){ 
	// initialization using member intializing list 
	noOfEmployees++; // increment no. of employees within constructor 
}// end overloaded constructor Employee

 // Emplopyee destructor 
Employee::~Employee(){
	noOfEmployees--; // decrement no. of employees each time destructor is called 
}// end ~Employee destructor 
 
 // static member function to access class variable 
int Employee::getTotalEmployee(){ 
	return noOfEmployees; 
}// end static member function 
 
 // set ZIP Code value 
void Employee::setZIP(int aZIP){ 
	eAddress.setPostCode(aZIP); 
}// end function setZIP 
 
 // get ZIP Code value 
int Employee::getZIP()const{ 
	return eAddress.getPostCode(); 
}// end function getZIP 
 
 // print employee detail 
void Employee::print()const{ 
	cout << "Name: " << Name << endl; 
	cout << "Age: " << Age << endl; 
	cout << "NIC: " << NIC << endl; 
	cout << "Address: " << endl; 
	eAddress.PrintAddress();
}// end function print