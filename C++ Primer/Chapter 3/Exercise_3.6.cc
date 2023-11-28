#include "C:\Projects\Current Projects\C++ Primer Exercises\Chapter 2\Excercise_2.42.h"
#include <iostream> 
#include <string>
using std::cout, std::cin, std::endl, std::string;

int main() 
{
    string s = "TESTING THIS OUT";

    cout << "Before: " << s << endl;
    for(auto &c: s) {
        c = 'X';
    }
    cout << "After: " << s << endl;

    return 0;
}