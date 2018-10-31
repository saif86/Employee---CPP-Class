#include "SalariedEmp.h" 
#include<iostream>

using namespace std;

SalariedEmp::SalariedEmp(char* aName, int aAge, char* aNIC, double aTaxRate, double aBasicSalary, Address add) :Employee(aName, aAge, aNIC, aTaxRate, aBasicSalary, add) { }


void SalariedEmp::Print() {
	Employee::Print();
	cout << "Net Salary: " << calcSalary() << endl;
}

double SalariedEmp::calcSalary() {
	double basicSalary, taxRate, grossSalary, tax, netSalary;
	
	basicSalary = getBasicSalary();
	taxRate = getTaxRate();

	grossSalary = basicSalary + 0.0;
	tax = grossSalary * taxRate;
	netSalary = grossSalary - tax;

	return netSalary;
}
