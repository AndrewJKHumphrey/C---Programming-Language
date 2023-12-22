/*
Exercise 6.36: Write the declaration for a function that returns a reference to an array
of ten strings, without using either a trailing return, decltype, or a type alias.
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;


//Type (*function(parameter_list))[dimension]
string (*hardWay(string)) [10] {
    string arr[10]; // arr is an array of ten ints
    string *p1[10]; // p1 is an array of ten pointers
    string (*p2)[10] = &arr; // p2 points to an array of ten ints
    return p2;
} 

int main()
{
    int arr[10]; // arr is an array of ten ints
    int *p1[10]; // p1 is an array of ten pointers
    int (*p2)[10] = &arr; // p2 points to an array of ten ints
    return 0;
}