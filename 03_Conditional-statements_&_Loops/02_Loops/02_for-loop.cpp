#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter a number: ";
    cin >> n;
    
    for(int i = 1; i<=n; i++){
        cout << i << " For Loop" << endl;
    }
    cout << endl;
    
    return 0;
}