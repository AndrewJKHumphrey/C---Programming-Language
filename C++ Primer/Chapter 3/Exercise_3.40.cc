/*
Exercise 3.40: Write a program to define two character arrays initialized from string
literals. Now define a third character array to hold the concatenation of the two arrays.
Use strcpy and strcat to copy the two arrays into the third.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    const char ca1[] = "Oh no, it's one of those C style char strings... again";
    const char ca2[] = "Don't forget that there is a second one... again";
    char ca3[101] = {};

    strcpy(ca3, ca1);
    strcat(ca3, " ");
    strcat(ca3, ca2);

    cout << ca3 << endl;

    return 0;
}