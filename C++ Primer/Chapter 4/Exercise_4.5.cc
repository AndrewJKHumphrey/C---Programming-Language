/*
Exercise 4.5: Determine the result of the following expressions.
(a) -30 * 3 + 21 / 5 (b) -30 + 3 * 21 / 5
(c) 30 / 3 * 21 % 5 (d) -30 / 3 * 21 % 4
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    double resA = -30 * 3 + 21 / 5;
    double tstA = (-30 * 3) + (21 / 5); //86
    cout << tstA << endl;
    cout << resA << endl;

    double resB = -30 + 3 * 21 / 5;
    double tstB = -30 + (3 * (21 / 5)); //-18
    cout << tstB << endl;
    cout << resB << endl;
    
    double resC = 30 / 3 * 21 % 5;
    double tstC = (((30 / 3) * 21) % 5); //0
    cout << tstC << endl;
    cout << resC << endl;

    double resD = -30 / 3 * 21 % 4;
    double tstD = (((-30 / 3) * 21) % 4); //-2
    cout << tstD << endl;
    cout << resD << endl;

    return 0;
}