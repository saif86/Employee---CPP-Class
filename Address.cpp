#include "Address.h"
#include<iostream>
#include<cstring>

using namespace std;

// File scope starts here 

/*private static member cannot be accessed outside the class except for initialization*/
//Address Address::defaultAddress(0, "Milford Road", "Leicester", "Leicestershire", 1234);	// intitalize class variable 
Address Address::defaultAddress(00, "", "", "", 0000);	// intitalize class variable 

// Address default + overloaded constructor initializes all data members to user supplied values 
Address::Address(int aHouseNo, char* aStreet, char* aCity, char* aProvince, int aPostCode) : HouseNo(aHouseNo), Street(aStreet), City(aCity), Province(aProvince), PostCode(aPostCode) {
	// initialization using member intializing list 
	if (aHouseNo == 0)
		HouseNo = defaultAddress.HouseNo;
	if (aStreet == "") {
		Street = new char[strlen(defaultAddress.Street) + 1];
		strcpy_s(Street, strlen(defaultAddress.Street) + 1, defaultAddress.Street);
	}
		
	if (aCity == "") {
		City = new char[strlen(defaultAddress.City) + 1];
		strcpy_s(City, strlen(defaultAddress.City) + 1, defaultAddress.City);
	}
	if (aProvince == "") {
		Province = new char[strlen(defaultAddress.Province) + 1];
		strcpy_s(Province, strlen(defaultAddress.Province) + 1, defaultAddress.Province);
	}
	if (aPostCode == 0)
		PostCode = defaultAddress.PostCode;
} // end overloaded constructor Address 

/* Copy constructor with deep copy for pointer members*/
Address::Address(const Address &obj) : HouseNo(obj.HouseNo), PostCode(obj.PostCode) {
	Street = new char[strlen(obj.Street) + 1];
	strcpy_s(Street, strlen(obj.Street) + 1, obj.Street);

	City = new char[strlen(obj.City) + 1];
	strcpy_s(City, strlen(obj.City) + 1, obj.City);

	Province = new char[strlen(obj.Province) + 1];
	strcpy_s(Province, strlen(obj.Province) + 1, obj.Province);
}

// print complete address 
void Address::PrintAddress()const {
	cout << HouseNo << ", " << Street << "," << endl << City << ", " << Province << "," << endl << getPostCode() << endl;
} // end function PrintAddress 

// set Post Code value 
void Address::setPostCode(int aPostCode) {
	PostCode = aPostCode;
} // end function setPostCode 

// get Post code value 
int Address::getPostCode()const {
	return PostCode;
} // end function getPostCode

// set default Address
void Address::setDefaultAddress(int aHouseNo, char * aStreet, char * aCity, char * aProvince, int aPostCode) {
	defaultAddress.HouseNo = aHouseNo;
	
	if (defaultAddress.Street)
		delete[]defaultAddress.Street;
	defaultAddress.Street = new char[strlen(aStreet) + 1];
	strcpy_s(defaultAddress.Street, strlen(aStreet) + 1, aStreet);

	if (defaultAddress.City)
		delete[]defaultAddress.City;
	defaultAddress.City = new char[strlen(aCity) + 1];
	strcpy_s(defaultAddress.City, strlen(aCity) + 1, aCity);

	if (defaultAddress.Province)
		delete[]defaultAddress.Province;
	defaultAddress.Province = new char[strlen(aProvince) + 1];
	strcpy_s(defaultAddress.Province, strlen(aProvince) + 1, aProvince);

	defaultAddress.PostCode = aPostCode;
}

Address  Address::getDefaultAddress() {
	return defaultAddress;
}
void Address::printDefaultAddress(){
	defaultAddress.PrintAddress();
}

