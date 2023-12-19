/*
Exercise 6.1: What is the difference between a parameter and an argument?
*/

#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

int function(int parameter) {
    cout << "We passed an argument to this function, to be used as a parameter within the function: " << parameter << endl;
    return parameter * 2;
}

int main()
{
    int argument = 10;
    int result = function(argument);
    cout << "Then we were given a result based on what the function does with the parameter: " << result << endl;
    return 0;
}