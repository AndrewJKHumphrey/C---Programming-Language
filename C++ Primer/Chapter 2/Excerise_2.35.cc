#include <iostream>

int main()
{
    int a = 3, b = 4; //a and b are int
    decltype(a) c = a; //c is an int with the value of a
    decltype(a = b) d = a; //d is an int & that refers to a

    return 0;
}