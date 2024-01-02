/*
Exercise 6.50: Given the declarations for f from page 242, list the viable functions, if
any for each of the following calls. Indicate which function is the best match, or if the
call is illegal whether there is no match or why the call is ambiguous.
(a) f(2.56, 42) (b) f(42) (c) f(42, 0) (d) f(2.56, 3.14)

void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);

int main()
{
    //f(2.56, 42); //Both f(int, int) and f(double, double) are viable; error due to ambiguous 
    f(42); //f(int) is viable due to one argument, the others have 0 or 2
    f(42, 0); //f(int, int) //f(i, i) and f(d, d) are both viable, but f(i, i) is best match
    f(2.56, 3.14); //f(i, i) and f(d, d) are both viable, but f(d, d) is best match
    return 0;
}