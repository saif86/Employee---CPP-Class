#ifndef Manager_HEADER 
#define Manager_HEADER

#include "Employee.h"
#include<iostream>

// Manager class definition 
class Manager :public Employee { 
	char* Department; 
public: 
	Manager(char* = "", int = 0, char* = "", double = 0.0, Address = Address::getDefaultAddress(), char* = "");
	void Print(); 
}; // end class Manager

#endif
