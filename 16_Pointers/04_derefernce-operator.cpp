#include <iostream>
using namespace std;

int main(){

    int S = 10;
    int* ptr = &S;
    int** parPtr = &ptr;

    cout << *(&S) << endl;
    cout << *(ptr) << endl;

    cout << **(parPtr) << endl;
    
    return 0;
}