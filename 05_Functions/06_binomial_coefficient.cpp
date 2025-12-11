#include <iostream>
using namespace std;

int factorial(int n){
    if(n < 0){
        return -1;
    }

    int fact = 1; 

    for(int i = 1; i <=n; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    if(n < r || n < 0 || r < 0 ){
        return -1;
    }

    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n - r);

    if(fact_r == 0 || fact_n_r == 0){
        return -1;
    }

    return fact_n / (fact_r * fact_n_r);
}

int main(){
    int n, r;

    cout << "Enter n and r: ";
    cin >> n >> r;

    cout << "nCr is: " << nCr(n, r) << endl;

    return 0;
}