#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void uniqueValues(int arr[], int size){
    if(size == 0){
        cout << "Array is empty." << endl;
        return;
    }

    vector<int> sortedArr(arr, arr + size);
    sort(sortedArr.begin(), sortedArr.end());

    cout << "Unique values: ";
    cout << sortedArr[0] << " ";

    for(int i = 1; i < size; i++){
        if(sortedArr[i] != sortedArr[i - 1]){
            cout << sortedArr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 5, 1, 3, 2, 5, 4, 1};
    int size = 9;
    
    cout << "Original array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    uniqueValues(arr, size);
    
    return 0;
}