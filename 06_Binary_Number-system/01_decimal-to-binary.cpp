#include <iostream>
using namespace std;

int decimalToBinary(int decimalNum){
    int answer=0, power=1;

    while(decimalNum > 0){
        int reminder = decimalNum%2;
        decimalNum/=2;

        answer += (reminder * power);
        power *= 10;
    }
    return answer;
}

int main(){
    int decimalNum;

    cout << "Enter a Decimal Number: ";
    cin >> decimalNum;

    cout << decimalToBinary(decimalNum) << endl;

    return 0;
}