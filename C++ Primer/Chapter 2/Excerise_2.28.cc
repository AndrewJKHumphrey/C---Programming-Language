#include <iostream>

int main()
{
     //int i, *const cp; //Invalid since a const must be initiallized
    int i, *const cp = &i;

    //int *p2, *const p3; //Invalid since a const must be initialized
    int *p2, *const p3 = &i;
     
    //const int ic, &r = ic; //Invalid
    const int ic = 1, &r = ic;
     
    //const int *const p3; //Invalid
    const int *const p3 = &i;

    const int *p; //Valid, can be changed later since it is pointed to a const, not const itself
    p = &i; //Is not constant itself though
    
    return 0;
}
