#include "C:\Projects\Current Projects\C++ Primer Exercises\Chapter 2\Excercise_2.42.h"
#include <iostream> 
#include <string>
using std::cout, std::cin, std::endl, std::string;

int main() 
{
    string s = "TESTING THIS OUT";

    if(!s.empty()) {
        cout << "Before: " << s << endl;
        
        //auto &c should pick up on c being a reference, so char &.
        //Using char in place of auto should be fine since we are working with a char and specify the &

        for(char &c: s) {
            c = 'X';
        }
        cout << "After: " << s << endl;
    }
    return 0;
}