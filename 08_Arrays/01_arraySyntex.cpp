#include <iostream>
using namespace std;
int main() {
    int marks[5] = {23, 45, 56, 89, 90};

    marks[0] = 95; // updating the value at index 0

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    return 0;
}