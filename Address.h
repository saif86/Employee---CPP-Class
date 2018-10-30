#ifndef Address_HEADER 
#define Address_HEADER

// Address class definition 
class Address {
	int HouseNo;
	char * Street;
	char * City;
	char * Province;
	int PostCode;
	static Address defaultAddress;

public:
	Address(int = 0, char* = "", char* = "", char* = "", int = 0);	// default + overloaded constructor
	Address(const Address &);		//copy constructor

	void PrintAddress()const;	// prints the complete address 
	void setPostCode(int);		// Setter function for Postal Code 
	int getPostCode() const;	// Getter function for Postal Code 

	static void setDefaultAddress(int = 0, char * = "", char * = "", char * = "", int = 0);
	static Address getDefaultAddress();
	static void printDefaultAddress(); // static member function 
}; // end class Address

#endif