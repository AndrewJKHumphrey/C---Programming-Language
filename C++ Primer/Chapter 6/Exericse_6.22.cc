/*
Exercise 6.22: Write a function to swap two int pointers.
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

void swap(int* &a, int* &b) {
    int * c = a;
    a = b;
    b = c;
}


int main()
{
    int x = 100, y = 10;
    int *a = &x, *b = &y;
    cout << "a (before): " << *a << endl;
    cout << "b (before): " << *b << endl;
    swap(a, b) ;
    cout << "swap(a, b) called" << endl;
    cout << "a (after): " << *a << endl;
    cout << "b (after): " << *b << endl;

    return 0;
}