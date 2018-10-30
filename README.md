# Employee---CPP-Class
Employee case study to implement OOP concepts in C++

## Task 1 - Class definition
Define a C++ class to describe an **Employee**. Each employee has a name, age, NIC#, Address and salary. Furthermore:
  * The Address itself should be described using a C++ class with fields for street, house#, city, province, and postal code.
  * Employee class should record the number of employees(objects) created in the system
  * Your Employee class should have a constructor that initializes all its fields including Address (Use member initializer list where necessary).
  * Declare function prototypes to set and get the value of the zip code of an employee.
  * Also declare a print() function that prints all the details of an employee object. (Use constant functions where necessary)
### Hint
The address class should also have a constructor.

## Task 2 - Function Overriding in multi-level Inheritance
Make a class **Manager** inherit from **Employee**. Add a unique member, department of type string. Override the Print() function so that it adds name of department to the former Print( ). Make another class **Executive** inherit from **Manager** which overrides Print( ) by adding a simple string “Executive” in the start. Rest of the Print( ) function is similar to former.

### Note:
You are not allowed to rewrite the same code once written in base class. Use code reuse techniques instead. Also write default+overloaded constructors for the above three classes.
