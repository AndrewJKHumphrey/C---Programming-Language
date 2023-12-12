/*
Exercise 4.38: Explain the following expression:
double slope = static_cast<double>(j/i);
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    int i, j;
    double slope = static_cast<double>(j/i);
    //The desired assignment type is double, but doing arithmetic with ints would not have the precision of a double
    //The entire expression, the ints i and j, are being converted to double before being divided to ensure when i and j are divided, it takes advantage of doubles precision

    return 0;
}