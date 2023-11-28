#include <iostream>

int main()
{
    for(int j = 1; j < 2; j++)
    {
        int* ip, i, &r = i; //ip is a pointer, i is an int, r is a reference to i 
        std::cout << "ip: " << ip << "\ni: " << i << "\nr: " << r << std::endl;
    }

    for(int j = 1; j < 2; j++)
    {
        int i, *ip = 0;  // i is an int, ip is a pointer that is null
        std::cout << "\ni: " << i << "\nip: nullptr" << std::endl;
    }

    for(int j = 1; j < 2; j++)
    {    
        int* ip, ip2; //ip is a pointer, ip2 is an int
        std::cout << "\nip: " << ip << "\nip2: " << ip2 << std::endl;
    }

    /* These exact values change, but you can see which values are pointers 
    ip: 0095F848 <- Pointer, to print the same value as i/r a * must be used
    i: 15055887 <- int
    r: 15055887 <- Reference to i, which is an int

    i: 9828416 <- int
    ip: nullptr <- This is a pointer, but since it was set to equal 0, it is a null pointer that cannot be printed

    ip: 00E91421 <- Pointer
    ip2: 15744819 <- int 
    */
    return 0;
}
