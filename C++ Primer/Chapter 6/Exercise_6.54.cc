/*
Exercise 6.54: Write a declaration for a function that takes two int parameters and
returns an int, and declare a vector whose elements have this function pointer type.
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

int example(int i, int j) {
    return i * j;
} 

int main()
{
    typedef int (*example)(int, int);
    vector<example> v(4);

    return 0;
}