/*
    #include <iostream>

    It is a header file that lets us work with input and output functions.
    Header files add functionality to C++ programs.

    Note: <iostream> == Input Output Stream
*/
#include <iostream>

/*
    using namespace std;

    This allows us to use names for objects and variables from the standard library.
*/
using namespace std;

/*
    main()

    This is called a function.
    Any code inside its curly brackets {} will be executed.
*/
int main()
{
    /*
        cout is used to output/print text to the screen.
        In our example, output will be:
        Hello, Hanif.
        Welcome to C++ World
    */
    cout << "Hello, Hanif" << endl;
    cout << "Welcome to C++ World" << endl;

    // return 0 ends the main() function.
    return 0;
}