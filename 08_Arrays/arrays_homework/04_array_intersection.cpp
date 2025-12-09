#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void intersection(int arr1[], int size1, int arr2[], int size2){
    cout << "Intersection elements: ";
    bool foundCommon = false;

    for(int i = 0; i < size1; i++){
        bool alreadyPrinted = false;
        for(int j = 0; j < i; j++){
            if(arr1[i] == arr1[j]){
                alreadyPrinted = true;
                break;
            }
        }

        if(!alreadyPrinted){
            for(int k =0; k < size2; k++){
                if(arr1[i] == arr2[k]){
                    cout << arr1[i] << " ";
                    foundCommon = true;
                    break;
                }
            }
        }
    }
    if(!foundCommon){
        cout << "No common elements found.";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 2, 3};
    int arr2[] = {3, 4, 5, 6, 7, 3};
    
    int size1 = 7;
    int size2 = 6;

    cout << "Array 1: ";
    for(int i = 0; i < size1; i++){
        cout << arr1[i] << " ";
    } 
    cout << endl;
    
    cout << "Array 2: ";
    for(int i = 0; i < size2; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;

    intersection(arr1, size1, arr2, size2);

    return 0;
}