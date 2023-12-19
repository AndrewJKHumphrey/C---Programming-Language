/*
Exercise 6.3: Write and test your own version of fact.
*/

#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;


int fact(int value)
{   
    for(int i = value - 1; i > 1; --i) {
        value *= i;
    }
    return value;
}

int main()
{
    cout << fact(10) << endl; //3628800
    return 0;
}