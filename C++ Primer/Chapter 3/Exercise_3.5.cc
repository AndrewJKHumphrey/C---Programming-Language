#include "C:\Projects\Current Projects\C++ Primer Exercises\Chapter 2\Excercise_2.42.h"
#include <iostream> 
#include <string>
using std::cout, std::cin, std::endl, std::string;

int main() 
{
    cout << "Word: " << endl;
    string word;
    string concat;
    while(cin >> word) {
        concat += word += " ";
    }
    cout << concat;
    return 0;
}