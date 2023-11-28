#include <iostream>

int main()
{
    const int buf; //Invalid as it does not define when declared
    int cnt = 0; //Valid, but won't be constant 
    const int sz = cnt; //Valid, sz will be a constant with the value of sz
    ++cnt; ++sz; //Invalid since sz was defined to be a constant with the value of sz, cnt is not constant and thus can be incremented
    return 0;
}
