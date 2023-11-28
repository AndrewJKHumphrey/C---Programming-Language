/*
Exercise 3.38: In this section, we noted that it was not only illegal but meaningless to
try to add two pointers. Why would adding two pointers be meaningless?
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    const char ca1[] = "A string example";
    const char ca2[] = "TESTING NOTABLE";
    const char ca3[] = "A different string";

    //auto bad = ca1 + ca2; 
    //The point of adding to a pointer is to change elements, by a set amount
    //A pointer is not a set amount, so you would end up potentially causing unexpectd behaviors or crashes

    auto good = ca1 + 5; //Results in 'ing example' 
    auto alsoGood = ca3 + 6; //Results in 'erent string' 
    auto notable = ca3 - 36; //Results in 'TESTING NOTABLE' which is not ca3, but ca2
    
    //I suspect that the memory addresses of the above objects happen to be close enough to each other that moving backwards
    //enters the addresses of the previous objects

    cout << good << endl;
    cout << alsoGood<< endl;
    cout << notable << endl; 
    return 0;
}