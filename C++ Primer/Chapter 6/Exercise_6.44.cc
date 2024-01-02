/*
Exercise 6.44: Rewrite the isShorter function from § 6.2.2 (p. 211) to be inline

bool isShorter(const string &s1, const string &s2)
{
return s1.size() < s2.size();
}
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

inline bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{

    return 0;
}