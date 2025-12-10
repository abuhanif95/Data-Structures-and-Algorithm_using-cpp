#include <iostream>
#include <vector>
using namespace std;

int main() {
   
    vector<int> vec1; // Empty vector
    
    //Specific size with default value 0
    vector<int> vec2(5);  // Size 5, all values 0
    
    //Specific size with initial value
    vector<int> vec3(5, 10);  // Size 5, all values 10
    
    //Initializer list
    vector<int> vec4 = {1, 2, 3, 4, 5};
    
    vector<int> vec5(vec4); //Copy from another vector
    
    int arr[] = {10, 20, 30};
    vector<int> v6(arr, arr + 3);//Copy from array

    for(int val : vec4){
        cout << val << endl;
    }
    
    return 0;
}