/*
Exercise 6.18: Write declarations for each of the following functions. When you write
these declarations, use the name of the function to indicate what the function does.

Note: Why does it tell us to use the name to indicate what a function does, then turn around and give us a name?

(a) A function named compare that returns a bool and has two parameters that
are references to a class named matrix. Note: (Matrix is not a class in standard library, matrix was not mentioned until after this section as well)

(b) A function named change_val that returns a vector<int> iterator and
takes two parameters: One is an int and the other is an iterator for a vector<int>.
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;



//Matrix is not a class in C++ (at least at this time, may have been previously)
//Later in the chapter, int (*matrix) [10] was used
bool compare(int (*matrixA) [10], int (*matrixB) [10]) {
    bool flag;

    return flag;
}

vector<int> change_val(int i, vector<int>::iterator iter) {
    vector<int> v(10);
    return v;
}

int main()
{
    int (*matrixA) [10];
    return 0;
}