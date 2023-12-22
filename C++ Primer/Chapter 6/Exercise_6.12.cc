/*
Exercise 6.12: Rewrite the program from exercise 6.10 in § 6.2.1 (p. 210) to use references 
instead of pointers to swap the value of two ints. 
Which version do you think would be easier to use and why?
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;


void swapInts (int &valueA, int &valueB) {
    int temp = valueA; //int temp = *valueA; The code is simplified, it's not a major change from a syntax perspective
    valueA = valueB; //*valueA = *valueB; But from a workflow standpoint, easier to think 'updating variable A using this function' 
    valueB = temp; //*valueB = temp; Than think 'Updating the variable that is bound to A' or risk issues with A vs *A 
}

int main()
{
    int A = 10;
    int B = 20;

    cout << "Before swap()" << endl;
    cout << "A: " << A << endl;
    cout << "B: " << B << endl;

    swapInts(A, B); //Was swapInts(&A, &B); 

    cout << "\nAfter swap()" << endl;
    cout << "A: " << A << endl;
    cout << "B: " << B << endl;

    return 0;
}