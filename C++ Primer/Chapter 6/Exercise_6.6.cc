/*
Exercise 6.6: Explain the differences between a parameter, a local variable, and a local
static variable. Give an example of a function in which each might be useful
*/

#include <iostream>
#include <vector>
#include <string>
#include "C:\Projects\Current Projects\C++ Programming Language\C++ Primer\Chapter 6\Exercise_6.8.h"
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

int main()
{
    int iLocal = 3;
    string sLocal = LocalVsStatic(iLocal);
    cout << sLocal << endl;
    sLocal = LocalVsStatic(iLocal);
    cout << sLocal << endl;
    sLocal = LocalVsStatic(iLocal);
    cout << sLocal << endl;
    return 0;
}