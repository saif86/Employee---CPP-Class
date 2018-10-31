#include "CommEmp.h" 
#include<iostream>

using namespace std;

CommEmp::CommEmp(char* aName, int aAge, char* aNIC, double aTaxRate, int aSales, double aCommRate, Address add) :Employee(aName, aAge, aNIC, aTaxRate, 0, add), sales(aSales), commRate(aCommRate) { }


void CommEmp::Print() {
	Employee::Print();
	cout << "Net Salary: " << calcSalary() << endl;
}

double CommEmp::calcSalary() {
	double basicSalary, taxRate, grossSalary, tax, netSalary;

	basicSalary = getBasicSalary();
	taxRate = getTaxRate();

	grossSalary = basicSalary + (sales * commRate);

	tax = grossSalary * taxRate;
	netSalary = grossSalary - tax;

	return netSalary;
}
