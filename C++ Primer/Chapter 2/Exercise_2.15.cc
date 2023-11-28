#include <iostream>

int main()
{
    int ival = 1.01; //valid
    int &rval1 = 1.01; //invalid as it references a value, not an object
    int &rval2 = ival; //valid
    int &rval3; //invalid since it doesn't bind to anything

    return 0;
}