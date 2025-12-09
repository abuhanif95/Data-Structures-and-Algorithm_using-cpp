#include <iostream>
#include <climits>
using namespace std;

void swapMinMax(int arr[], int size){
    if(size <= 1) return;

    int minIndex = 0, maxIndex = 0;
    int minValue = INT_MAX, maxValue = INT_MIN;
    
    for(int i = 0; i < size; i++){
        if(arr[i] < minValue){
            minValue = arr[i];
            minIndex = i;
        }

        if(arr[i] > maxValue){
            maxValue = arr[i];
            maxIndex = i;
        }
    }
    if(minIndex != maxIndex){
            swap(arr[minIndex], arr[maxIndex]);
    }
}

int main(){
    int arr[] = {5, 3, 8, 1, 4};
    int size = 5;

    cout << "Original Array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl; 

    swapMinMax(arr, size);

    cout << "Array after swapping min and max: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}