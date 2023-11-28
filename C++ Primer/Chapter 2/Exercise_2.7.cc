#include <iostream>
#include <typeinfo>

int main() 
{
    std::cout << "A)" << std::endl;
    std::cout << "Who goes with F\145rgus?\012" << std::endl; //Who goes with Fergus?
    std::cout << typeid("Who goes with F\145rgus?\012").name()<< std::endl; //char const [23]

    std::cout << "B)" << std::endl;
    std::cout << 3.14e1L << std::endl; //31.4
    std::cout << typeid(3.14e1L).name()<< std::endl; //long double

    std::cout << "C)" << std::endl; //1024f errors, added a decimal 
    std::cout << 1024.f << std::endl; //1024
    std::cout << typeid(1024.f).name()<< std::endl; //float

    std::cout << "D)" << std::endl;
    std::cout << 3.14L << std::endl; //3.14
    std::cout << typeid(3.14L).name() << std::endl; //long double


    return 0;
}