#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> vec;
    vector<int> vec1 = {2, 3, 4, 5, 6};
    vector<int> vec2(3, 10);
    vector<int> vec3(vec1);
    vector<int> vec4 = {2,4,5,6,7,8};
    

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    vec.emplace_back(6);

    vec.pop_back();

    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;

    cout  << "value of vec: ";
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

    cout << "Value at index 2 " << vec[2] << " or " << vec.at(2) << endl; 
    cout << "Front " << vec.front() << endl;
    cout << "Back " << vec.back() << endl;
    cout << endl;
    
    vec1.erase(vec1.begin() + 1);

    cout << "value of vec1: ";
    for(int val : vec1){
        cout << val << " ";
    }
    cout << endl;
    cout << endl;

    vec2.erase(vec2.begin());
    vec2.clear();

    cout << "value of vec2: ";
    for(int val : vec2){
        cout << val << " ";
    }
    cout << endl;

    cout << "Size: " << vec2.size() << endl;
    cout << "Is empty : " << vec2.empty() << endl;
    cout << "Capacity: " << vec2.capacity() << endl;
    cout << endl;

    
    vec3.erase(vec3.begin() + 1, vec3.begin() + 3);
    vec3.insert(vec3.begin(), 100);

    cout << "value of vec3: ";
    for(int val : vec3){
        cout << val << " ";
    }
    cout << endl;

    cout << "Is empty : " << vec3.empty() << endl;
    cout << endl;

    vector<int>::iterator it;
    for(it = vec4.begin(); it != vec4.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    for(auto it = vec4.rbegin(); it != vec4.rend(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    return 0;
}