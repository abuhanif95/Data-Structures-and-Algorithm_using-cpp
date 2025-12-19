#include <iostream>
using namespace std;

int main(){

    int S = 10;
    int* ptr1 = &S;

    int** parPtr = &ptr1;

    cout << &S << endl;

    cout << &ptr1 << endl;
    cout << parPtr << endl;
    
    return 0;
}