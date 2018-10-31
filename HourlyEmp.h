#ifndef HourlyEmp_HEADER 
#define HourlyEmp_HEADER

#include "Employee.h" 

// HourlyEmp class definition 
class HourlyEmp :public Employee {
private:
	int hours;
	double hourlyRate;
public:
	HourlyEmp(char* = "", int = 0, char* = "", double = 0.0, int =0, double = 0.0, Address = Address::getDefaultAddress());
	void Print();
	virtual double calcSalary();

}; // end class HourlyEmp

#endif
