#include "CommEmp.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// CommEmp Default + Overloaded Constructor
CommEmp::CommEmp(const string& aName, const string& aNIC, const Date& aDateOfBirth, const Date& aDateOfHire, const Address& aHomeAddress, double aTaxRate, double aBasicSalary, int aSales, double aCommRate) : Employee(aName, aNIC, aDateOfBirth, aDateOfHire, aHomeAddress, aTaxRate, aBasicSalary), mSales(aSales), mCommRate(aCommRate) {
	// base class initilzation using member initlizer list
	this->SetCommEmp(aSales, aCommRate);
}
// end CommEmp constructor


//============================= OPERATIONS ===================================
// Overriding function that prints all the details of the Salaried employee.
void CommEmp::PrintEmployee()const {
	Employee::PrintEmployee();
	cout << "Net Salary: " << this->CalcSalary() << endl;
}
// end function PrintEmployee

// Overriding function that calculates net salary.
double CommEmp::CalcSalary() const {
	double basicSalary, taxRate, grossSalary, tax, netSalary;

	basicSalary = this->GetBasicSalary();
	taxRate = this->GetTaxRate();

	grossSalary = basicSalary + (this->GetSales()*this->GetCommRate());
	tax = grossSalary * taxRate;
	netSalary = grossSalary - tax;

	return netSalary;
}
// end function CalcSalary


//============================= ACESS      ===================================

// function that sets sales of Commissioned Employee
void CommEmp::SetSales(int aSales) {
	if (aSales < 0)
		cout << "ERROR: Sales cannot be nagative." << endl;
	else
		this->mSales = aSales;
}
// end function SetSales

// function that sets commission Rate of Commissioned Employee
void CommEmp::SetCommRate(double aCommRate) {
	if (aCommRate < 0.0)
		cout << "ERROR: Commission rate cannot be nagative." << endl;
	else
		this->mCommRate = aCommRate;
}
// end function SetCommRate

// function that sets the CommEmp
void CommEmp::SetCommEmp(const string& aName, const string& aNIC, const Address& aHomeAddress, double aTaxRate, double aBasicSalary, int aSales, double aCommRate) {
	this->SetEmployee(aName, aNIC, aHomeAddress, aTaxRate, aBasicSalary);
	this->SetCommEmp(aSales, aCommRate);
}
// end function SetCommEmp

// overloaded function that sets the CommEmp
void CommEmp::SetCommEmp(const Employee& aEmployee, int aSales, double aCommRate) {
	this->SetEmployee(aEmployee.GetEmployee());
	this->SetCommEmp(aSales, aCommRate);
}
// end function SetCommEmp

// overloaded function that sets the CommEmp
void CommEmp::SetCommEmp(int aSales, double aCommRate) {
	this->SetSales(aSales);
	this->SetCommRate(aCommRate);
}
// end function SetCommEmp

// overloaded function that sets the CommEmp
void CommEmp::SetCommEmp(const CommEmp& aCommEmp) {
	this->SetCommEmp(aCommEmp.GetEmployee(), aCommEmp.GetSales(), aCommEmp.GetCommRate());
}
// end function SetCommEmp

// function that gets sales of Commissioned Employee
int CommEmp::GetSales()const {
	return this->mSales;
}
// end function GetSales

// function that gets commission Rate of Commissioned Employee
double CommEmp::GetCommRate()const {
	return this->mCommRate;
}
// end function GetCommRate

// function that gets the CommEmp
const CommEmp& CommEmp::GetCommEmp()const {
	return *this;
}
// end function GetCommEmp
