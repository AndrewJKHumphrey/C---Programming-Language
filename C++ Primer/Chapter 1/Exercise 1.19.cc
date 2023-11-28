#include <iostream>

int main()
{
    int v1, v2, upper, lower;
    std::cout << "Enter two numbers: ";
    std::cin >> v1 >> v2;

    //If the first number is bigger, then count down to the lower second value
    if (v1 > v2) {
        while (v1 >= v2) {
            std::cout << v1 << std::endl;
            --v1;
        }
    }
    //If the second number is bigger, then count up to the higher second value 
    else {
        while (v1 <= v2) {
            std::cout << v1 << std::endl;
            ++v1;
        }
    }
    return 0;
}