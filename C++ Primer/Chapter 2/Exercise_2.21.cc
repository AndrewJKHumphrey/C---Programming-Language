#include <iostream>

int main()
{   
    int i = 0;
    //double* dp = &i; //Has to be the same type, i is an int, pointer is a double
    //int *ip = i; //Cannot assign an non zero int value to a pointer
    int *p = 0; //Null pointer
    int *p = &i; //Assigns the address of i to pointer p 
    return 0;
}