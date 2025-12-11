#include <iostream>
using namespace std;

//function defination
int sum(int a, int b){
    int sum = a + b;
    return sum;
}

//min of 2 nums
int minOfTwo(int a, int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}

int main() {
    
    //function call
    int result = sum(3,4);
    cout << "The sum is: " << result << endl;
    cout << "The minimum is: " << minOfTwo(3,7) << endl;

    return 0;
}