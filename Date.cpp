#include "Date.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Date Default + Overloaded Constructor
Date::Date(int d, int m, int y) : mDay(d), mMonth(m), mYear(y) {
	this->SetDate(d, m, y);
} 
// end Date constructor


//============================= OPERATORS ====================================

// Stream Insertion
ostream& operator<<(ostream& os, const Date& d) {
	os << d.GetDay() << "/" << d.GetMonth() << "/" << d.GetYear();
	return os;
} 
// end stream insertion

// Stream Extraction
istream& operator >>(istream& is, Date& d) {
	int dd, mm, yy;
	cout << "Enter Day: ";
	is >> dd;
	cout << "Enter Month: ";
	is >> mm;
	cout << "Enter Year: ";
	is >> yy;
	d.SetDate(dd, mm, yy);

	return is;
} 
// end stream extraction


//============================= OPERATIONS ===================================

// function that adds 'x' no. of days to the date
void Date::AddDay(int x) {
	for (int i = 0; i < x; i++) {
		this->mDay++;

		// determine whether testDay is valid for specified month
		if (!this->CheckDay(this->mDay)) {
			this->mDay = 1;
			this->AddMonth(1);
		}
	}
} 
// end function AddDay

// function that adds 'x' no. of months to the date
void Date::AddMonth(int x) {
	for (int i = 0; i < x; i++) {
		this->mMonth++;
		if (this->mMonth > 12) {
			this->mMonth = 1;
			this->AddYear(1);
		}
	}
} 
// end function AddMonth

// function that adds 'x' no. of years to the date
void Date::AddYear(int x) {
	this->mYear += x;
	// leap year case
	if (this->mDay == 29 && this->mMonth == 2 && !this->IsLeapYear(this->mYear)) {
		this->mDay = 1;
		this->mMonth = 3;
	}
} 
// end function AddYear

// function that calculate age in years till to date
double Date::CaclAge() {
	double y = 0.0, m = 0.0, d = 0.0;
	y = sGetTodaysDate().GetYear() - this->GetYear();
	m = sGetTodaysDate().GetMonth() - this->GetMonth();
	d = sGetTodaysDate().GetDay() - this->GetDay();

	m = m / 12.0;
	d = d / 365.25;
	y = y + m + d;

	return y;
} 
// end function CaclAge


//============================= ACESS      ===================================

// function that sets day
void Date::SetDay(int aDay) {
	if (this->CheckDay(aDay))
		this->mDay = aDay;      // validate the day
	else {
		this->mDay = msDefaultDate.GetDay();
		cout << aDay << " is invalid day of the month. Setting to default day i.e. " << msDefaultDate.GetDay() << endl;
	}

} 
// end function SetDay

// function that sets month
void Date::SetMonth(int aMonth) {
	if (aMonth > 0 && aMonth <= 12)
		this->mMonth = aMonth;
	else {
		this->mMonth = msDefaultDate.GetMonth();
		cout << aMonth << " is invalid month of a year. Setting to default month i.e. " << msDefaultDate.GetMonth() << endl;
	}
} 
// end function SetMonth

// function that sets year
void Date::SetYear(int aYear) {
	if (aYear > 0 && aYear <= 3000)
		this->mYear = aYear;
	else {
		this->mYear = msDefaultDate.GetYear();
		cout << aYear << " is invalid year of the calendar. Setting to default year i.e. " << msDefaultDate.GetYear() << endl;
	}
} 
// end function SetYear

// function that sets the Date
void Date::SetDate(int d, int m, int y) {
	this->SetDay(d);
	this->SetMonth(m);
	this->SetYear(y);
} 
// end function SetDate

// function that sets the Date
void Date::SetDate(const Date &obj) {
	this->SetDate(obj.GetDay(), obj.GetMonth(), obj.GetYear());
} 
// end function SetDate

// static function that sets default date
void Date::sSetDefaultDate(int aDay, int aMonth, int aYear) {
	if (aDay == 0)
		aDay = sGetTodaysDate().GetDay();
	if (aMonth == 0)
		aMonth = sGetTodaysDate().GetMonth();
	if (aYear == 0)
		aYear = sGetTodaysDate().GetYear();

	msDefaultDate.SetDate(aDay, aMonth, aYear);
} 
// end function sSetDefaultDate

// function that gets day
int Date::GetDay()const {
	return this->mDay;
} 
// end function GetDay

// function that gets month
int Date::GetMonth()const {
	return this->mMonth;
} 
// end function GetMonth

// function that gets year
int Date::GetYear()const {
	return this->mYear;
} 
// end function GetYear

// function that gets the Date
const Date& Date::GetDate()const {
	return *this;
}
// end function GetDate

// static function that gets default date
const Date& Date::sGetDefaultDate() {
	return msDefaultDate;
}
// end function sGetDefaultDate

// static function that gets today's date
Date  Date::sGetTodaysDate() {
	time_t currentTime = time(NULL);
	struct tm localTime;

	time(&currentTime);                   // Get the current time
	localtime_s(&localTime, &currentTime);  // Convert the current time to the local time

	int Day1 = localTime.tm_mday;
	int Month1 = localTime.tm_mon + 1;
	int Year1 = localTime.tm_year + 1900;

	Date t(Day1, Month1, Year1);

	return t;
} 
// end function sGetTodaysDate


/////////////////////////////// PRIVATE    ///////////////////////////////////

//============================= INQUIRY    ===================================

/** utility function to confirm proper day value based on month and year.
* Also handles leap years.
*
* @param testDay The day to be tested.
*
* @return true if testDay is correct, false otherwise.
*/
bool Date::CheckDay(int testDay) const {
	static const int daysPerMonth[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	// determine whether testDay is valid for specified month
	if (testDay > 0 && testDay <= daysPerMonth[this->mMonth])
		return true;

	// February 29 check for leap year 
	if (this->mMonth == 2 && testDay == 29 && IsLeapYear(this->mYear))
		return true;

	return false;  // leave object in consistent state if bad value
} 
// end function CheckDay

// utility function to check leap years
bool Date::IsLeapYear(int testYear)const {
	if ((testYear % 400 == 0) || (testYear % 4 == 0 && testYear % 100 != 0))
		return true;
	else
		return false;
} 
// end function CheckLeapYear


/*private static member cannot be accessed outside the class except for initialization*/
Date Date::msDefaultDate(7, 8, 1986);		// intitalize class variable