/**  Executive class inherited from SalariedEmp class.
*
* #include "Executive.h" <BR>
* -llib
*
*/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Manager.h"

// Executive class definition
class Executive : public Manager {
public:
	// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Executive(const string& = "", const string& = "", const Date& = Date::sGetDefaultDate(), const Date& = Date::sGetDefaultDate(), const Address& = Address::sGetDefaultAddress(), double = 0.0, double = 0.0, const string& = "");

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Executive(const Executive&);
	// Executive& operator=(const Executive&);
	// ~Executive();

// OPERATIONS
	/** Overriding function that prints all the details of the Executive.
	*
	* @param void
	*
	* @return void
	*/
	void PrintEmployee()const;

	// ACCESS
	// setters
	void SetExecutive(const string& = "", const string& = "", const Address& = Address::sGetDefaultAddress(), double = 0.0, double = 0.0, const string& = "");
	/**
	# @overload void SetExecutive(const Manager& aManager);
	*/
	void SetExecutive(const Manager& aManager);
	/**
	# @overload void SetExecutive(const Executive& aExecutive);
	*/
	void SetExecutive(const Executive& aExecutive);

	// getters
	const Executive& GetExecutive()const;
};
// end class Executive
#endif  
// _EXECUTIVE_H_
