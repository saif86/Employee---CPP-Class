#include "HourlyEmp.h" 
#include<iostream>

using namespace std;

HourlyEmp::HourlyEmp(char* aName, int aAge, char* aNIC, double aTaxRate, int aHours, double aHourlyRate, Address add) :Employee(aName, aAge, aNIC, aTaxRate, 0, add), hours(aHours), hourlyRate(aHourlyRate){ }


void HourlyEmp::Print() {
	Employee::Print();
	cout << "Net Salary: " << calcSalary() << endl;
}

double HourlyEmp::calcSalary() {
	double basicSalary, taxRate, grossSalary, tax, netSalary;

	basicSalary = getBasicSalary();
	taxRate = getTaxRate();

	grossSalary = basicSalary + (hours * hourlyRate);

	tax = grossSalary * taxRate;
	netSalary = grossSalary - tax;

	return netSalary;
}
