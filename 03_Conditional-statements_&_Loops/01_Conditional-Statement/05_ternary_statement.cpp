#include <iostream>
using namespace std;

int main(){
    int age;

    cout << "Enter a number: ";
    cin >> age;

    cout << (age >= 18 ? "You can vote" : "You can't vote") << endl;

    return 0;
}