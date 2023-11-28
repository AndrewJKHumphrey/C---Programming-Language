#include <iostream>

int main()
{
    int a = 3, b = 4; //a and b are int
    
    decltype(a) c = a; //c is an int due to a single set of (); not an expression
    decltype((b)) d = b; //d is an (reference) int due to double set of (); expression

    //Doing some increments on a and b to see the behaviors of c and d, d is a refernce and should impact b while c shouldn't impact a
    ++a;
    ++a; //a is now five, when c increases it will not impact a and thus c will be four
    ++c; 
    ++b;
    ++b; //b is now six, but d will increase it to seven
    ++d;

    std::cout << "a: " << a << "\nb: " << b << "\nc: " << c << "\nd: " << d << std::endl;
    /*
    a: 5
    b: 7
    c: 4
    d: 7
    */

    

    return 0;
}