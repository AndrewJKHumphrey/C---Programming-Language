/*
Exercise 4.35: Given the following definitions,
char cval; int ival; unsigned int ui;
float fval; double dval;
identify the implicit type conversions, if any, taking place:
(a) cval = ’a’ + 3; (b) fval = ui - ival * 1.0;
(c) dval = ui * fval; (d) cval = ival + fval + dval;

bool flag; char cval;
short sval; unsigned short usval;
int ival; unsigned int uival;
long lval; unsigned long ulval;
float fval; double dval;

3.14159L + ’a’; // ’a’ promoted to int, then that int converted to long double
dval + ival; // ival converted to double
dval + fval; // fval converted to double
ival = dval; // dval converted (by truncation) to int
flag = dval; // if dval is 0, then flag is false, otherwise true
cval + fval; // cval promoted to int, then that int converted to float
sval + cval; // sval and cval promoted to int
Section 4.11 Type Conversions 161
cval + lval; // cval converted to long
ival + ulval; // ival converted to unsigned long
usval + ival; // promotion depends on the size of unsigned short and int
uival + lval; // conversion depends on the size of unsigned int and long
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{   
    char cval; int ival; unsigned int ui; float fval; double dval;
    cval = 'a' + 3; //3 is an int, 'a' being char would likely be converted to int, then 3 is added, then converted back to char
    fval = ui - ival * 1.0; //ival promoted to float, multipled by 1.0 due to precendence, then ui is promoted to float then added
    dval = ui * fval; //ui promoted to float, then the values are multiplied, then promoted to double
    cval = ival + fval + dval; //ival convered to float, then added to fval, the result is then converted to double then added
    return 0;
}