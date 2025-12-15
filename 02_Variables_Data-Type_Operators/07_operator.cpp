#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 3;
    float x = 5.5, y = 2.0;
    
    // Arithmetic operators
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    cout << "x / y = " << x / y << endl;
    
    // Relational operators
    cout << "\na > b : " << (a > b);
    cout << "\na == b : " << (a == b);
    cout << "\na != b : " << (a != b);
    
    // Logical operators
    cout << "\n\na>5 && b<5 : " << (a>5 && b<5);
    cout << "\na>5 || b>5 : " << (a>5 || b>5);
    
    return 0;
}