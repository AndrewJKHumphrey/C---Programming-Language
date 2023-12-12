/*
Exercise 4.27: What is the result of each of these expressions?
unsigned long ul1 = 3, ul2 = 7;
(a) ul1 & ul2 (b) ul1 | ul2
(c) ul1 && ul2 (d) ul1 || ul2
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    unsigned long ul1 = 3, ul2 = 7;
    //(a) ul1 & ul2 Bitwise operator, 00000011 AND 00000111 would result in 00000011
    //(b) ul1 | ul2 Bitwise operator, 00000011 OR 00000111 would result in 00000111
    cout << (ul1 && ul2) << endl; //Logical operator will check if both values are non-zero, resulting 1 in this case 
    cout << (ul1 || ul2) << endl; //Logical operaror will check if the left value is non-zero, if not, check the right value, resulting in 1 in this case
    return 0;
}
