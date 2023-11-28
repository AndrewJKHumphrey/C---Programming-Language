/*
Exercise 3.43: Write three different versions of a program to print the elements of ia.
One version should use a range for to manage the iteration, the other two should use
an ordinary for loop in one case using subscripts and in the other using pointers. In
all three programs write all the types directly. That is, do not use a type alias, auto, or
decltype to simplify the code.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{   
    int ia[3][4] = { // three elements; each element is an array of size 4
        {0, 1, 2, 3}, // initializers for the row indexed by 0
        {4, 5, 6, 7}, // initializers for the row indexed by 1
        {8, 9, 10, 11} // initializers for the row indexed by 2
    };
    
    cout << "For (Range)" << endl;
    for(int (&row)[4] : ia) {
        for(int col : row) {
            cout << col << " ";
        }
        cout << endl;
    } 

    cout << "\nFor (Subscript)" << endl;
    for(size_t i = 0; i < std::size(ia); i++) {
        for(size_t j = 0; j < std::size(ia[0]); j++) {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    } 

    cout << "\nFor (Pointer)" << endl;
    for (int (*p)[4] = ia; p != ia + 3; p++) {
        for (int *q = *p; q != *p + 4; q++) {
            cout << *q << " ";
        }
        cout << endl;
    }

    return 0;
}