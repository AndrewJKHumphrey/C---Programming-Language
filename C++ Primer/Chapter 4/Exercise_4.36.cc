/*
Exercise 4.36: Assuming i is an int and d is a double write the expression i *= d so
that it does integral, rather than floating-point, multiplication.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    int i; double d; 

    i *= static_cast<int>(d); //Convert d to an int for the product of i * d
    

    return 0;
}