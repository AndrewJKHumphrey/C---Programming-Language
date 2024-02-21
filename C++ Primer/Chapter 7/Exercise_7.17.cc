/*
    Exercise 7.17: What, if any, are the differences between using class or struct?
*/

#include <iostream>
#include <vector>
#include <string>
#include <istream>
#include <ostream>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error, std::istream, std::ostream;

class Class_Example
{   
    public:
    string property = "This property will be private by default";
};

struct Struct_Example
{   
    string property = "This property will be public by default";
};

void print(Class_Example ex1, Struct_Example ex2)
{
    cout << ex1.property << ex2.property << endl;
}
