#include <iostream>
using namespace std;

int binaryToDecimal(int binaryNum){
    int answer = 0, power = 1;

    while(binaryNum > 0){
        int reminder = binaryNum % 10;
        answer += reminder * power;

        binaryNum /= 10;
        power *= 2;
    }
    return answer;
}

int main(){
    int binaryNum;

    cout << "Enter a Decimal Number: ";
    cin >> binaryNum;

    cout << binaryToDecimal(binaryNum) << endl;

    return 0;
}