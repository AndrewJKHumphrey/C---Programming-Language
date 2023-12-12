/*
Exercise 5.7: Correct the errors in each of the following code fragments:
(a) if (ival1 != ival2)
        ival1 = ival2
    else ival1 = ival2 = 0;
(b) if (ival < minval)
        minval = ival;
        occurs = 1;
(c) if (int ival = get_value())
        cout << "ival = " << ival << endl;
    if (!ival)
        cout << "ival = 0\n";
(d) if (ival = 0)
        ival = get_value();
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    int ival1 = 1, ival2 = 2;

    //a
    if (ival1 != ival2)
        ival1 = ival2; //missing ;
    else 
        ival1 = ival2 = 0; //Placed below else to ensure, but may have been correct being next to it
    
    //b
    int ival = 1, minval = 2, occurs = 0;

    //Needs a block due to multiple statements
    if (ival < minval) {
        minval = ival;
        occurs = 1;
    } 

    //c
    if (cin >> ival) //Get Value is not a function 
        cout << "ival = " << ival << endl;
    //d
    if (!ival)
        cout << "ival = 0\n";
    
    if (ival = 0)
        cin >> ival;

    return 0;
}