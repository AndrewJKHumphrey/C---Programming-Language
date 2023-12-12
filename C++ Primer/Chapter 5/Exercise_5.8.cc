/*
Exercise 5.8: What is a “dangling else”? How are else clauses resolved in C++?
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    if(false)
        if(true)
            cout << "This won't print" << endl;
    else
        cout << "Nor will this" << endl; // This else is actually linked to the first if statement, left dangling

    if(false) {
        if(true)
            cout << "This also won't be printed" << endl;
    } else
        cout << "But this will be printed now" << endl; // Blocked to ensure the else is linked to the first if since everything within in the block is under the first if now

    return 0;
}