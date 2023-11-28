/*
Exercise 3.33: What would happen if we did not initialize the scores array in the
program on page 116?
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector;

int main()
{
    unsigned scores[] = {}; //Since arrays are fixed, we need to intialize them to define the array's size

    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100) {
            ++scores[grade/10];
        }
    }
    return 0;
}