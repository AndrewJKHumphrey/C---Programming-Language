/*
Exercise 6.7: Write a function that returns 0 when it is first called and then generates
numbers in sequence each time it is called again.
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

int functionCallNumber() {
    static int call = 0;
    return call++;
}

int main()
{
    int i = 10; 
    int j;
    while(i > 0) {
        j = functionCallNumber();
        cout << j << endl;
        --i;
    }
    return 0;
}