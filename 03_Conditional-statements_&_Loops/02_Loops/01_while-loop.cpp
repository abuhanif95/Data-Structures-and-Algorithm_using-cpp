#include <iostream>
using namespace std;

int main(){
    int n, i = 1;

    cout << "Enter a number: ";
    cin >> n;
    
    while(i <= n){
        cout << i <<" while loop" << endl;
        i++;
    }
    cout << endl;

    return 0;
}