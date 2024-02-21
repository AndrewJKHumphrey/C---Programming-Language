/*
    Exercise 7.18: What is encapsulation? Why is it useful?
*/

#include <iostream>
#include <vector>
#include <string>
#include <istream>
#include <ostream>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error, std::istream, std::ostream;

class Encapsulation_Example
{   
    public: //Encapsulation is explicitly defining access levels within an object to allow or restrict access
    string property1 = "This property will be private by default, but it has been set to public to allow access";

    private: 
    string property2 = "This property has been set to private to restrict access";
};

void print(Encapsulation_Example ex)
{
    cout << ex.property1 << ex.property2 << endl;
}
