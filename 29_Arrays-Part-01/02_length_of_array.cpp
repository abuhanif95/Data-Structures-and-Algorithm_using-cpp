#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str[] = "sft hanif";
    int len = 0;

    for(int i = 0; i<str[i] != '\0'; i++){
        len++;
    }
    cout << "length of str: " << len << endl;

    return 0;
}