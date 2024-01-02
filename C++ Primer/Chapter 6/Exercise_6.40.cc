/*
Exercise 6.40: Which, if either, of the following declarations are errors? Why?
    (a) int ff(int a, int b = 0, int c = 0);
    (b) char *init(int ht = 24, int wd, char bckgrnd);
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

 int function1(int a, int b = 0, int c = 0){
    return a;
 }

//This should error since the default value is on the left, meaning all parameters to the right of it need defaults
 char *function2(int wd, char bckgrnd, int ht = 24) {
    return &bckgrnd;
 }
 
int main()
{
    function1(1);
    function2(24, 'a'); //Moving the default parameter to the right side should prevent the error
    return 0;
}