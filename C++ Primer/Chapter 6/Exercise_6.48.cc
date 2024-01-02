/*
Exercise 6.48: Explain what this loop does and whether it is a good use of assert:
string s;
while (cin >> s && s != sought) { } // empty body
assert(cin);
*/

#include <iostream>
#include <vector>
#include <string> 
#include <cassert>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;



int main()
{
    //This loop takes in input, populates the string s with it and compares it to sought
    //sought is technically undeclared, but ignoring that for the exercise's sake
    //While has an empty body, so nothing is being done, but that isn't a major issue on regards to assert's use
    //The issue with the use of assert is, asset is not being used to check for anything before something is being done, so not a good use of the assert macro
    //
    string s;
    while (cin >> s && s != sought) { } // empty body
    assert(cin);
    return 0;
}