#include "Address.h"
#include<iostream>

using namespace std;

// Address default constructor initializes all data members to empty string and zero 
Address::Address() :HouseNo(0), Street(""), City(""), Province(""), PostCode(0){
	// initialization using member intializing list 
} // end default constructor Address 
  
  // Address overloaded constructor initializes all data members to user supplied values 
Address::Address(int aHouseNo = 0, char* aStreet = "", char* aCity = "", char* aProvince = "", int aPostCode = 0) : HouseNo(aHouseNo), Street(aStreet), City(aCity), Province(aProvince), PostCode(aPostCode){
	// initialization using member intializing list 
} // end overloaded constructor Address 
  
  // print complete address 
void Address::PrintAddress()const{
	cout << HouseNo << ", " << Street << "," << endl << City << ", " << Province << "," << endl << getPostCode() << endl; 
} // end function PrintAddress 
  
  // set Post Code value 
void Address::setPostCode(int aPostCode){
	PostCode = aPostCode; 
} // end function setPostCode 
  
  // get Post code value 
int Address::getPostCode()const{
	return PostCode; 
} // end function getPostCode