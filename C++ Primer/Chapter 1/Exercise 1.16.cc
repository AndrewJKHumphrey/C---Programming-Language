#include <iostream>

int main() 
{
    int sum = 0, value = 0;
    //You have to break (crtl + c) to continue execution after entering inputs
    while(std::cin >> value) {
        sum += value;
    }
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}