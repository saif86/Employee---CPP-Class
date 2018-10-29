#ifndef Employee_HEADER 
#define Employee_HEADER

#include "Address.h"
// Employee class definition 
class Employee{ 
	char* Name; 
	int Age; 
	char* NIC; 
	Address eAddress; 
	static int noOfEmployees; // class variable to count total no. of employees 
public: 
	Employee(); // default constructor 
	Employee(char*, int, char*, const Address&); // overloaded constructor 
	~Employee(); // destructor 
	
	static int getTotalEmployee(); // static member function 
	void setZIP(int); // Setter function for Postal(ZIP) Code 
	int getZIP()const; // Getter function for Postal(ZIP) Code 
	void print()const; // prints all the details of the employee 
}; // end class Employee

#endif