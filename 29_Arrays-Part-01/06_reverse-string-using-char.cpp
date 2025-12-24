#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    char original[100];
    strcpy(original, str);

    int start = 0, end = strlen(str)-1;
    while (start < end)
    {
        swap(str[start++], str[end--]);
    }
    
    cout << "Original: " << original << endl;
    cout << "Reversed: " << str << endl;
    return 0;
}