#include<iostream>

int main() 
{
    int ans1 = 32, ans2 = 4294967264, ans3 = 32, ans4 = -32, ans5 = 0, ans6 = 0;

    unsigned u = 10, u2 = 42;
    std::cout << ((u2 - u) == ans1) << std::endl; //u2 is larger than u, this result in 32
    std::cout << ((u - u2) == ans2) << std::endl; //u is smaller than u2, this results in a 'negative' value that will wrap, 4294967264
    int i = 10, i2 = 42;
    std::cout << ((i2 - i) == ans3) << std::endl; //i2 is larger than i, so the value will be 32
    std::cout << ((i - i2) == ans4) << std::endl; //i is smaller than 42, but signed values result in actual negative values, -32
    std::cout << ((i - u) == ans5) << std::endl; //i will be converted an unsigned value due to u being present, 0
    std::cout << ((u - i) == ans6) << std::endl; //i will be converted to an unsigned value due to u being present, 0
    
    return 0;
}