/*
Exercise 3.37: What does the following program do?
const char ca[] = {'h', 'e', 'l', 'l', 'o'};
const char *cp = ca;
    while (*cp) {
        cout << *cp << endl;
        ++cp;
}
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca; //This only contains the first element, so it will print only h in this case
    while (*cp) {
        cout << *cp << endl;
        ++cp;
    return 0;
    }
}