/*
Exercise 6.51: Write all four versions of f. Each function should print a distinguishing message. Check your answers for the previous exercise. If your answers were
incorrect, study this section until you understand why your answers were wrong
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

void f() {cout << "A" << endl;}
void f(int) {cout << "B" << endl;}
void f(int, int) {cout << "C" << endl;}
void f(double, double = 3.14) {cout << "D" << endl;}

int main()
{
    //f(2.56, 42); //Both f(int, int) and f(double, double) are viable; error due to ambiguous 
    f(42); //f(int) is viable due to one argument, the others have 0 or 2
    f(42, 0); //f(int, int) //f(i, i) and f(d, d) are both viable, but f(i, i) is best match
    f(2.56, 3.14); //f(i, i) and f(d, d) are both viable, but f(d, d) is best match

    /*
    B
    C
    D
    */
   
    return 0;
}