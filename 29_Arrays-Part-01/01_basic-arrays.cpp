#include <iostream>
#include <cstring>   // For strlen() function
using namespace std;

int main() {
    
    // Method 1: Character array with explicit null terminator
    char str1[] = {'S', 'H', 'T', '\0'};
    
    // Method 2: String literal (automatically adds '\0')
    char str2[] = "sfthanif";
    
    // Method 3: Uninitialized character array
    char str3[10];
    
    cout << "Enter text (max 9 chars, ends with '$'): ";
    cin.getline(str3, 10, '$'); //'$' is encountered (custom delimiter)
    
    cout << "Content: " << str1 << endl;
    cout << "Length: " << strlen(str1) << endl;
    
    cout << "Content: " << str2 << endl;
    cout << "Length: " << strlen(str2) << endl;
    
    cout << "Third character of str1: " << str1[2] << endl;
    cout << "str3 characters: ";

    for(char ch : str3) {
        cout << ch << " ";
    }
    cout << endl;
    
    return 0;
}