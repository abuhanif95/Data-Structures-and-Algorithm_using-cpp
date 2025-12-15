/*
    Basic Data Types in C++:
    - int     (4 bytes) - stores whole numbers
    - float   (4 bytes) - stores fractional numbers (6-7 decimal digits)
    - double  (8 bytes) - stores fractional numbers (15 decimal digits)
    - char    (1 byte)  - stores single character
    - string  (variable) - stores text
    - bool    (1 byte)  - stores true/false values

    Derived Data Types:
    - array, pointer, function, etc.

    Note: Size may vary depending on compiler and system
*/

#include <iostream>
using namespace std;

int main()
{
    // Integer data type
    int age = 21;
    int temperature = -5;

    // Floating point data types
    float height = 5.11f;
    float weight = 85.6f;

    // Double data type (more precision)
    double salary = 50000.75;
    double pi = 3.1415926535;

    // Character data type
    char grade = 'A';
    char initial = 'T';

    // String data type
    string name = "Hanif";
    string country = "Bangladesh";

    // Boolean data type
    bool isStudent = true;
    bool isEmployed = false;

    // Displaying all data types
    cout << "=== Basic Data Types ===" << endl;
    cout << "Integer - Age: " << age << ", Temperature: " << temperature << endl;
    cout << "Float - Height: " << height << ", Weight: " << weight << endl;
    cout << "Double - Salary: $" << salary << ", Pi: " << pi << endl;
    cout << "Char - Grade: " << grade << ", Initial: " << initial << endl;
    cout << "String - Name: " << name << ", Country: " << country << endl;
    cout << "Boolean - Student: " << isStudent << ", Employed: " << isEmployed << endl;

    // Showing sizes of data types
    cout << "\n=== Sizes of Data Types ===" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;

    return 0;
}