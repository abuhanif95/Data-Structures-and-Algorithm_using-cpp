#include <iostream>
using namespace std;

int main() {
    int a = 5;   // Binary: 0101
    int b = 3;   // Binary: 0011
    
    cout << "1. Bitwise AND (a & b): " << (a & b) << endl;
    cout << "2. Bitwise OR (a | b): " << (a | b) << endl;
    cout << "3. Bitwise XOR (a ^ b): " << (a ^ b) << endl;
    cout << "4. Bitwise NOT (~a): " << (~a) << endl;
    cout << "5. Left Shift (a << 1): " << (a << 1) << endl;
    cout << "6. Right Shift (a >> 1): " << (a >> 1) << endl;
    
    return 0;
}