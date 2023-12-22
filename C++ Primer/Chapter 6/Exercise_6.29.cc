/*
Exercise 6.29: When you use an initializer_list in a range for would you ever
use a reference as the loop control variable? If so, why? If not, why not?
*/

#include <iostream>
#include <vector>
#include <string>
#include <list>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

void stringList(std::initializer_list<string> list) {
    for(auto &elem : list) {
        //From an updating standpoint, we simply cannot do that with the list provided
        //Unlike vector, the elements in an initializer_list are always const values
        //there is no way to change the value of an element in an initializer_list.
        //On top of that, the list itself above is not a reference itself, so using a reference for elem like the examples in the book
        //may not do a whole lot for us, unless the list were to be returned
        //The benefit to use a reference would to help reduce the need to copy the element objects by using an alias instead
    }
}

int main()
{
    return 0;
}