/*
Exercise 6.34: What would happen if the stopping condition in factorial were
    if (val != 0)
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

// calculate val!, which is 1 * 2 * 3 ... * val
int factorial(int val)
{
    if (val != 0)
        return factorial(val-1) * val; //Since this will multiply by 1 now, it doesn't change the result, adds extra steps though
    return 1;
}

int main()
{
    cout << factorial(-1) << endl; //However, you can past a negative number to the function, it will never stop
    return 0;
}