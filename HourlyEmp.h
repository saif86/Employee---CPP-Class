/**  HourlyEmp class inherited from Employee class.
*
* #include "HourlyEmp.h" <BR>
* -llib
*
*/
#ifndef HOURLY_EMP_H
#define HOURLY_EMP_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Employee.h"

// HourlyEmp class definition
class HourlyEmp : public Employee {
public:
	// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	HourlyEmp(const string& = "", const string& = "", const Date& = Date::sGetDefaultDate(), const Date& = Date::sGetDefaultDate(), const Address& = Address::sGetDefaultAddress(), double = 0.0, double = 0.0, int = 0, double = 0.0);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// HourlyEmp(const HourlyEmp&);
	// HourlyEmp& operator=(const HourlyEmp&);
	// ~HourlyEmp();

// OPERATIONS
	/** Overriding function that prints all the details of the hourly employee.
	*
	* @param void
	*
	* @return void
	*/
	void PrintEmployee()const;
	/** Overriding function that calculates net salary
	* of the HourlyEmp employee
	*
	* @param void
	*
	* @return net salary
	*/
	virtual double CalcSalary()const;

// ACCESS
	// setters
	void SetHours(int = 0);
	void SetHourlyRate(double = 0.0);
	void SetHourlyEmp(const string& = "", const string& = "", const Address& = Address::sGetDefaultAddress(), double = 0.0, double = 0.0, int = 0, double = 0.0);
	/**
	# @overload void SetHourlyEmp(const Employee& aEmployee, int = 0, double = 0.0);
	*/
	void SetHourlyEmp(const Employee& aEmployee, int = 0, double = 0.0);
	/**
	# @overload void SetHourlyEmp(int = 0, double = 0.0);
	*/
	void SetHourlyEmp(int = 0, double = 0.0);
	/**
	# @overload void SetHourlyEmp(const HourlyEmp& aHourlyEmp);
	*/
	void SetHourlyEmp(const HourlyEmp& aHourlyEmp);

	// getters
	int GetHours()const;
	double GetHourlyRate()const;
	const HourlyEmp& GetHourlyEmp()const;
private:
// DATA MEMBERS
	int mHours;
	double mHourlyRate;
};
// end class HourlyEmp
#endif  
// _HOURLY_EMP_H_
