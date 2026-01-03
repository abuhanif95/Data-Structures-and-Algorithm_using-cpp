#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main(){
   pair<string, int> p = {"Tonu", 4};
   pair<int, pair<char, int>> p1 = {1, {'T', 3}};

   cout << p.first << endl;
   cout << p.second << endl;
   cout << p1.second.first << endl;

   return 0;
}