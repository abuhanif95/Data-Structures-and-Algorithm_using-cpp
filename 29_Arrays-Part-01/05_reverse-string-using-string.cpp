#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Original: " << str << endl;
    reverse(str.begin(), str.end());

    cout << "Reversed: " << str << endl;
    return 0;
}