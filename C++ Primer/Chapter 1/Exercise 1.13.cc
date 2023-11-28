//Exercise 1.9/1.10 with a For loop instead of a While loop
#include <iostream>

int main()
{
    std::cout << "1.9" << std::endl;
    for(int i = 50; i <= 100; ++i) {
        std::cout << "Value is " << i << " currently" << std::endl;
    }
    std::cout << " " << std::endl << "1.10" << std::endl;
    for(int i = 10; i >=0; --i) {
        std::cout << "Value is " << i << " currently" << std::endl;
    }
    return 0;
}