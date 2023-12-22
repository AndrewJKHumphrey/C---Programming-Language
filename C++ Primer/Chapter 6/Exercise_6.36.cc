/*
Exercise 6.36: Write the declaration for a function that returns a reference to an array
of ten strings, without using either a trailing return, decltype, or a type alias.
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

//Type (function(parameter_list))[dimension]
string (&hardWay(string s)) [10] {

}


string cold[] = {"snow", "ice", "sleet"};
string hot[] = {"sand", "desert", "sandstorm"};
decltype(cold) *arrPtr(string s)
{
    return  s == *(&cold[1]) ? &cold : &hot; 
}

int main()
{
    return 0;
}