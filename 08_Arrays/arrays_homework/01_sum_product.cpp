#include <iostream>
#include <climits>
using namespace std;

void sumProduct(int arr[], int size, int &sum, long long &product){
    sum = 0;
    product = 1; 
    for(int i = 0; i < size; i++){
        sum += arr[i];
        product *= arr[i];
    }
}

int main() {
    int arr[] = {2,4, 6, 3, 5};
    int size = 5;
    int sum =0;
    long long product;

    sumProduct(arr, size, sum, product);

    cout << "Array elements: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;

    return 0;
}