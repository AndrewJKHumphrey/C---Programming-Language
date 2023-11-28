/*
Exercise 3.41: Write a program to initialize a vector from an array of ints.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    int int_arr[] = {0, 1, 2, 4, 8, 16};
    vector<int> ivec(begin(int_arr), end(int_arr));

    for(auto i : ivec) {
        cout << i << endl;
    }
    
    return 0;
}