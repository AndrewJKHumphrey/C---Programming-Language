/*
Exercise 4.11: Write an expression that tests four values, a, b, c, and d, and ensures
that a is greater than b, which is greater than c, which is greater than d.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{   
    int a = 4;
    int b = 3;
    int c = 2;
    int d = 1;
    if(a > b && b > c && c > d)
    {
        cout << "a > b, b > c, c > d" << endl;
    }
    return 0;
}