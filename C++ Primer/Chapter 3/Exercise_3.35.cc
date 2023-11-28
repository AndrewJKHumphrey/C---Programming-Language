/*
Exercise 3.35: Using pointers, write a program to set the elements in an array to zero.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector;

int main()
{
    int a[] = {888, 9912, 123, 333, 1111, 222, 3312, 543, 1333, 8999, 9912, 123, 333, 1111, 222, 3312, 543, 1333, 8999};
    int *b = std::begin(a);
    int *e = std::end(a);

    for(int *i = b; *i != *e; *i++) {
        *i = 0;
    }

    for(auto i : a) {
        cout << i << endl;
    }

    return 0;
}