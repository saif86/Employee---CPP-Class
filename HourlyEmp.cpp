#include "HourlyEmp.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// CommEmp Default + Overloaded Constructor
HourlyEmp::HourlyEmp(const string& aName, const string& aNIC, const Date& aDateOfBirth, const Date& aDateOfHire, const Address& aHomeAddress, double aTaxRate, double aBasicSalary, int aHours, double aHourlyRate) : Employee(aName, aNIC, aDateOfBirth, aDateOfHire, aHomeAddress, aTaxRate, aBasicSalary), mHours(aHours), mHourlyRate(aHourlyRate) {
	// base class initilzation using member initlizer list
	this->SetHourlyEmp(aHours, aHourlyRate);
}
// end HourlyEmp constructor


//============================= OPERATIONS ===================================
// Overriding function that prints all the details of the Hourly employee.
void HourlyEmp::PrintEmployee()const {
	Employee::PrintEmployee();
	cout << "Net Salary: " << this->CalcSalary() << endl;
}
// end function PrintEmployee

// Overriding function that calculates net salary.
double HourlyEmp::CalcSalary() const {
	double basicSalary, taxRate, grossSalary, tax, netSalary;

	basicSalary = this->GetBasicSalary();
	taxRate = this->GetTaxRate();

	grossSalary = basicSalary + (this->GetHours()*this->GetHourlyRate());
	tax = grossSalary * taxRate;
	netSalary = grossSalary - tax;

	return netSalary;
}
// end function CalcSalary


//============================= ACESS      ===================================

// function that sets sales of Commissioned Employee
void HourlyEmp::SetHours(int aHours) {
	if (aHours < 0)
		cout << "ERROR: Sales cannot be nagative." << endl;
	else
		this->mHours = aHours;
}
// end function SetHours

// function that sets commission Rate of Commissioned Employee
void HourlyEmp::SetHourlyRate(double aHourlyRate) {
	if (aHourlyRate < 0.0)
		cout << "ERROR: Commission rate cannot be nagative." << endl;
	else
		this->mHourlyRate = aHourlyRate;
}
// end function SetHourlyRate

// function that sets the HourlyEmp
void HourlyEmp::SetHourlyEmp(const string& aName, const string& aNIC, const Address& aHomeAddress, double aTaxRate, double aBasicSalary, int aHours, double aHourlyRate) {
	this->SetEmployee(aName, aNIC, aHomeAddress, aTaxRate, aBasicSalary);
	this->SetHourlyEmp(aHours, aHourlyRate);
}
// end function SetHourlyEmp

// overloaded function that sets the HourlyEmp
void HourlyEmp::SetHourlyEmp(const Employee& aEmployee, int aHours, double aHourlyRate) {
	this->SetEmployee(aEmployee.GetEmployee());
	this->SetHourlyEmp(aHours, aHourlyRate);
}
// end function SetHourlyEmp

// overloaded function that sets the HourlyEmp
void HourlyEmp::SetHourlyEmp(int aHours, double aHourlyRate) {
	this->SetHours(aHours);
	this->SetHourlyRate(aHourlyRate);
}
// end function SetHourlyEmp

// overloaded function that sets the HourlyEmp
void HourlyEmp::SetHourlyEmp(const HourlyEmp& aHourlyEmp) {
	this->SetHourlyEmp(aHourlyEmp.GetEmployee(), aHourlyEmp.GetHours(), aHourlyEmp.GetHourlyRate());
}
// end function SetHourlyEmp

// function that gets hours of Hourly Employee
int HourlyEmp::GetHours()const {
	return this->mHours;
}
// end function GetHours

// function that gets hourly Rate of Hourly Employee
double HourlyEmp::GetHourlyRate()const {
	return this->mHourlyRate;
}
// end function GetHourlyRate

// function that gets the HourlyEmp
const HourlyEmp& HourlyEmp::GetHourlyEmp()const {
	return *this;
}
// end function GetHourlyEmp
