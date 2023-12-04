/*
Exercise 4.15: The following assignment is illegal. Why? How would you correct it?
double dval; int ival; int *pi;
dval = ival = pi = 0;
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    double dval; int ival; int *pi;
    //dval = ival = pi = 0;

    dval = ival = *pi = 0; //dereference the pointer so it becomes int *p instead of int* p
    return 0;
}