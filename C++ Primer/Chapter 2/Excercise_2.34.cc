#include <iostream>

int main()
{

    int i = 0, &r = i;
    auto a = r; // a is an int (r is an alias for i, which has type int)
    auto d = &i; // d is an int* (& of an int object is int*)
    
    const int ci = i, &cr = ci;
    auto b = ci; // b is an int (top-level const in ci is dropped)
    auto c = cr; // c is an int (cr is an alias for ci whose const is top-level)
    auto e = &ci; // e is const int* (& of a const object is low-level const)
    auto &g = ci; // g is a const int& that is bound to ci

    std::cout << "BEFORE" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "g: " << g << std::endl;

    std::cout << "AFTER" << std::endl;
    a = 42;
    b = 42;
    c = 42;
    //d = 42;
    //e = 42;
    //g = 42;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << "error" << std::endl;
    std::cout << "e: " << "error" << std::endl;
    std::cout << "g: " << "error" << std::endl;
    return 0;
}