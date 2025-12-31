#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortColors(vector<int>& nums){
    int n = nums.size();
    int low = 0, mid = 0, high = n-1;

    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            mid++; low++;
        }else if(nums[mid] == 1){
            mid++;
        }else{
            swap(nums[high], nums[mid]);
            high--;
        }
    }
}

void printArray(const vector<int>& nums){
    cout << "[";
    for(int i=0; i<nums.size(); i++){
        cout << nums[i];
        if(i < nums.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    vector<int> nums1 = {2, 0, 2, 1, 1, 0};
    cout << "Input: ";
    printArray(nums1);
    
    sortColors(nums1);
    cout << "Output: ";
    printArray(nums1);
    cout << endl;
    
    vector<int> nums2 = {2, 0, 1};
    cout << "Input: ";
    printArray(nums2);
    
    sortColors(nums2);
    cout << "Output: ";
    printArray(nums2);
    cout << endl;

    return 0;
}