#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 4, 3, 5};
    string s = "sft";

    reverse(vec.begin()+1, vec.begin()+3);
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

    //prev_permutation(s.begin(), s.end());
    next_permutation(s.begin(), s.end());
    cout << s << endl;

    cout << max(4, 5) << " " << min(6, 10) << endl;
    int a = 5;
    int b = 10;

    swap(a, b);
    cout << "a = " << a << endl;

    return 0;
}