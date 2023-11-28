#include "C:\Projects\Current Projects\C++ Primer Exercises\Chapter 2\Excercise_2.42.h"
#include <iostream> 
#include <string>
using std::cout, std::cin, std::endl, std::string;

//Exercise 3.11: Is the following range for legal? If so, what is the type of c?

int main() 
{
    const string s = "Keep out!";
    for (auto &c : s) { 
        cout << c << endl;
    }

    //Legal code, added a cout to print values to ensure that was the case. Prints the string char by char vertically
    return 0;
}
