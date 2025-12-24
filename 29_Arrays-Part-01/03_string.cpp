#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1;
    string str2 = " hanif";

    cout << "Enter str1: ";
    getline(cin, str1);

    //concatination
    string str3 = str1 + str2;
    cout << "str3 = " << str3 << endl;
    
    str2 = "sft";
    cout << (str1 == str2) << endl;//comparision

    cout << str1.length() << endl;
    return 0;
}