#include <iostream>

int global_int; //0
std::string global_str; //empty 

int main()
{

    int local_int; //20314256
    std::string local_str; //empty

    std::cout << "global_int: " << global_int << std::endl;
    std::cout << "global_str: " << global_str << std::endl;
    std::cout << "local_int: " << local_int << std::endl;
    std::cout << "local_str: " << local_str << std::endl;
    return 0;
}
    