/*
Exercise 3.18: Is the following program legal? If not, how might you fix it?
vector<int> ivec;
ivec[0] = 42;
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector;

int main()
{
    //This code will compile, but it subscripts into an empty vector with no contents
    vector<int> ivec;
    //This results in a runtime error
    ivec[0] = 42;
    
    return 0;
}