#include <iostream>
using namespace std;

void changeValue(int x){
    x = 2 * x;
    cout << "Inside changeValue function, x = " << x << endl;
}

int main(){
    int x = 5; 
    changeValue(x);

    cout << "Inside main function, x = " << x << endl;
    return 0;
}