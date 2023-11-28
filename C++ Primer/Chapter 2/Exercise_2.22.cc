#include <iostream>
#include <string>

int main()
{   
    int i = 1;
    int *p = &i;
    int *pp = nullptr;

    if (p) {
        std::cout << "Pointer is not null" << std::endl;
    } //Checks if p pointes to an address or not

    if(pp) {
        std::cout << "Pointer is not null" << std::endl;
        //Exercise 2.23 if given a pointer, you can use an if(pointer) to check if it points a valid object or not
    }

    if (*p == i) {
        std::cout << "Value match" << std::endl;
    } //Checks the value of the address 

    std::cout << "p: " << p << " *p: " << *p << std::endl; 
    return 0;
}