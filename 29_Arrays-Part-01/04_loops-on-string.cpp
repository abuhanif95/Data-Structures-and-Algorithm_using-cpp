#include <iostream>
#include <string>
using namespace std;
int main(){
    string str = "sft hanif";
    string str2 = "hello world";

    for(int i=0; i<str.length(); i++){
        cout << str[i] << " ";
    }
    cout << endl;

    for(char ch : str2){
        cout << ch << " ";
    }
    return 0;
}