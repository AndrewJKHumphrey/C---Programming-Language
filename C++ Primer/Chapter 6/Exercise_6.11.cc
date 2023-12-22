/*
Exercise 6.11: Write and test your own version of reset that takes a reference.
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;


void reset (int &valueA, int &valueB) {
    if(valueB == -1) {
        valueB = 1; //This sets the sequence to print from lower to upper
    } else if(valueB == -2) {
        valueB = 2; //This sets the sequence to print from upper to lower
    }
}

void test (int &valueA, int &valueB, const int &upper, const int &lower) {
    static int call = 0;
    cout << "Test Call #" << ++call << endl;
    if(valueB == 1) {
        for(; valueA < upper; valueA++) {
            cout << valueA << endl;
        }
        cout << upper << endl; //Print the final number
        valueB = -2; //I did this to show B's value can be changed within the functions and reset can be based on what was called before
    } else if(valueB == 2){
        for(; valueA >= lower; --valueA) {
            cout << valueA << endl;
        }
        ++valueA; //Increment A back to the starting point or what should be lower
        valueB = -1;
    } else {
        cout << "B is not set to 1 or 2, skipping printing sequence" << endl;
    }
}

int main()
{
    int A = 0;
    int B = -1;

    const int upper = 30;
    const int lower = A;


    reset(A, B); //Test should work due to reset
    test(A, B, upper, lower);

    test(A, B, upper, lower); //Test should not work due to no reset

    reset(A, B);
    test(A, B, upper, lower); //Test should work again due to reset

    return 0;
}