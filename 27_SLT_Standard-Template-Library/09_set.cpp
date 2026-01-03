#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    
    cout << "lower bound: " << *(s.lower_bound(4)) << endl;
    cout << "upper bound: " << *(s.upper_bound(4)) << endl;
    cout << s.size() << endl;
    for(auto val : s){
        cout << val << " ";
    }
    cout << endl;

   return 0;
}