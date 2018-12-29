/**  CommEmp  class inherited from Employee class.
*
* #include "CommEmp .h" <BR>
* -llib
*
*/
#ifndef COMM_EMP_H
#define COMM_EMP_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Employee.h"

// CommEmp class definition
class CommEmp : public Employee {
public:
	// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	CommEmp(const string& = "", const string& = "", const Date& = Date::sGetDefaultDate(), const Date& = Date::sGetDefaultDate(), const Address& = Address::sGetDefaultAddress(), double = 0.0, double = 0.0, int = 0, double = 0.0);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// CommEmp(const CommEmp&);
	// CommEmp& operator=(const CommEmp&);
	// ~CommEmp();

// OPERATIONS
	/** Overriding function that prints all the details of the commissioned employee.
	*
	* @param void
	*
	* @return void
	*/
	void PrintEmployee()const;
	/** Overriding function that calculates net salary
	* of the commissioned employee
	*
	* @param void
	*
	* @return net salary
	*/
	virtual double CalcSalary()const;
	
// ACCESS
	// setters
	void SetSales(int = 0);
	void SetCommRate(double = 0.0);
	void SetCommEmp(const string& = "", const string& = "", const Address& = Address::sGetDefaultAddress(), double = 0.0, double = 0.0, int = 0, double = 0.0);
	/**
	# @overload void SetCommEmp(const Employee& aEmployee, int = 0, double = 0.0);
	*/
	void SetCommEmp(const Employee& aEmployee, int = 0, double = 0.0);
	/**
	# @overload void SetCommEmp(int = 0, double = 0.0);
	*/
	void SetCommEmp(int = 0, double = 0.0);
	/**
	# @overload void SetCommEmp(const CommEmp& aCommEmp);
	*/
	void SetCommEmp(const CommEmp& aCommEmp);

	// getters
	int GetSales()const;
	double GetCommRate()const;
	const CommEmp& GetCommEmp()const;
private:
// DATA MEMBERS
	int mSales;
	double mCommRate;
};
// end class CommEmp
#endif  
// _COMM_EMP_H_
