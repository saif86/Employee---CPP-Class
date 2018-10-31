#include "SalariedEmp.h" 
#include "HourlyEmp.h"
#include "CommEmp.h"
#include "Manager.h"
#include "Executive.h"
#include <iostream>

using namespace std;

void generatePayroll(Employee* [], int);

void main() {
	Address add1(27, "Railway Street", "Rawalpindi", "Punjab", 9200), add2; // create Address object 
	Address add3[8];

	Employee* emp[10];
	emp[0] = new SalariedEmp("Saif", 28, "37204-3468934-8", 0.2, 70000, add1);
	emp[1] = new HourlyEmp("Faakhir",25, "45678-7343456-8",  0.06, 160, 50, add2);
	emp[2] = new CommEmp("Fuaad", 27, "12345-6789012-3", 0.04, 150000, 10, add3[0]);
	emp[3] = new Executive("Amnah", 28, "37204-3468934-8", 0.25, 90000, add3[1], "Finance");
	emp[4] = new Manager("Asim", 38, "37404-3457894-2", 0.45, 170000, add3[2], "Computer Science");
	emp[5] = new Manager("Khurram", 35, "17434-3457594-7", 0.43, 150000, add3[3], "Finance");
	emp[6] = new HourlyEmp("Shagufta", 26, "15623-4673456-8", 0.07, 150, 48, add3[4]);
	emp[7] = new SalariedEmp("Sohail", 26, "17256-3467934-9", 0.15, 50000, add3[5]);
	emp[8] = new SalariedEmp("Tahir", 29, "23246-6467989-2", 0.25, 150000, add3[6]);
	emp[9] = new HourlyEmp("Azam", 23, "13675-7547956-9", 0.09, 150, 20, add3[7]);
	


	generatePayroll(emp, 10);


	system("Pause");
}

void generatePayroll(Employee* emp[], int size) {

	cout << "Name\t\tTax Rate\tBasic Salary\tNet Salary\tZip Code\n\n";

	for (int i = 0; i < size; i++) {
		cout << emp[i]->getName() << "\t\t" << emp[i]->getTaxRate() << "\t\t" << emp[i]->getBasicSalary() << "\t\t"
			 << emp[i]->calcSalary() <<"\t\t" << emp[i]->getZIP() << '\n';
	}
}
