/*
Exercise 6.26: Write a program that accepts the options presented in this section. Print
the values of the arguments passed to main.

Note: Isn't this almost the same as 6.25? 
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

int main(int size, char *argument[])
{
    if(size && argument) {
        string s;
        for(int i = 0; i < size; ++i) {
            if(argument[i]) {
                cout << argument[i] << endl;
            }
        }
        
    }
    return 0;
}