/*
Exercise 6.21: Write a function that takes an int and a pointer to an int and returns
the larger of the int value or the value to which the pointer points. What type should
you use for the pointer?
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

//Whenever possible, use const because it is less restrictive and we are not changing parameter values
int compare(const int a, const int * b) {
    if(a > *b) {
        return a;
    } else {
        return *b;
    }
}

int compareAlt(int a, int * b) {
    if(a > *b) {
        return a;
    } else {
        return *b;
    }
}

int main()
{
    //Using const
    const int a = 10;
    const int c = 112;
    const int *b = &c;
    int d = compare(a, b); //If our function did not use const, this would result in an error
    //int d2 = compareAlt(a, b); //This will error since we cannot use a const pointer to initialize a non const pointer 
    
    cout << d << endl;

    //Using non const
    int e = 11;
    int g = 123;
    int *f = &g;
    int h = compare(e, f);
    cout << d << endl;

    return 0;
}