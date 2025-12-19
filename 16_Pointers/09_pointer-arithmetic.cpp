#include <iostream>
using namespace std;

int main(){
    int a=10;
    int* ptr = &a;

    cout << ptr << endl;
    ptr++;
    cout << ptr << endl;    
    ptr--;
    cout << ptr << endl;
    ptr = ptr + 2;
    cout << ptr << endl;
   
    int arr[] = {1, 2, 3, 4, 5};

    cout << *arr << endl; 
    cout << *(arr+2) << endl;

    int* ptr2;
    int* ptr1 = ptr2 + 2;
    
    cout << ptr1 - ptr2 << endl;

    int* ptr3;
    int* ptr4;

    cout << (ptr3 < ptr4) << endl;
    cout << (ptr3 <= ptr4) << endl;
    cout << (ptr3 > ptr4) << endl;
    cout << (ptr3 >= ptr4) << endl;
    cout << (ptr3 == ptr4) << endl;
    cout << (ptr3 != ptr4) << endl;
    return 0;
}