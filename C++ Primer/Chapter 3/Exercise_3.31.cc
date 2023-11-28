/*
Exercise 3.31: Write a program to define an array of ten ints. 
Give each element the same value as its position in the array.
*/

#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector;

int main()
{
    //This is what the program in 3.30 did, but let's see if we can streamline it
    constexpr size_t s = 10;
    int a[s] = {};
    //Difficult to obtain the size of the array, but at the same time they are a fixed amount so the value should be known
    for(size_t i = 0; i < s; i++) {
        a[i] = i;
    }

    for(auto i : a) {
        cout << i << endl;
    }


    return 0;
}