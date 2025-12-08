#include <iostream>
#include <climits>
using namespace std;
int main() {
    int nums[]={5, 15, 22, 1, -13, 24};
    int size = 6;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i = 0; i < size; i++){
         if(nums[i] < smallest){
            smallest = nums[i];
        }
        // Using the min function from <algorithm> header
        //smallest = min(nums[i], smallest);

        
        if(nums[i] > largest){
            largest = nums[i];
        }
        //using the max function from <algorithm> header
        //largest = max(nums[i], largest);
    }

    cout << "smallest: " << smallest << endl;
    cout << "largest: " << largest << endl;

    return 0;
}