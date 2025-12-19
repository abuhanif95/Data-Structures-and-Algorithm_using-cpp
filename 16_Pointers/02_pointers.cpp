#include <iostream>
using namespace std;

int main(){

    int S = 10;
    int* ptr1 = &S;

    int H = 12;
    int* ptr2 = &H;

    float price = 123.45;
    float* ptr3 = &price;

    cout << ptr1 << endl;
    cout << &S << endl;

    cout << ptr2 << endl;
    cout << &H << endl;

    cout << &ptr1 << endl;
    
    cout << ptr3 << endl;
    cout << &price << endl;
    return 0;
}