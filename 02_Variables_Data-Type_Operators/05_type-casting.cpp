/*
    Types of Type Casting in C++:
    1. Implicit Type Casting (Automatic)
       - Done automatically by compiler
       - When mixing data types in expressions

    2. Explicit Type Casting (Manual)
       - Done manually by programmer
       - Types:
         a. C-style cast: (type)value
         b. Function-style cast: type(value)
         c. C++ cast operators: static_cast, dynamic_cast, etc.

    Note: Be careful with data loss during type conversion
*/

#include <iostream>
using namespace std;

int main()
{
    // Implicit Type Casting Examples
    cout << "=== Implicit Type Casting ===" << endl;

    int numInt = 10;
    float numFloat = 5.5;

    // int to float (automatic)
    float result1 = numInt + numFloat;
    cout << "int + float = float: " << numInt << " + " << numFloat << " = " << result1 << endl;

    // char to int (automatic)
    char ch = 'A';
    int asciiValue = ch;
    cout << "char 'A' to int: " << ch << " = " << asciiValue << endl;

    // bool to int (automatic)
    bool flag = true;
    int boolToInt = flag;
    cout << "bool true to int: " << flag << " = " << boolToInt << endl;

    // Explicit Type Casting Examples
    cout << "\n=== Explicit Type  Casting ===" << endl;

    double salary = 50000.75;

    // C-style cast: double to int
    int intSalary = (int)salary;
    cout << "C-style - double to int: " << salary << " -> " << intSalary << " (data lost!)" << endl;

    // Function-style cast: float to int
    float height = 5.11f;
    int intHeight = int(height);
    cout << "Function-style - float to int: " << height << " -> " << intHeight << endl;

    // static_cast (C++ recommended way)
    double pi = 3.14159;
    int intPi = static_cast<int>(pi);
    cout << "static_cast - double to int: " << pi << " -> " << intPi << endl;

    return 0;
}