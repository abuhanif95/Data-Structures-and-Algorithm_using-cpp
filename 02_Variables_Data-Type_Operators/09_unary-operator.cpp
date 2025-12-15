#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    
    // Increment operators
    cout << "x = " << x << endl;
    cout << "x++ = " << x++ << endl;  // use then increment
    cout << "Now x = " << x << endl;
    
    cout << "++x = " << ++x << endl;  // increment then use
    cout << "Now x = " << x << endl;
    
    // Decrement operators
    cout << "x-- = " << x-- << endl;
    cout << "Now x = " << x << endl;
    
    cout << "--x = " << --x << endl;
    cout << "Now x = " << x << endl;
    
    // Plus and minus
    cout << "+x = " << +x << endl;
    cout << "-x = " << -x << endl;
    
    return 0;
}