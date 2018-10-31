#ifndef SalariedEmp_HEADER 
#define SalariedEmp_HEADER

#include "Employee.h" 

// SalariedEmp class definition 
class SalariedEmp :public Employee {
public:
	SalariedEmp(char* = "", int = 0, char* = "", double = 0.0, double = 0.0, Address = Address::getDefaultAddress());
	void Print();
	virtual double calcSalary();

}; // end class SalariedEmp

#endif
