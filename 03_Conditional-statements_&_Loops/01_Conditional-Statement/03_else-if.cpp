#include <iostream>
using namespace std;

int main(){
    int marks;

    cout << "Enter a number(01-100): ";
    cin >> marks;

    if(marks >= 80 && marks <= 100){
        cout << "You got A+" <<endl;
    }
    else if(marks >= 70 && marks <=79){
        cout << "You got A" <<endl;
    }
    else if(marks >= 60 && marks <=69){
        cout << "You got A-" <<endl;
    }
    else if(marks >= 50 && marks <=59){
        cout << "You got B" <<endl;
    }
    else if(marks >= 40 && marks <=49){
        cout << "You got C" <<endl;
    }
    else if(marks >= 33 && marks <=39){
        cout << "You got D" <<endl;
    }else if(marks >= 00 && marks <=32){
        cout << "Failed" <<endl;
    }else{
        cout << "Not a valid Marks" << endl;
    }

    return 0;
}