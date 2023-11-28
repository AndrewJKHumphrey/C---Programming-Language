/*
Exercise 3.27: Assuming txt_size is a function that takes no arguments and returns
an int value, which of the following definitions are illegal? Explain why.
unsigned buf_size = 1024;
(a) int ia[buf_size]; (b) int ia[4 * 7 - 14];
(c) int ia[txt_size()]; (d) char st[11] = "fundamental";
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector;

int main()
{
    //unsigned buf_size = 1024; //This is not a constexpr
    constexpr unsigned buf_size = 1024; //Now it is a constexpr 
    int ia[buf_size]; 

    int ia[4 * 7 - 14]; //This a constexpr, so it is valid

    int ia[txt_size()]; //txt_size returns an int, which is not a constexpr

    //char st[11] = "fundamental"; //fundamental is 11 chars long, which means no room for the null character 
    char st[12] = "fundamental"; //Adding the string length plus one will hold the string and the null character
    char st2[] = "fundamental"; //You can also just omit the diemnsion and let the compiler infer it instead
    
    return 0;
}

constexpr int txt_size() 
{
    //This is not a constant expression if the function only returns an int
    //Could make it return a constexpr int instead, that would work
    return 1;
}