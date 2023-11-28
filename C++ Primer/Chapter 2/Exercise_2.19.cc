#include <iostream>

int main()
{
    int i, &ri = i; //A reference is not an object tehnically
    int j, *pj = &j; //A pointer is an object

    r1 = j; //we cannot make a reference change which object it references
    pj = &i; //we can make a pointer point elsewhere

    return 0;
}