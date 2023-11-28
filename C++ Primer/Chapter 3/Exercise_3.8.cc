#include "C:\Projects\Current Projects\C++ Primer Exercises\Chapter 2\Excercise_2.42.h"
#include <iostream> 
#include <string>
using std::cout, std::cin, std::endl, std::string;

int main() 
{
    string s = "TESTING THIS OUT";
    string:size_t index = 0;
    if(!s.empty()) {
        cout << "Before: " << s << endl;
        while(index < s.size()) {
            s[index] = 'X';
            index ++;
        }
        cout << "After : " << s << endl;
    }
    //While loops when used when we can determine the amount of iliterations doesn't sit well with me
    //for loops self terminate even if you happen to get something mixed up, a while loop by nature continues to run

    //------------------------------
    
    s = "TESTING THIS OUT AGAIN";

    if(!s.empty()){
        cout << "\nBefore: " << s << endl;
        for(decltype(s.size()) index = 0; index < s.size(); index++) {
            s[index] = 'X';
        }
        cout << "After : " << s << endl;
    }

    //The for loop feels more compact code wise, 5 function lines (6 due to the bracket)
    //It is also easier to see everything related to the loop right there

    //These factors make me more comfortable with for loops than while loops
    //I typically avoid using a while loop when a for loop can be used instead

    return 0;
}