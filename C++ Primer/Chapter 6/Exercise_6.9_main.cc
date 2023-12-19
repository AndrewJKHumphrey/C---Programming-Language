/*
Exercise 6.9: Write your own versions of the fact.cc and factMain.cc files. These
files should include your Chapter6.h from the exercises in the previous section. Use
these files to understand how your compiler supports separate compilation.
*/

#include <iostream>
#include <vector>
#include <string>
#include "C:\Projects\Current Projects\C++ Programming Language\C++ Primer\Chapter 6\Exercise_6.9.cc"
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

int main()
{
    string test = "mistake, though it works nonetheless";
    int error = TestFunction(test);
    return error;
}