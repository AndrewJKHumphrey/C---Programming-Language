/*
Exercise 6.25: Write a main function that takes two arguments. Concatenate the supplied arguments and print the resulting string.
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
                s += argument[i];
                s += ' ';
            }
        }
        cout << s << endl;
    }
    return 0;
}