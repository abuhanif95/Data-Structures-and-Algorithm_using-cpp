#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;

    cout << "Enter a string: ";
    cin >> str;

    string original = str;
    reverse(str.begin(), str.end());

    if(original == str){
        cout << original << " is a palindrome" << endl;
    }else{
        cout << original << " is not a palindrome" << endl;
    }

    return 0;
}