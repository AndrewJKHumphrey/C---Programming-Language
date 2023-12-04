/*
Exercise 4.13: What are the values of i and d after each assignment?
int i; double d;
(a) d = i = 3.5; (b) i = d = 3.5;
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    int i; double d;
    d = i = 3.5; //3.5 goes into i first, then d. i is an int, so i = 3, thus d = 3
    cout << "d: " << d << "\ni: " << i << endl;

    //d: 3
    //i: 3
    
    i = d = 3.5; //3.5 goes into d first, then i. d is a double, so d should equal 3.5, then i is populated with 3
    cout << "i: " << i << "\nd: " << d << endl;
    
    //i: 3
    //d: 3.5

    return 0;
}