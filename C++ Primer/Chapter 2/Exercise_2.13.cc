#include <iostream>

int i = 42; //Global i

int main()
{
    int i = 100; //Local i
    int j = i; //This should use the local i since it is the in scope 

    std::cout << "j: " << j << std::endl;
    return 0;
}