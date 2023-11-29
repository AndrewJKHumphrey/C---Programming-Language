/*
Exercise 4.9: Explain the behavior of the condition in the following if:
const char *cp = "Hello World";
if (cp && *cp)
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    const char *cp = "Hello World"; //This will be the full string, Hello World
    cout << "cp: " << cp << endl; //This will only be the first letter, H
    cout << "*cp: " << *cp << endl;

    //This appears to be testing if cp and *cp are non-zero, which they would be since they are at least the char H or 72 
    if (cp && *cp) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    if (cp) {
        cout << "True" << endl; //Evaluates to true, meaning non-zero
    } else {
        cout << "False" << endl;
    }

    if (*cp) {
        cout << "True" << endl; //Evalutes to true, meaning non-zero as well (which was expected since an && was used above)
    } else {
        cout << "False" << endl;
    }

    if (*cp == 72) {
        cout << "True" << endl; //Evaluates to true, which tells me that it may be converting cp/*cp to int values
                                //Then checking if they are non-zero or not
    } else {
        cout << "False" << endl;
    }

    return 0;
}