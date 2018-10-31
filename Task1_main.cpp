#include "Employee.h"
//#include "Address.h"
#include<iostream>

using namespace std;
// function main begins program execution 
void main() {
	Address::setDefaultAddress(30, "Milford Road", "Leicester", "Leicestershire", 1234);
	
	cout << "Number of Employees before: " << Employee::getTotalEmployee() << endl;
	// print no. of employees before creating any object 
	
	Address add1(27, "Railway Street", "Rawalpindi", "Punjab", 9200); // create Address object 
	Employee emp1("Saif", 28, "37204-3468934-8", 0.2, 70000, add1); // create Employee object 

	emp1.Print(); // print emp1 detail 

	Employee emp2, emp3; // creating 2 more employee objects 

	cout << "Number of Employees: " << Employee::getTotalEmployee() << endl; // print no. of employees 
	system("pause"); // To pause the console 
}// end function main