#include <iostream>

int main()
{
    int value = 10;
    while (value >= 0) {
        std::cout << value << std::endl;
        --value;
    }
    return 0;
}