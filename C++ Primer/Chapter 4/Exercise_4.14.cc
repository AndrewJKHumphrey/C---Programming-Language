/*
Exercise 4.14: Explain what happens in each of the if tests:
if (42 = i) // ...
if (i = 42) // ...
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{   
    int i;

    //This attempts to assign i to 42, which will result in an error as 42 is a rvalue, not an lvalue  
    if(42 = i) {

    } 

    //This will assign 42 to i, then check if i is non-zero
    if(i = 42) {

    }
    return 0;
}