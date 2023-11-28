#include <iostream>

int main()
{
    int i = 10;
    int j = 20;
    int *p1 = &i;

    std::cout << "p1: " << p1 << std::endl; //0058FC6C
    p1 = &j;
    std::cout << "p1: " << p1 << std::endl; //0058FC68
    return 0;
}