#include "Executive.h" 

void main() { 
	Address add1(27, "Railway Street", "Rawalpindi", "Punjab", 9200); // create Address object 
	Executive e1("Saif", 28, "37204-3468934-8", 0.2, 70000, add1, "Computer Science"); // create Executive object 
	e1.Print();
	
	system("Pause"); 
}