#include "Manager.h"  // class implemented
#include<string>
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Manager Default + Overloaded Constructor
Manager::Manager(const string& aName, const string& aNIC, const Date& aDateOfBirth, const Date& aDateOfHire, const Address& aHomeAddress, double aTaxRate, double aBasicSalary, const string& aDepartment) : SalariedEmp(aName, aNIC, aDateOfBirth, aDateOfHire, aHomeAddress, aTaxRate, aBasicSalary), mDepartment(aDepartment) {
	// base class initilzation using member initlizer list
	this->SetManager(0,aDepartment);
}
// end Manager constructor


//============================= OPERATIONS ===================================
// Overriding function that prints all the details of the Manager.
void Manager::PrintEmployee()const {
	SalariedEmp::PrintEmployee();
	cout << "Department: " << this->GetDepartment() << endl;
}
// end function PrintEmployee


//============================= ACESS      ===================================

// function that sets department of Manager
void Manager::SetDepartment(const string& aDepartment) {
	this->mDepartment = aDepartment;
}
// end function SetDepartment

// function that sets the Manager
void Manager::SetManager(const string& aName, const string& aNIC, const Address& aHomeAddress, double aTaxRate, double aBasicSalary, const string& aDepartment) {
	this->SetSalariedEmp(aName, aNIC, aHomeAddress, aTaxRate, aBasicSalary);
	this->SetManager(0,aDepartment);
}
// end function SetManager

// overloaded function that sets the Manager
void Manager::SetManager(const SalariedEmp& aSalariedEmp, const string& aDepartment) {
	this->SetSalariedEmp(aSalariedEmp.GetSalariedEmp());
	this->SetManager(0,aDepartment);
}
// end function SetManager

// overloaded function that sets the Manager
void Manager::SetManager(int aDummy, const string& aDepartment) {
	this->SetDepartment(aDepartment);
}
// end function SetManager

// overloaded function that sets the Manager
void Manager::SetManager(const Manager& aManager) {
	this->SetManager(aManager.GetSalariedEmp(), aManager.GetDepartment());
}
// end function SetManager

// function that gets department of Manager
const string& Manager::GetDepartment()const {
	return this->mDepartment;
}
// end function GetSales


// function that gets the Manager
const Manager& Manager::GetManager()const {
	return *this;
}
// end function GetManager
