#ifndef Address_HEADER 
#define Address_HEADER

// Address class definition 
class Address{ 
	int HouseNo; 
	char * Street; 
	char * City; 
	char * Province; 
	int PostCode; 
public: 
	Address();		// default constructor 
	Address(int, char*, char*, char*, int);	// overloaded constructor
	
	void PrintAddress()const;	// prints the complete address 
	void setPostCode(int);		// Setter function for Postal Code 
	int getPostCode() const;	// Getter function for Postal Code 
}; // end class Address

#endif