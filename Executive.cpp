#include "Executive.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Executive Default + Overloaded Constructor
Executive::Executive(const string& aName, const string& aNIC, const Date& aDateOfBirth, const Date& aDateOfHire, const Address& aHomeAddress, double aTaxRate, double aBasicSalary, const string& aDepartment) : Manager(aName, aNIC, aDateOfBirth, aDateOfHire, aHomeAddress, aTaxRate, aBasicSalary, aDepartment) {
	// base class initilzation using member initlizer list
}
// end Executive constructor


//============================= OPERATIONS ===================================
// Overriding function that prints all the details of the Manager.
void Executive::PrintEmployee()const {
	cout << "Executive" << endl;
	Manager::PrintEmployee();
}
// end function PrintEmployee


//============================= ACESS      ===================================

// function that sets the Executive
void Executive::SetExecutive(const string& aName, const string& aNIC, const Address& aHomeAddress, double aTaxRate, double aBasicSalary, const string& aDepartment) {
	this->SetManager(aName, aNIC, aHomeAddress, aTaxRate, aBasicSalary, aDepartment);
}
// end function SetExecutive

// overloaded function that sets the Executive
void Executive::SetExecutive(const Manager& aManager) {
	this->SetSalariedEmp(aManager.GetManager());
}
// end function SetExecutive

// overloaded function that sets the Executive
void Executive::SetExecutive(const Executive& aExecutive) {
	this->SetExecutive(aExecutive.GetManager());
}
// end function SetExecutive

// function that gets the Executive
const Executive& Executive::GetExecutive()const {
	return *this;
}
// end function GetExecutive
