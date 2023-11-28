#include <iostream>

int main()
{
    const int ic = 1, &r = ic;

    const int *const p3 = &ic;

    int i, *const cp = &i;

    int *p1 = &ic, *const p2 = p1;
     
    const int ic = 1, &r = ic;
     
    const int *const p3 = &ic;

    const int *p; 

    //i = ic; //Valid
    //p1 = p3; //Invalid
    //p1 = &ic; //Invalid
    //p3 = &ic; //Valid
    //p2 = p1; //Valid
    //ic = *p3; //Invalid
    
    return 0;
}
