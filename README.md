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

## Task 3 - Polymorphism
Develop a simple payroll application in C++. There are three kinds of employees in the system: salaried employee, hourly employee, and commissioned employee. The system takes as input an array containing employee objects, calculates salary polymorphically, and generates report.

### Hint:
The salaried employee is paid monthly, hourly employee is paid hourly and commissioned employee is paid based on his/her sales. All the rates i.e. tax rate, hourly rate, commission rate is entered by the user. The final calculated salary should show net pay and not just the gross pay.

## Final UML Class Diagram of Employee case study
![classdiagram1](https://user-images.githubusercontent.com/41892175/47768612-c5f3b380-dd13-11e8-9f00-64404bc5ad73.png)
