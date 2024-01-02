/*
Exercise 6.45: Review the programs you’ve written for the earlier exercises and decide
whether they should be defined as inline. 
If so, do so. If not, explain why they
should not be inline
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

//Anything that is simple, for example the previous exercise, is a good fit for inline
//Anything that is more involved (or recursive) can be requested as inline, but it is likely to not happen (or won't happen)
//Also, I am not going to review six chapters of code and paste it all within this file to show which functions I would make inline or not
//That would be a messy file and not super useful to explain the point of inline


int main()
{

    return 0;
}