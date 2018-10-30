#ifndef Executive_HEADER 
#define Executive_HEADER

#include "Manager.h" 

class Executive :public Manager { 
public: 
	Executive(char* = "", int = 0, char* = "", double = 0.0, Address = Address::getDefaultAddress(), char* = "");
	void Print(); 
};

#endif
