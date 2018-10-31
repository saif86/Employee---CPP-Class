#ifndef Manager_HEADER 
#define Manager_HEADER

#include "SalariedEmp.h"
#include<iostream>

// Manager class definition 
class Manager :public SalariedEmp {
	char* Department; 
public: 
	Manager(char* = "", int = 0, char* = "", double = 0.0, double = 0.0, Address = Address::getDefaultAddress(), char* = "");
	void Print(); 
}; // end class Manager

#endif
