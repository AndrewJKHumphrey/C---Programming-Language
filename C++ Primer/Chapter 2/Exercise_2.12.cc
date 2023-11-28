#include <iostream>

int main()
{   
    //int double = 3.14; //Invalid due to using a reserved word
    int pi = 3.14; 
    
    int _; //Valid
    
    //int catch-22; //uses reserved word or/and uses '-' instead of an '_'
    int catch_22;

    //int 1_or_2 = 1; //Invalid due to starting with a digit 
    int _1_or_2 = 1;
    int one_or_two = 1;

    double Double = 3.14; //valid, since uppercase letters are distinct, so reserve word is not used technically
    
    return 0;
}