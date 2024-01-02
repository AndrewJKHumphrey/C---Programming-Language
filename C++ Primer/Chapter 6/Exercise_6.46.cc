/*
Exercise 6.46: Would it be possible to define isShorter as a constexpr? If so, do
so. If not, explain why not
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

constexpr bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size(); //This is not a constant expression, even if the string values are const, size() is not 
}

int main()
{
    string s1 = "123";
    string s2 = "4567";
    const bool test = isShorter(s1, s2);
    return 0;
}