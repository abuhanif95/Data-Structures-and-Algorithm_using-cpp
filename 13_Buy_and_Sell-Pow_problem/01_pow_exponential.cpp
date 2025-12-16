#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

double myPow(double x, int n){
    long long binForm = n;
    if(n<0){
        x = 1/x;
        binForm = -binForm;
    }

    double ans = 1;
    while(binForm>0){
        if(binForm%2==1){
            ans *= x;
        }
        x*=x;
        binForm/=2;
    }
    return ans;
}

int main(){
    cout << "Pow(2.0, -2) = " << myPow(2.0, -2) << endl;

    return 0;
}