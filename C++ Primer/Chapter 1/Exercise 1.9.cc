#include <iostream>

int main()
{
    int value = 50;
    while (value <= 100) {
        std::cout << "Value is " << value << " currently" << std::endl;
        ++value;
    }
    return 0;
}