#include <iostream>
using namespace std;

int main(){
    int n, oddSum=0;

    cout << "Enter a number: ";
    cin >> n;
    
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            oddSum += i;
        }
    }
    cout << "Sum of Odd = " << oddSum << endl;

    return 0;
}