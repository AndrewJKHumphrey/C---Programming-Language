# include<iostream>

int main() 
{
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl; //u2 is larger than u, this result in 32
    std::cout << u - u2 << std::endl; //u is smaller than u2, this results in a 'negative' value that will wrap, 4294967264
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl; //i2 is larger than i, so the value will be 32
    std::cout << i - i2 << std::endl; //i is smaller than 42, but signed values result in actual negative values, -32
    std::cout << i - u << std::endl; //i will be converted an unsigned value due to u being present, 0
    std::cout << u - i << std::endl; //i will be converted to an unsigned value due to u being present, 0
    return 0;
}