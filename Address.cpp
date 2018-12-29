#include "Address.h"	// class implemented
#include<string>
using namespace std;

// File scope starts here

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Address Default + Overloaded constructor
Address::Address(int aHouseNo, const string& aStreet, const string& aCity, const string& aProvince, int aPostCode) : mHouseNo(aHouseNo), mStreet(aStreet), mCity(aCity), mProvince(aProvince), mPostCode(aPostCode) {
	// initialization using member intializing list 
	this->SetAddress(aHouseNo, aStreet, aCity, aProvince, aPostCode);
} 
// end Address constructor 


//============================= OPERATORS ====================================

// Stream Insertion
ostream& operator <<(ostream& os, const Address& a) {
	os << a.GetHouseNo() << ", " << a.GetStreet() << "," << endl << a.GetCity() << ", " << a.GetProvince() << "," << endl << a.GetPostCode();
	return os;
} 
// end stream insertion

// Stream Extraction
istream & operator >>(istream & is, Address & a) {
	int hNo, pCode;
	string St, Cty, Prov;

	cout << "Enter House no: ";
	is >> hNo;
	cout << "Enter Street: ";
	is.ignore(100, '\n');
	getline(is, St);
	cout << "Enter City: ";
	getline(is, Cty);
	cout << "Enter Province: ";
	getline(is, Prov);
	cout << "Enter Post Code: ";
	is >> pCode;
	a.SetAddress(hNo, St, Cty, Prov, pCode);

	return is;
} 
// end stream extraction


//============================= OPERATIONS ===================================

// function that prints complete address 
void Address::PrintAddress()const {
	cout << this->GetHouseNo() << ", " << this->GetStreet() << "," << endl << this->GetCity() << ", " << this->GetProvince() << "," << endl << this->GetPostCode() << endl;
} 
// end function PrintAddress 

// static function that prints default address 
void Address::sPrintDefaultAddress() {
	msDefaultAddress.PrintAddress();
} 
// end function sPrintDefaultAddress


//============================= ACESS      ===================================

// function that sets House no
void Address::SetHouseNo(int aHouseNo) {
	if (aHouseNo < 1) {
		cout << "ERROR: House no is invalid. Setting it to default value." << endl;
		this->mHouseNo = msDefaultAddress.GetHouseNo();
	}
	else
		this->mHouseNo = aHouseNo;
} 
// end function SetHouseNo

// function that sets street name
void Address::SetStreet(const string& aStreet) {
	if (aStreet == "") {
		cout << "ERROR: No street info provided. Setting it to default value." << endl;
		this->mStreet = msDefaultAddress.GetStreet();
	}
	else
		this->mStreet = aStreet;
} 
// end function SetStreet

// function that sets city
void Address::SetCity(const string& aCity) {
	if (this->IsValidName(aCity))
		this->mCity = aCity;
	else {
		cout << "ERROR: Invalid city name provided. Setting it to default value." << endl;
		this->mCity = msDefaultAddress.GetCity();
	}
} 
// end function SetCity

// function that sets province
void Address::SetProvince(const string& aProvince) {
	if (this->IsValidName(aProvince))
		this->mProvince = aProvince;
	else {
		cout << "ERROR: Invalid province name provided. Setting it to default value." << endl;
		this->mProvince = msDefaultAddress.GetProvince();
	}
} 
// end function SetProvince

// function that sets post code
void Address::SetPostCode(int aPostCode) {
	if (aPostCode < 1) {
		cout << "ERROR: Post code no is invalid. Setting it to default value." << endl;
		this->mPostCode = msDefaultAddress.GetPostCode();
	}
	else
		this->mPostCode = aPostCode;
} 
// end function SetPostCode

// function that sets the Address
void Address::SetAddress(int aHouseNo, const string& aStreet, const string& aCity, const string& aProvince, int aPostCode) {
	this->SetHouseNo(aHouseNo);
	this->SetStreet(aStreet);
	this->SetCity(aCity);
	this->SetProvince(aProvince);
	this->SetPostCode(aPostCode);
} 
// end function SetAddress

// overloaded function that sets the Address
void Address::SetAddress(const Address& obj) {
	this->SetAddress(obj.GetHouseNo(), obj.GetStreet(), obj.GetCity(), obj.GetProvince(), obj.GetPostCode());
} 
// end function SetAddress

// static function that sets default Address
void Address::sSetDefaultAddress(int aHouseNo, const string& aStreet, const string& aCity, const string& aProvince, int aPostCode) {
	msDefaultAddress.SetAddress(aHouseNo, aStreet, aCity, aProvince, aPostCode);
} 
// end function sSetDefaultAddress

// static overloaded function that sets the default Address
void Address::sSetDefaultAddress(const Address& obj) {
	msDefaultAddress.sSetDefaultAddress(obj.GetHouseNo(), obj.GetStreet(), obj.GetCity(), obj.GetProvince(), obj.GetPostCode());
} 
// end function sSetDefaultAddress

// function that gets House no
int Address::GetHouseNo()const {
	return this->mHouseNo;
} 
// end function GetHouseNo

// function that gets Street
const string& Address::GetStreet()const {
	return this->mStreet;
} 
// end function GetStreet

// function that gets the City
const string& Address::GetCity()const {
	return this->mCity;
} 
// end function GetCity

// function that gets Province
const string& Address::GetProvince()const {
	return this->mProvince;
} 
// end function GetProvince

// function that gets Post code
int Address::GetPostCode()const {
	return this->mPostCode;
} 
// end function GetPostCode

// function that gets the Address
const Address& Address::GetAddress()const {
	return *this;
} 
// end function GetAddress

// static function that gets the default Address
const Address& Address::sGetDefaultAddress() {
	return msDefaultAddress;
} 
// end function sGetDefaultAddress

/////////////////////////////// PRIVATE    ///////////////////////////////////

//============================= INQUIRY    ===================================

/** utility function to check name of city or Province.
* Only checks for alphabetic characters and first cap letter.
*
* @param testName The name to be tested.
*
* @return true if testName is valid, false otherwise.
*/
bool Address::IsValidName(const string& testName)const {
	// first letter must be capital
	if (!isupper(testName[0]))
		return false;
	return !(testName.find_first_not_of("abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ") != std::string::npos);
}
// end function IsValidName


/*private static member cannot be accessed outside the class except for initialization*/
Address Address::msDefaultAddress(30, "Milford Road", "Leicester", "Leicestershire", 1234);	// intitalize class variable 
