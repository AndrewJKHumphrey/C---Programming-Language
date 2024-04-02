/*
Exercise 7.31: Define a pair of classes X and Y, in which X has a pointer to Y, and Y has
an object of type X
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

class X
{
    Y *y;
};

class Y
{
    X *x;
};

int main()
{

    return 0;
}