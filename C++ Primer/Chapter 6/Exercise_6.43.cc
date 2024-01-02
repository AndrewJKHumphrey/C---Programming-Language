/*
Exercise 6.43: Which one of the following declarations and definitions would you put
in a header? In a source file? Explain why.
    (a) inline bool eq(const BigInt&, const BigInt&) {...}
    (b) void putValues(int *arr, int size);
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

inline bool eq(const BigInt&, const BigInt&) {...} //Since this is inline, it would be best to put this into the header file to ensure the same definition is used

void putValues(int *arr, int size) { }; //This may be suitable to be within a source file, but functions typically live in header files

//Note: I have been putting them into the source file to speed up working on these exercises 

int main()
{

    return 0;
}