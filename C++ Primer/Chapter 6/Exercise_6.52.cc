/*
Exercise 6.52: Given the following declarations,
void manip(int, int);
double dobj;
what is the rank (§ 6.6.1, p. 245) of each conversion in the following calls?
(a) manip(’a’, ’z’); (b) manip(55.4, dobj);
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

void manip(int, int);


int main()
{   
    double dobj;
    manip('a', 'z'); //both are chars, so a will be converted to an int, then z will be converted to an int
    //3 Match through a promotion
    manip(55.4, dobj); //Both values will be converted to int values
    //4  Match through an arithmetic 
    return 0;
}