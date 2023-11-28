#include <iostream>

int main()
{
    int i, &ri = i;
    i = 5; ri = 10; //This assigns i the value of 5, but then r1 is assigned the value of 10, which means i is now 10 not 5
    std::cout << i << " " << ri << std::endl;
}