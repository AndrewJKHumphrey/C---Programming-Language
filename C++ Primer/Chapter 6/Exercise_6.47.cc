/*
Exercise 6.47: Revise the program you wrote in the exercises in § 6.3.2 (p. 228) that
used recursion to print the contents of a vector to conditionally print information
about its execution. For example, you might print the size of the vector on each call.
Compile and run the program with debugging turned on and again with it turned off.
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

void printVector(vector<string> v) {
    static int index = 0;
    #ifndef NDEBUG //Not sure why, but even if I run without debugging, this still appears, may need to manually call this exe file
        static bool first = true;
        if(first) {
            cout << "The function, " << __func__  << " was called with a vector of the size " << v.size() << endl;
            first = false;
        }
    #endif
    if(index < v.size()) {
        cout << v[index++] << " ";
        return printVector(v);
    }
    cout << endl;

    
}


int main()
{
    vector<string> v = {"Hello", "World,", "how", "are", "you?"};
    printVector(v);
    return 0;
}