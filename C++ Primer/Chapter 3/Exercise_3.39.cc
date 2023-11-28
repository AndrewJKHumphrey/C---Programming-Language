/*
Exercise 3.39: Write a program to compare two strings. Now write a program to
compare the values of two C-style character strings.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    string sa = "Example string, yo";
    string sb = "Whoa, another example string";

    if(sa > sb) {
        cout << "sa is greater than sb" << endl;
    } else {
        cout << "sb is greater than sa" << endl;
    }


    const char ca1[] = "Oh no, it's one of those C style char strings";
    const char ca2[] = "Not just one, but two C style char strings!";

    if(strcmp(ca1, ca2)) {
        cout << "ca1 is greater than ca2" << endl;
    } else {
        cout << "ca2 is greater than ca1" << endl;
    }


    return 0;
}