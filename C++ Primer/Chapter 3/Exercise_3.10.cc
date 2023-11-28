#include "C:\Projects\Current Projects\C++ Primer Exercises\Chapter 2\Excercise_2.42.h"
#include <iostream> 
#include <string>
using std::cout, std::cin, std::endl, std::string;

// Write a program that reads a string of characters including punctuation
// and writes what was read but with the punctuation removed.

int main() 
{
    string s = "TESTING!!! 123!!!";
    string result;

    if(!s.empty()) {
        cout << "Before: " << s << endl;
        for(auto &c : s) {
            if(!ispunct(c)){
                result += c;
            }
        }
        cout << "After : " << result << endl;
    }

    return 0;
}