#include <iostream>
using namespace std;

int main() {
    
    // 1. SIGNED vs UNSIGNED
    int normalInt = -10;           // Can be negative
    unsigned int positiveInt = 100; // Only positive
    
    cout << "Signed int: " << normalInt << endl;
    cout << "Unsigned int: " << positiveInt << endl << endl;
    
    // 2. SHORT (saves memory)
    short smallNumber = 32000;     // 2 bytes (smaller than int)
    int regularNumber = 32000;     // 4 bytes
    
    cout << "Short (2 bytes): " << smallNumber << endl;
    cout << "Int (4 bytes): " << regularNumber << endl << endl;
    
    // 3. LONG (for bigger numbers)
    long bigNumber = 2000000000;   // 4 or 8 bytes
    long long veryBigNumber = 9000000000000000000LL; // 8 bytes
    
    cout << "Long: " << bigNumber << endl;
    cout << "Long long: " << veryBigNumber << endl << endl;
    
    // 4. CHARACTER modifiers
    char letter = 'A';             // Can be -128 to 127
    unsigned char byte = 255;      // Only 0 to 255
    
    cout << "Char: " << letter << endl;
    cout << "Unsigned char: " << (int)byte << endl << endl;
    
    // 5. FLOAT vs DOUBLE
    float price = 99.99f;          // 4 bytes, less precise
    double pi = 3.1415926535;      // 8 bytes, more precise
    
    cout << "Float price: " << price << endl;
    cout << "Double pi: " << pi << endl << endl;
    
    // Check sizes
    cout << "Sizes in bytes:" << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "long long: " << sizeof(long long) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    
    return 0;
}