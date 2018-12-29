#include "SalariedEmp.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// SalariedEmp Default + Overloaded Constructor
SalariedEmp::SalariedEmp(const string& aName, const string& aNIC, const Date& aDateOfBirth, const Date& aDateOfHire, const Address& aHomeAddress, double aTaxRate, double aBasicSalary) : Employee(aName, aNIC, aDateOfBirth, aDateOfHire, aHomeAddress, aTaxRate, aBasicSalary) {
	// base class initilzation using member initlizer list
}
// end SalariedEmp constructor


//============================= OPERATIONS ===================================
// Overriding function that prints all the details of the Salaried employee.
void SalariedEmp::PrintEmployee()const {
	Employee::PrintEmployee();
	cout << "Net Salary: " << this->CalcSalary() << endl;
}
// end function PrintEmployee

// Overriding function that calculates net salary.
double SalariedEmp::CalcSalary() const{
	double basicSalary, taxRate, grossSalary, tax, netSalary;

	basicSalary = this->GetBasicSalary();
	taxRate = this->GetTaxRate();

	grossSalary = basicSalary + 0.0;
	tax = grossSalary * taxRate;
	netSalary = grossSalary - tax;

	return netSalary;
}
// end function CalcSalary

//============================= ACESS      ===================================

// function that sets SalariedEmp
void SalariedEmp::SetSalariedEmp(const string& aName, const string& aNIC, const Address& aHomeAddress, double aTaxRate, double aBasicSalary) {
	this->SetEmployee(aName, aNIC, aHomeAddress, aTaxRate, aBasicSalary);
}
// end function SetSalariedEmp

// overloaded function that sets SalariedEmp
void SalariedEmp::SetSalariedEmp(const Employee& aEmployee) {
	this->SetEmployee(aEmployee.GetEmployee());
}
// end function SetSalariedEmp

// overloaded function that sets SalariedEmp
void SalariedEmp::SetSalariedEmp(const SalariedEmp& aSalariedEmp) {
	this->SetSalariedEmp(aSalariedEmp.GetEmployee());
}
// end function SetSalariedEmp

// function that gets the SalariedEmp
const SalariedEmp& SalariedEmp::GetSalariedEmp()const {
	return *this;
}
// end function GetSalariedEmp
