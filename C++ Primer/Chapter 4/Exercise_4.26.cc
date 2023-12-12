/*
Exercise 4.26: In our grading example in this section, what would happen if we used
unsigned int as the type for quiz1?
*/

#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{   
    unsigned long quiz1 = 0; // we’ll use this value as a collection of bits
    quiz1 |= 1UL << 27; // indicate student number 27 passed
    bool status = quiz1 & (1UL << 27);
    cout << status << endl;

    unsigned int quiz2 = 0; // we’ll use this value as a collection of bits
    //If I recall, this machine has 32bit int and 64bit longs, both of which would have a 27 bit to modifiy, so no changes
    quiz2 |= 1UL << 27; // indicate student number 27 passed
    status = quiz2 & (1UL << 27);
    cout << status << endl;

    return 0;
}