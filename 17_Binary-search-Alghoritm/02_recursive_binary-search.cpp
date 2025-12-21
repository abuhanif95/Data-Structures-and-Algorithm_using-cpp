#include <iostream>
#include <vector>
using namespace std;

int recursiveBinarySearch(vector<int> arr, int tar, int start, int end){
    if(start <= end){
        int mid = start + (end - start)/2;

        if(tar > arr[mid]){
            return recursiveBinarySearch(arr, tar, mid + 1, end);
        }else if(tar < arr[mid]){
            return recursiveBinarySearch(arr, tar, start, mid-1);
        }else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 12;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    int tar2 = 0;
    
     cout << recursiveBinarySearch(arr2, tar2, 0, arr2.size() - 1) << endl;

    return 0;
}