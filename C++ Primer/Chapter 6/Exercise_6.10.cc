/*
Exercise 6.10: Using pointers, write a function to swap the values of two ints. Test
the function by calling it and printing the swapped values
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;


void swapInts (int *valueA, int *valueB) {
    int temp = *valueA;
    *valueA = *valueB;
    *valueB = temp;
}


int main()
{
    int A = 10;
    int B = 20;

    cout << "Before swap()" << endl;
    cout << "A: " << A << endl;
    cout << "B: " << B << endl;

    swapInts(&A, &B);

    cout << "\nAfter swap()" << endl;
    cout << "A: " << A << endl;
    cout << "B: " << B << endl;

    return 0;
}