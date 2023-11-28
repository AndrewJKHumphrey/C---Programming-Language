/*
Exercise 3.23: Write a program to create a vector with ten int elements. Using an
iterator, assign each element a value that is twice its current value. Test your program
by printing the vector
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector;

int main()
{

    vector<int> v1{15, 12, 34, 54, 533, 223, 12345, 23315, 22, 23343};
    cout << "Before: " << endl;
    for (auto i = v1.begin(); i < v1.end(); ++i) {
        cout << *i << " ";
    }
    cout << "\nAfter: " << endl;
    for (auto i = v1.begin(); i < v1.end(); ++i) {
        *i = 2 * *i;
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}