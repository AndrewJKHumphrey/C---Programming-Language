/*
Exercise 6.5: Write a function to return the absolute value of its argument
*/

#include <iostream>
#include <vector>
#include <string>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

int AbsoluteValue(int value) {
    if(value < 0) {
        value = (value - value) - value; //-A - -A becomes -A + A = 0, 0 - -A becomes 0 + A, resulting in A 
    } //No need for an else since anything 0+ is already absolute
    return value;
}

int main()
{
    int value = -5555;
    value = AbsoluteValue(value);
    cout << value << endl;
    return 0;
}