/*
Exercise 6.20: When should reference parameters be references to const? 
What happens if we make a parameter a plain reference when it could be a reference to const?
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;


int main()
{
    //When should reference parameters be references to const? 
    //Whenever possible to prevent confusion that the function can change something

    //What happens if we make a parameter a plain reference when it could be a reference to const?
    //It can limit the amount of values that we can pass to the function, which I displayed in Exercise_6.16
    //It may not impact what the function does, but if a function does not modify a parameter, then setting to const tells
    //a programmer that without needing to look at the contents of the function
    return 0;
}