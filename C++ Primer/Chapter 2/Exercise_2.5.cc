#include<iostream>
#include <typeinfo>

int main() 
{
    std::cout << "A)" << std::endl;
    std::cout << typeid('a').name()<< std::endl; //char
    std::cout << typeid(L'a').name() << std::endl; //wchar_t
    std::cout << typeid("a").name() << std::endl; //char const [2]
    std::cout << typeid(L"a").name() << std::endl; //wchar_t const [2]
    
    std::cout << "B)" << std::endl;
    std::cout << typeid(10).name()<< std::endl; //int
    std::cout << typeid(10u).name()<< std::endl; //unsigned int
    std::cout << typeid(10L).name()<< std::endl; //long
    std::cout << typeid(10uL).name()<< std::endl; //unsigned long
    std::cout << typeid(012).name()<< std::endl; //int
    std::cout << typeid(0xc).name()<< std::endl; //int

    std::cout << "C)" << std::endl;
    std::cout << typeid(3.14).name()<< std::endl; //double
    std::cout << typeid(3.14f).name()<< std::endl; //float
    std::cout << typeid(3.14L).name()<< std::endl; //long double
    
    std::cout << "D)" << std::endl;
    std::cout << typeid(10).name()<< std::endl; //int
    std::cout << typeid(10).name()<< std::endl; //int
    std::cout << typeid(10.).name()<< std::endl; //double
    std::cout << typeid(10e-2).name()<< std::endl; //double

    return 0;
}