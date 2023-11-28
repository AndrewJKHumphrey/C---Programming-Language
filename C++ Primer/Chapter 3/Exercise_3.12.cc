/*
Exercise 3.12: Which, if any, of the following vector definitions are in error? For
those that are legal, explain what the definition does. For those that are not legal,
explain why they are illegal.
(a) vector<vector<int>> ivec;
(b) vector<string> svec = ivec;
(c) vector<string> svec(10, "null");
*/

#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector;

int main()
{   
    vector<vector<int>> ivec; //Legal initialization with no elements
    vector<string> svec = ivec; //Illegal since svec is a vector of strings, not ints
    vector<string> svec(10, "null"); //Legal, this makes a vector with ten elments that contain "null" 

    return 0;
}