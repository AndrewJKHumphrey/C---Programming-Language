/*
EXERCISES SECTION 4.2
Exercise 4.4: Parenthesize the following expression to show how it is evaluated. Test
your answer by compiling the expression (without parentheses) and printing its result.
12 / 3 * 4+5 * 15 + 24 % 4 / 2
*/

#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    double result = 12 / 3 * 4+5 * 15 + 24 % 4 / 2; //91

    double test = ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2); //91
    //* / % have the same level of precedence
    //Left to Right Association ((L) R)
    //+ is lowest precedence, so leave outside of () to ensure it happens last

    cout << result << endl;
    cout << test << endl;
    return 0;
}