/*
Exercise 3.45: Rewrite the programs again, this time using auto.
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
    for(auto &row : ia) {
        for(auto col : row) {
            cout << col << " ";
        }
        cout << endl;
    } 

    cout << "\nFor (Subscript)" << endl;
    for(auto i = 0; i < std::size(ia); i++) {
        for(auto j = 0; j < std::size(ia[0]); j++) {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    } 

    cout << "\nFor (Pointer)" << endl;
    for (auto *p = ia; p != ia + 3; p++) {
        for (auto *q = *p; q != *p + 4; q++) {
            cout << *q << " ";
        }
        cout << endl;
    }

    return 0;
}