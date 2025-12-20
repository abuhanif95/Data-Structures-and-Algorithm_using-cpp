#include <iostream>
#include <climits>  // For INT_MAX and INT_MIN
using namespace std;

int reverseInteger(int n) {
    int reversed = 0;
    
    while (n != 0) {
        int digit = n % 10;  // Get last digit
        n /= 10;             // Remove last digit
        
        // Check for overflow before adding new digit
        if (reversed > INT_MAX/10 || (reversed == INT_MAX/10 && digit > 7))
            return 0;  // Would overflow positive
        if (reversed < INT_MIN/10 || (reversed == INT_MIN/10 && digit < -8))
            return 0;  // Would overflow negative
            
        reversed = reversed * 10 + digit;
    }
    
    return reversed;
}

int main() {
    int num;
    cout << "Enter an integer to reverse: ";
    cin >> num;
    
    int reversed = reverseInteger(num);
    cout << "Original: " << num << endl;
    cout << "Reversed: " << reversed << endl;
    
    // Test cases
    cout << "\nTest cases:" << endl;
    int testCases[] = {123, -456, 120, 0, 1534236469, -2147483648, 2147483647};
    
    for (int n : testCases) {
        cout << n << " -> " << reverseInteger(n) << endl;
    }
    
    return 0;
}