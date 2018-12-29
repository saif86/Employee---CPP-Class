/**  SalariedEmp class inherited from Employee class.
*
* #include "SalariedEmp.h" <BR>
* -llib
*
*/
#ifndef SALARIED_EMP_H
#define SALARIED_EMP_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Employee.h"

// SalariedEmp class definition
class SalariedEmp : public Employee {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	SalariedEmp(const string& = "", const string& = "", const Date& = Date::sGetDefaultDate(), const Date& = Date::sGetDefaultDate(), const Address& = Address::sGetDefaultAddress(), double = 0.0, double = 0.0);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// SalariedEmp(const SalariedEmp&);
	// SalariedEmp& operator=(const SalariedEmp&);
	// ~SalariedEmp();

// OPERATIONS
	/** Overriding function that prints all the details of the Salaried employee.
	*
	* @param void
	*
	* @return void
	*/
	void PrintEmployee()const;

	/** Overriding function that calculates net salary 
	* of the salaried employee
	*
	* @param void
	*
	* @return net salary
	*/
	virtual double CalcSalary()const;
// ACCESS
	// setters
	void SetSalariedEmp(const string& = "", const string& = "", const Address& = Address::sGetDefaultAddress(), double = 0.0, double = 0.0);
	/**
	# @overload void SetSalariedEmp(const Employee& aEmployee);
	*/
	void SetSalariedEmp(const Employee& aEmployee);
	/**
	# @overload void SetSalariedEmp(const SalariedEmp& aSalariedEmp);
	*/
	void SetSalariedEmp(const SalariedEmp& aSalariedEmp);

	// getters
	const SalariedEmp& GetSalariedEmp()const;
};
// end class SalariedEmp
#endif  
// _SALARIED_EMP_H_
