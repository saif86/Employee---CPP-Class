/**  Manager  class inherited from SalariedEmp class.
*
* #include "Manager.h" <BR>
* -llib
*
*/
#ifndef MANAGER_H
#define MANAGER_H

// SYSTEM INCLUDES
#include<iostream>
using std::string;

// LOCAL INCLUDES
#include "SalariedEmp.h"

// Manager class definition
class Manager : public SalariedEmp {
public:
	// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Manager(const string& = "", const string& = "", const Date& = Date::sGetDefaultDate(), const Date& = Date::sGetDefaultDate(), const Address& = Address::sGetDefaultAddress(), double = 0.0, double = 0.0, const string& = "");

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Manager(const Manager&);
	// Manager& operator=(const Manager&);
	// ~Manager();

// OPERATIONS
	/** Overriding function that prints all the details of the Manager.
	*
	* @param void
	*
	* @return void
	*/
	void PrintEmployee()const;

// ACCESS
	// setters
	void SetDepartment(const string& = "");
	void SetManager(const string& = "", const string& = "", const Address& = Address::sGetDefaultAddress(), double = 0.0, double = 0.0, const string& = "");
	/**
	# @overload void SetManager(const SalariedEmp& aSalariedEmp, const string& = "");
	*/
	void SetManager(const SalariedEmp& aSalariedEmp, const string& = "");
	/**
	# @overload void SetManager(const string& = "");
	*/
	void SetManager(int =0, const string& = "");
	/**
	# @overload void SetManager(const Manager& aManager);
	*/
	void SetManager(const Manager& aManager);

	// getters
	const string& GetDepartment()const;
	const Manager& GetManager()const;
private:
	// DATA MEMBERS
	string mDepartment;
};
// end class Manager
#endif  
// _MANAGER_H_
