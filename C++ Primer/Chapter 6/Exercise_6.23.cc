/*
Exercise 6.23: Write your own versions of each of the print functions presented in
this section. 
Call each of these functions to print i and j defined as follows:
int i = 0, j[2] = {0, 1};
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

void print(const int i) {
    cout << i << endl;
}

void print(const int ia[], size_t size) {
    for(size_t i = 0; i != size; ++i) {
        cout << ia[i] << endl;
    }

}

int main()
{
    int i = 0, j[2] = {0, 1};
    cout << "Printing i" << endl;
    print(i);
    cout << "Printing j" << endl;
    print(j, end(j) - begin(j)); //Do not use sizeof(j) it behaves unexpectedly, returned a value of 8 for some reason
    return 0;
}