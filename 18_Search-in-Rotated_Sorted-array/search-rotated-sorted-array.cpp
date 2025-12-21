#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> arr, int tar){
    int start = 0, end = arr.size() - 1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if (arr[mid] == tar) {
            return mid;
        }

        if(arr[start] <= arr[mid]){
            if(arr[start] <= tar && tar <= arr[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        } else{
            if(arr[mid] <= tar && tar <= arr[end]){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> arr1 = {4, 5, 6, 7, 0, 1, 2};
    int tar1 = 0;

    vector<int> arr2 = {4, 5, 6, 7, 0, 1, 2};
    int tar2 = 3;
    
    cout << search(arr1, tar1) << endl;
    cout << search(arr2, tar2) << endl;

    return 0;
}