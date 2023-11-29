/*
Exercise 4.7: What does overflow mean? Show three expressions that will overflow.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    short short_value = 2147483647; //Short on this machine is 32 bits
    short_value += 1;
    cout << "short_value: " << short_value << endl; //This results in 0

    int int_value = 18446744073709551615; //64 bits (if you put 18,446,744,073,709,551,616 it actually errors during compile)
    int_value += 1;
    cout << "int_value: " << int_value << endl; //This results in 0

    int signed negative_value = 0;
    negative_value += 2147483647;
    negative_value += 2147483648;
    cout << "int_value: " << negative_value << endl; //Results in -1 since we added two very large values

    
    return 0;
}