/*
Exercise 4.30: Using Table 4.12 (p. 166), parenthesize the following expressions to
match the default evaluation:
(a) sizeof x + y (b) sizeof p->mem[i]
(c) sizeof a < b (d) sizeof f()
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    (sizeof x) + y; //sizeof higher precendence than +
    sizeof (p->mem[i]); //-> member selection higher precendence than sizeof
    (sizeof a) < b; //sizeof higher precendence than <
    sizeof(f()); //Function call higher precendence than sizeof
    return 0;
}