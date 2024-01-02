/*
Exercise 6.41: Which, if any, of the following calls are illegal? Why? Which, if any, are
legal but unlikely to match the programmer’s intent? Why?
char *init(int ht, int wd = 80, char bckgrnd = ’ ’);
(a) init(); (b) init(24,10); (c) init(14, ’*’);
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

char *init(int ht, int wd = 80, char bckgrnd = ' '){
    cout << "ht: " << ht << endl;
    cout << "wd: " << wd << endl;
    cout << "bckgrnd: " << bckgrnd << endl;
    return &bckgrnd;
}

int main()
{
    //init(); //ht has no default, so this is illegal
    init(24,10); //This works since bckgrnd can be omitted, ht parameter is passed to the function
    /*     
    ht: 24
    wd: 10
    bckgrnd: 
    */

    init(14, '*'); //This does not work as expected since 14 would apply to ht, '*' is now being passed for wd 
    /*
    ht: 14
    wd: 42 <- * was promoted implicitly to 42, which became wd without issue
    bckgrnd: <- This remained ' ' which is the default value
    */

    return 0;
}