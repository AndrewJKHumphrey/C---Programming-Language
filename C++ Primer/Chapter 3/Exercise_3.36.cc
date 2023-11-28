/*
Exercise 3.36: Write a program to compare two arrays for equality. Write a similar
program to compare two vectors.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    int a[] = {888, 9912, 123, 333, 1111, 222, 3312, 543, 1333, 8999, 9912, 123, 333, 1111, 222, 3312, 543, 1333, 8999};
    int b[] = {1111, 222, 3312, 543, 1333, 8999, 222, 3312, 543, 1333, 8999, 9912, 123, 333, 1111, 222, 3312, 543, 8999};

    if(a == b) {
        cout << "Arrays Equal" << endl;
    } else {
        cout << "Arrays Not Equal" << endl;
    }

    vector c = {888, 9912, 123, 333, 123, 333, 1111, 222, 3312, 543, 1333, 8999};
    vector d = {888, 9912, 123, 333, 123, 333, 1111, 222, 3312, 543, 1333, 8999};
    
    if(c == d) {
        cout << "Vectors Equal" << endl;
    } else {
        cout << "Vectors Not Equal" << endl;
    }
    return 0;
}