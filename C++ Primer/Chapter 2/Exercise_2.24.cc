#include <iostream>

int main()
{
    int i = 42; 
    void *p = &i; 
    //long *lp = &i; //pointer is a long, while i is an int 
    int *lp = &i;
    return 0;
}

