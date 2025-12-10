#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> vec = {'S', 'H'};
    cout << "Size = " << vec.size() << endl;

    vec.push_back('T');
    cout << "after push_back Size = " << vec.size() << endl;

    vec.pop_back();
    cout << "after pop_back Size = " << vec.size() << endl;

    cout << "Front Value : " << vec.front() << endl;
    cout << "Back Value : " << vec.back() << endl;

    cout << "Element at index 1 : " << vec.at(1) << endl;

    return 0;
}