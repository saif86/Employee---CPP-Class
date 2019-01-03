/**  Date class to handle dates in a C++ code.
*
* #include "Date.h" <BR>
* -llib
*
*/
#ifndef DATE_H
#define DATE_H

// SYSTEM INCLUDES
#include<iostream>
#include <ctime>


// Date class definition
class Date {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Date(int = 0, int = 0, int = 0);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Date(const Date&);
	// Date& operator=(const Date&);
	// ~Date();

// OPERATORS
	/** Stream Insertion operator.
	*
	* @param os Standard Output Stream.
	* @param from The value to be inserted to the output stream.
	*
	* @return A reference to the standard output stream.
	*/
	friend std::ostream& operator <<(std::ostream& os, const Date& from);

	/** Stream Extraction operator.
	*
	* @param is Standard Intput Stream.
	* @param to The value to be extracted from the input stream.
	*
	* @return A reference to the standard input stream.
	*/
	friend std::istream& operator >>(std::istream& is, Date& to);

// OPERATIONS
	/** Add 'X' no. of days to the date object.
	*
	* @param x The no. of days to be added.
	*
	* @return void
	*/
	void AddDay(int x = 0);

	/** Add 'X' no. of months to the date object.
	*
	* @param x The no. of months to be added.
	*
	* @return void
	*/
	void AddMonth(int x = 0);

	/** Add 'X' no. of years to the date object.
	*
	* @param x The no. of years to be added.
	*
	* @return void
	*/
	void AddYear(int x = 0);

	/** Calculate age in years till to date.
	*
	* @param void
	*
	* @return calculated age in years.
	*/
	double CaclAge();

// ACCESS
	// setters
	void SetDay(int = 0);
	void SetMonth(int = 0);
	void SetYear(int = 0);
	void SetDate(int = 0, int = 0, int = 0);
	/**
	# @overload void SetDate(const Date& aDate)
	*/
	void SetDate(const Date&);
	/**
	# static function that sets default date
	*/
	static void sSetDefaultDate(int = 0, int = 0, int = 0);

	// getters
	int GetDay()const;
	int GetMonth()const;
	int GetYear()const;
	const Date& GetDate()const;
	static const Date& sGetDefaultDate();
	static Date sGetTodaysDate();

private:
// INQUIRY
	/** utility function to confirm proper day value based on month and year.
	* Also handles leap years.
	*
	* @param testDay The day to be tested.
	*
	* @return true if testDay is correct, false otherwise.
	*/
	bool CheckDay(int testDay)const;

	/** Check for leap year
	*
	* @param testYear The year to be tested for leap years.
	*
	* @return true if testYear is a leap year, false otherwise.
	*/
	bool IsLeapYear(int testYear)const;

// DATA MEMBERS
	int mDay;
	int mMonth;
	int mYear;
	// class variable shared by all objects of date class
	static Date msDefaultDate;	
}; 
// end class Date
#endif  
// _DATE_H_