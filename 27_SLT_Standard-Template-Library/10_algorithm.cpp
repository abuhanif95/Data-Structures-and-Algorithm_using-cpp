#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2. first) return true;
    else return false;
}

int main(){
    int arr[5] = {3, 5, 1, 8, 2};
    vector<pair<int, int>> vec = {{2, 3}, {4, 3}, {5, 4}, {2, 1}};

    sort(arr, arr+5);
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;

    sort(vec.begin(), vec.end(), comparator);
    for(auto p : vec){
        cout << p.first << " " << p.second << endl;;
    }
    cout << endl;

    return 0;
}