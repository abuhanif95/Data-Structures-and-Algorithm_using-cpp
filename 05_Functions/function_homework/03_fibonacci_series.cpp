#include <iostream>
using namespace std;

void fibonacciSeries(int n){
    if(n <= 0){
        cout << "No terms to display." << endl;
        return;
    }

    cout << "Fibonnaci series : " << endl;
    if(n >= 1) cout << "0";
    if(n >= 2) cout << " 1";
   

    int previousValue = 0, currentValue = 1, next;
    for(int i = 3; i<= n; i++){
        next = previousValue + currentValue;
        cout << " " << next; 
        previousValue = currentValue;
        currentValue = next;
    }
    cout << endl;
}

int main(){
    int n;

    cout << "Enter n: ";
    cin >> n;

    if(n <= 0){
        cout << "Enter positive number\n";
        return 0;
    }
    fibonacciSeries(n);
    
    return 0;
}