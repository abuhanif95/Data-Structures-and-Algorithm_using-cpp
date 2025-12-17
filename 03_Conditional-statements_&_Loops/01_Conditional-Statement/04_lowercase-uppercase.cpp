#include <iostream>
using namespace std;

int main(){

    char ch;

    cout << "Enter any character: ";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z'){
        cout << "Lowercase" << endl;
    }
    else if(ch >= 'A' && ch <= 'Z'){
        cout << "Uppercase" << endl;
    }else{
        cout << "Not a valid character"<<endl;
    }
    return 0;
}