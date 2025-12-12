#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool isPrime(int n){
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;

    for(int i = 3; i <= sqrt(n); i+=2){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void allPrimeUpToN(int n){
    cout << "\nPrime number from 1 to " << n << ":\n";

    int count = 0;
    for(int i = 2; i <= n; i++){
        if(isPrime(i)){
            cout << i << " ";
            count++;

            if(count % 10 == 0){
                cout << endl;
            }
        }
    }
    cout << "\n\nTotal Prime number is " << count << endl;
}

int main(){
    int n;

    cout << "Enter n : ";
    cin >> n;

    if(n < 2){
        cout << "There is no Prime number.\n";
        return 0;
    }

    allPrimeUpToN(n);

    return 0;
}