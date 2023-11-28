#include <iostream>

int main()
{
    int i = 0, &r1 = i; //makes a variable and a reference at the same time
    double d = 0, &r2 = d; //ditto

    std::cout << "i: " << i << " r1: " << r1 << " d: " << d << " r2: " << r2 << std::endl;

    r2 = 3.14159; //this attempts to assign the value of pi to r2, which should be d

    std::cout << "i: " << i << " r1: " << r1 << " d: " << d << " r2: " << r2 << std::endl;

    r2 = r1; //r1 refernces i, which is an int, so it will fit into a double without issue, which r2 references d

    std::cout << "i: " << i << " r1: " << r1 << " d: " << d << " r2: " << r2 << std::endl;

    i = r2; //i is being assigned the value from d via a reference, d2 which may lose value due to a double value being assigned to a int
    
    std::cout << "i: " << i << " r1: " << r1 << " d: " << d << " r2: " << r2 << std::endl;

    r1 = d; //r1, which references i, is being assigned the value d. d being a double might lose some data once stored in i via r1

    std::cout << "i: " << i << " r1: " << r1 << " d: " << d << " r2: " << r2 << std::endl;
    
    return 0;
}