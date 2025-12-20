#include <iostream>
using namespace std;

int main(){
    int n;
    
    cout << "Enter n: ";
    cin >> n;
    
    // Upper half
    for(int i=1; i<=n; i++){
        // Left stars
        cout << "*";
        for(int j=2; j<=i; j++){
            if(j == i) cout << "*";
            else cout << " ";
        }
        
        // Spaces
        int spaces = 2*(n-i);
        for(int j=1; j<=spaces; j++){
            cout << " ";
        }
        
        // Right stars
        if(i == 1){
            cout << "*";
        } else {
            cout << "*";
            for(int j=2; j<=i; j++){
                if(j == i) cout << "*";
                else cout << " ";
            }
        }
        cout << endl;
    }
    
    // Lower half
    for(int i=n; i>=1; i--){
        // Left stars
        cout << "*";
        for(int j=2; j<=i; j++){
            if(j == i) cout << "*";
            else cout << " ";
        }
        
        // Spaces
        int spaces = 2*(n-i);
        for(int j=1; j<=spaces; j++){
            cout << " ";
        }
        
        // Right stars
        if(i == 1){
            cout << "*";
        } else {
            cout << "*";
            for(int j=2; j<=i; j++){
                if(j == i) cout << "*";
                else cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}