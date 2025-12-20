#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isPowerOfTwo(num)) {
        cout << num << " is a power of 2" << endl;
    } else {
        cout << num << " is NOT a power of 2" << endl;
    }
    
    cout << "\nTest cases:" << endl;
    int testCases[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 3, 5, 6, 7, 9, 10, 0, -8};
    
    for (int n : testCases) {
        cout << n << ": " << (isPowerOfTwo(n) ? "Yes" : "No") << endl;
    }
    
    return 0;
}