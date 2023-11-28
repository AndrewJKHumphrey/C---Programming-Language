#include "C:\Projects\Current Projects\C++ Primer Exercises\Chapter 2\Excercise_2.42.h"
#include <iostream> 
#include <string>
using std::cout, std::cin, std::endl, std::string;

int main() 
{
    //Exercise 3.9: What does the following program do? Is it valid? If not, why not?
    string s; //This is legal code, but should encounter a runtime issue due to an undefined string and no check
    if(!s.empty()) {
        cout << s[0] << endl; //For some reason this is not causing the program to error in VS Code
    } else {
        cout << "EMPTY STRING" << endl;
        return -1;
    }
    return 0;
}