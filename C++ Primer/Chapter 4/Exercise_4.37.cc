/*
Exercise 4.37: Rewrite each of the following old-style casts to use a named cast:
int i; double d; const string *ps; char *pc; void *pv;
(a) pv = (void*)ps; (b) i = int(*pc);
(c) pv = &d; (d) pc = (char*) pv;
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    int i; double d; const string *ps; char *pc; void *pv;
    
    //pv = (void*)ps;
    pv = static_cast<void*>(const_cast<string*>(ps)); //Change const-ness then change type 

    //i = int(*pc);
    i = static_cast<int>(*pc);

    //pv = &d;
    pv = static_cast<void*>(&d);

    //pc = (char*) pv;
    pc = static_cast<char*>(pv);
    return 0;
}