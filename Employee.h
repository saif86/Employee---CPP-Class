#ifndef Employee_HEADER 
#define Employee_HEADER

#include "Address.h"
// Employee class definition 
class Employee {
	char* Name;
	int Age;
	char* NIC;
	double taxRate;
	double basicSalary;
	Address eAddress;
	
	static int noOfEmployees; // class variable to count total no. of employees 
public:
	//Employee(); // default constructor 
	Employee(char* = "", int = 0, char* = "", double = 0.0, double = 0.0, Address = Address::getDefaultAddress()); // overloaded constructor 
	~Employee(); // destructor 

	static int getTotalEmployee(); // static member function 
	void setZIP(int); // Setter function for Postal(ZIP) Code 
	int getZIP()const; // Getter function for Postal(ZIP) Code 

	char* getName()const; // Getter function for Name
	double getTaxRate()const; // Getter function for Tax Rate
	double getBasicSalary()const; // Getter function for Basic Salary
	void Print()const; // prints all the details of the employee 
	virtual double calcSalary() = 0;
}; // end class Employee

#endif