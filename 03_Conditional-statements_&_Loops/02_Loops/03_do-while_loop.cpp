#include <iostream>
using namespace std;

int main(){
    int n;
    int i = 1;

    cout << "Enter a number: ";
    cin >> n;

    do{
        cout << i << " Do-while Loop" << endl;
        i++;
    } while(i <= n);

    cout << endl;

    return 0;
}