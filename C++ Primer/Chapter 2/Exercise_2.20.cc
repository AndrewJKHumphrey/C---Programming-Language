#include <iostream>

int main()
{
    int i = 42; //Initialize i with the value 42 
    int *p1 = &i; //Initialize p1 pointing to i
    *p1 = *p1 * *p1; //Should multiply 42 by 42 then assign to i 
    std::cout << "i: " << i << " p1: " << p1 << std::endl;
    return 0;
}