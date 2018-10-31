#ifndef CommEmp_HEADER 
#define CommEmp_HEADER

#include "Employee.h" 

// CommEmp class definition 
class CommEmp :public Employee {
private:
	int sales;
	double commRate;
public:
	CommEmp(char* = "", int = 0, char* = "", double = 0.0, int = 0, double = 0.0, Address = Address::getDefaultAddress());
	void Print();
	virtual double calcSalary();

}; // end class CommEmp

#endif