/**  Employee class as an example of Composition.
*
* #include "Employee.h" <BR>
* -llib
*
*/
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

// SYSTEM INCLUDES
#include<iostream>
using std::string;

// LOCAL INCLUDES
#include"Date.h"
#include"Address.h"


// Employee class definition 
class Employee {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Employee(const string& = "", const string& = "", const Date& = Date::sGetDefaultDate(), const Date& = Date::sGetDefaultDate(), const Address& = Address::sGetDefaultAddress(), double = 0.0, double = 0.0);

	/** Copy constructor.
	*/
	Employee(const Employee&);

	/** destructor.
	*/
	~Employee();

	// Use compiler-generated assignment.
	// Employee& operator=(const Employee&);

// OPERATORS
	/** Stream Insertion operator.
	*
	* @param os Standard Output Stream.
	* @param from The value to be inserted to the output stream.
	*
	* @return A reference to the standard output stream.
	*/
	friend std::ostream& operator <<(std::ostream& os, const Employee& from);

	/** Stream Extraction operator.
	*
	* @param is Standard Intput Stream.
	* @param to The value to be extracted from the input stream.
	*
	* @return A reference to the standard input stream.
	*/
	friend std::istream& operator >>(std::istream& is, Employee& to);

// OPERATIONS
	/** function that prints all the details of the employee.
	*
	* @param void
	*
	* @return void
	*/
	void PrintEmployee()const;

	/** Pure virtual function that will be used to calculate 
	* net salary of the derived employee class(es). 
	* It makes Employee an Abstract class.
	*
	* @param void
	*
	* @return net salary
	*/
	virtual double CalcSalary()const = 0;

// ACCESS
	// setters
	void SetName(const string& = "");
	void SetNIC(const string& = "");
	void SetHomeAddress(int = 0, const string& = "", const string& = "", const string& = "", int = 0);
	/**
	# @overload void SetHomeAddress(const Address& aAddress);
	*/
	void SetHomeAddress(const Address& aAddress);
	// Setter function for Postal(ZIP) Code
	void SetZIP(int = 0);
	void SetTaxRate(double = 0.0);
	void SetBasicSalary(double = 0.0);
	void SetEmployee(const string& = "", const string& = "", const Address& = Address::sGetDefaultAddress(), double = 0.0, double = 0.0);
	/**
	# @overload void SetEmployee(const Employee& aEmployee);
	*/
	void SetEmployee(const Employee& aEmployee);
	
	
	// getters
	const string& GetName()const;
	const string& GetNIC()const;
	const Date& GetDOB()const;
	const Date& GetDOJ()const;
	const Address& GetHomeAddress()const;
	// Getter function for Postal(ZIP) Code
	int GetZIP()const; 
	double GetTaxRate()const;
	double GetBasicSalary()const;
	const Employee& GetEmployee()const;
	static int sGetTotalEmployee();

private:
// INQUIRY
	/** utility function to check name of employee.
	* Only checks for alphabetic characters and first cap letter.
	*
	* @param testName The reference to the name to be tested.
	*
	* @return true if testName is valid, false otherwise.
	*/
	bool IsValidName(const string& testName)const;

	/** utility function to check validity of NIC
	* Only checks for alphanumeric characters and no of characters entered.
	*
	* @param testNIC The reference to the NIC to be tested.
	*
	* @return true if testNIC is valid, false otherwise.
	*/
	bool IsValidNIC(const string& testNIC)const;

// DATA MEMBERS
	string mName;
	string mNIC;
	const Date mBirthDate;
	const Date mHireDate;
	Address mHomeAddress;
	double mTaxRate;
	double mBasicSalary;
	// class variable to count total no. of employees
	static int msNoOfEmployees;		
}; 
// end class Employee

#endif
// _EMPLOYEE_H_
