#include <iostream>

int main()
{
    int a = 3, b = 4; // a and b are both ints, a is 3 and b is 4
    decltype(a) c = a; //c is an int, has the value of a which happens to be 3
    decltype(a = b) d = a; //d is an int & and will refer to a, a's value does not change during this and remains at 3

    a++;
    a++; //a is now five, d should reflect this as it is a reference
    b++;
    b++; //b is now six

    std::cout << "a: " << a << "\nb: " << b << "\nc: " << c << "\nd: " << d << std::endl;

    return 0;
}