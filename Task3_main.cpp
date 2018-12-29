/**
* @file Task3_main.cpp
*
* @brief This code implements polymorphism.
*
* @author Saif Ullah Ijaz
*
*/

// SYSTEM INCLUDES
#include <iostream> 
#include <string>
using namespace std;

// LOCAL INCLUDES
#include "SalariedEmp.h" 
#include "HourlyEmp.h"
#include "CommEmp.h"
#include "Manager.h"
#include "Executive.h"

// FUNCTION PROTOTYPE (DECLARATION)

/** function that generates payroll of different employees.
*
* @param emp[] The array of pointers to Employee for which patroll is to be generated.
* @param aSize The number of Employees for which payroll is being generated.
*
* @return void
*/
void generatePayroll(Employee* emp[], int aSize);

// function main begins program execution
void main()
{
	Address add1(27, "Railway Street", "Rawalpindi", "Punjab", 9200), add2; // create Address object 
	Address add3[8];

	Employee* emp[10];
	emp[0] = new SalariedEmp("Saif", "37204-3468934-8", Date(1, 1, 1986), Date(28, 1, 2014), add1, 0.2, 70000);
	emp[1] = new HourlyEmp("Faakhir", "45678-7343456-8", Date(3, 4, 1990), Date(12, 4, 2016), add2, 0.06, 15000, 160, 50);
	emp[2] = new CommEmp("Fuaad", "12345-6789012-3", Date(3, 4, 1988), Date(22, 7, 2016), add3[0], 0.04, 5700, 150000, 10);
	emp[3] = new Executive("Amnah", "37204-3468934-8", Date(12, 2, 1987), Date(25, 3, 2017), add3[1], 0.25, 90000,  "Finance");
	emp[4] = new Manager("Asim", "37404-3457894-2", Date(11, 6, 1981), Date(26, 1, 2010), add3[2], 0.45, 170000,  "Computer Science");
	emp[5] = new Manager("Khurram", "17434-3457594-7", Date(17, 7, 1982), Date(8, 8, 2012), add3[3], 0.43, 150000,  "Finance");
	emp[6] = new HourlyEmp("Shagufta", "15623-4673456-8", Date(14, 1, 1989), Date(5, 3, 2013), add3[4], 0.07,17500, 150, 48);
	emp[7] = new SalariedEmp("Sohail", "17256-3467934-9", Date(24, 3, 1988), Date(2, 3, 2012),  add3[5], 0.15, 50000);
	emp[8] = new SalariedEmp("Tahir", "23246-6467989-2", Date(15, 2, 1985), Date(7, 5, 2013), add3[6], 0.25, 150000);
	emp[9] = new HourlyEmp("Azam", "13675-7547956-9", Date(1,1,2017), Date(19, 9, 1994), add3[7], 0.09, 5500, 150, 20);



	generatePayroll(emp, 10);

	system("pause"); // To pause the console 
}
// end main

// FUNCTION DEFINITION

/* function that generates payroll of different employees.
*/
void generatePayroll(Employee* emp[], int aSize) {

	cout << "Name\t\tTax Rate\tBasic Salary\tNet Salary\tZip Code\n\n";

	for (int i = 0; i < aSize; i++) {
		cout << emp[i]->GetName() << "\t\t" << emp[i]->GetTaxRate() << "\t\t" << emp[i]->GetBasicSalary() << "\t\t"
			<< emp[i]->CalcSalary() << "\t\t" << emp[i]->GetZIP() << '\n';
	}
}
