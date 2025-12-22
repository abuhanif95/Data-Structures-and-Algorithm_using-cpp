#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int peakIndex = 0;

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] > arr[peakIndex]){
            peakIndex = i;
        }
    }
    return peakIndex;    
}

int main() {
    vector<int> arr1 = {0, 1, 0};
    cout << "Peak index in [0,1,0]: " << peakIndexInMountainArray(arr1) << endl; 
    
    vector<int> arr2 = {0, 2, 1, 0};
    cout << "Peak index in [0,2,1,0]: " << peakIndexInMountainArray(arr2) << endl; 
    
    vector<int> arr3 = {0, 10, 5, 2};
    cout << "Peak index in [0,10,5,2]: " << peakIndexInMountainArray(arr3) << endl; 
    
    vector<int> arr4 = {1, 3, 5, 4, 2, 0};
    cout << "Peak index in [1,3,5,4,2,0]: " << peakIndexInMountainArray(arr4) << endl; 
    
    return 0;
}