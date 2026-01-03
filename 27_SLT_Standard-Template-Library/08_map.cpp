#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<string, int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablet"] = 100;
    m["laptop"] = 100;
    m["watch"] = 50;

    m.emplace("camera", 25);
    m.erase("tv");

    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }
    cout << "Count = " << m.count("laptop") << endl;

    if(m.find("camera") != m.end()){
        cout << "found\n";
    }else{
        cout << "Not found\n";
    }

   return 0;
}