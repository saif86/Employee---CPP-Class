/**  Address class to handle addresses in a C++ code.
*
* #include "Address.h" <BR>
* -llib
*
*/
#ifndef ADDRESS_H
#define ADDRESS_H

// SYSTEM INCLUDES
#include<iostream>
using std::string;

// Address class definition 
class Address {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Address(int = 0, const string& = "", const string& = "", const string& = "", int = 0);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Address(const Address&);
	// Address& operator=(const Address&);
	// ~Address();

// OPERATORS
	/** Stream Insertion operator.
	*
	* @param os Standard Output Stream.
	* @param from The value to be inserted to the output stream.
	*
	* @return A reference to the standard output stream.
	*/
	friend std::ostream& operator <<(std::ostream& os, const Address& from);

	/** Stream Extraction operator.
	*
	* @param is Standard Intput Stream.
	* @param to The value to be extracted from the input stream.
	*
	* @return A reference to the standard input stream.
	*/
	friend std::istream& operator >>(std::istream& is, Address& to);

// OPERATIONS
	/** function that prints the complete address.
	*
	* @param void
	*
	* @return void
	*/
	void PrintAddress()const;

	/** static function that prints the default address
	*
	* @param void
	*
	* @return void
	*/
	static void sPrintDefaultAddress();

// ACCESS

	// setters
	void SetHouseNo(int = 0);
	void SetStreet(const string& = "");
	void SetCity(const string& = "");
	void SetProvince(const string& = "");
	void SetPostCode(int = 0);
	void SetAddress(int = 0, const string& = "", const string& = "", const string& = "", int = 0);
	/**
	# @overload void SetAddress(const Address& aAddress);
	*/
	void SetAddress(const Address& aAddress);
	static void sSetDefaultAddress(int = 0, const string& = "", const string& = "", const string& = "", int = 0);
	/**
	# @overload static void sSetDefaultAddress(const Address& aDefaultAddress)
	*/
	static void sSetDefaultAddress(const Address& aDefaultAddress);

	// getters
	int GetHouseNo()const;
	const string& GetStreet()const;
	const string& GetCity()const;
	const string& GetProvince()const;
	int GetPostCode()const;
	const Address& GetAddress()const;
	static const Address& sGetDefaultAddress();

private:
// INQUIRY
	/** utility function to check name of city or Province.
	* Only checks for alphabetic characters and first cap letter.
	*
	* @param testName The reference to name to be tested.
	*
	* @return true if testName is valid, false otherwise.
	*/
	bool IsValidName(const string& testName)const;

// DATA MEMBERS
	int mHouseNo;
	string mStreet;
	string mCity;
	string mProvince;
	int mPostCode;
	// class variable shared by all objects of Address class
	static Address msDefaultAddress; 
}; 
// end class Address
#endif 
// _ADDRESS_H_
