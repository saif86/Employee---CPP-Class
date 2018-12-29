/**
* @file Task2_main.cpp
*
* @brief This code implements function overriding.
*
* @author Saif Ullah Ijaz
*
*/

// SYSTEM INCLUDES
#include <iostream> 
#include <string>
using namespace std;

// LOCAL INCLUDES
#include"Executive.h"

// function main begins program execution
void main()
{
	Address add1(27, "Railway Street", "Rawalpindi", "Punjab", 9200); // create Address object 
	Executive e1("Saif Ullah Ijaz", "AD1673333", Date(1, 1, 1986), Date(28, 1, 2014), add1, 0.40, 30000, "Computer Science"); // create Employee object 

	e1.PrintEmployee(); // print emp1 detail 

	system("pause"); // To pause the console 
}
// end main
