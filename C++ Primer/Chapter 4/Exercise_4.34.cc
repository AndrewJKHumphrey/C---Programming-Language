/*
Exercise 4.34: Given the variable definitions in this section, explain what conversions
take place in the following expressions:
(a) if (fval) (b) dval = fval + ival; (c) dval + ival * cval;
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    bool flag; char cval;
    short sval; unsigned short usval;
    int ival; unsigned int uival;
    long lval; unsigned long ulval;
    float fval; double dval;

    /*
        3.14159L + ’a’; // ’a’ promoted to int, then that int converted to long double
        dval + ival; // ival converted to double
        dval + fval; // fval converted to double
        ival = dval; // dval converted (by truncation) to int
        flag = dval; // if dval is 0, then flag is false, otherwise true
        cval + fval; // cval promoted to int, then that int converted to float
        sval + cval; // sval and cval promoted to int
        cval + lval; // cval converted to long
        ival + ulval; // ival converted to unsigned long
        usval + ival; // promotion depends on the size of unsigned short and int
        uival + lval; // conversion depends on the size of unsigned int and long
    */

   //In conditions, nonbool expressions are converted to bool
   //This would determine the resulting bool value based on the value of fval
    if (fval) {

    }

    //In assignments, the right-hand operand is converted to the type of the left-hand.
    //ival would be promoted to float, added to fval, the result would be then promoted to double 
    dval = fval + ival;
    
    //In most expressions, values of integral types smaller than int are first promoted to an appropriate larger integral type.
    //cval would be promoted to int, then multiplied by ival, the result would then be promoted to double
    dval = 322.2;
    ival = 5;
    cval = 'B';
    cout << dval + ival * cval << endl;
    return 0;
}