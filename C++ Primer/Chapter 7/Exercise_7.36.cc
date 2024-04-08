/*
 Exercise 7.36: The following initializer is in error. Identify and fix the problem.
     struct X {
        X (int i, int j): base(i), rem(base % j) { }
        int rem, base;
    };
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

struct X {
    int base, rem; //While it did not cause an error in compile or runtime, rem being in front of base caused rem to be incorrect
    X (int i, int j): base(i), rem(base % j) { }
};
//The above does not compile error nor did it fail during runtime

int main()
{
    int i = 10002;
    int j = 2;
    X test = X(i, j);
    cout << i % j << endl; //This printed 1 as expected
    cout << test.rem << endl; //This printed 0 when it should be 1 
}