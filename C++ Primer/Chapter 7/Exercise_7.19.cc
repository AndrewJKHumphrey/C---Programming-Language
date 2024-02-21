/*
    Exercise 7.19: Indicate which members of your Person class you would declare as
    public and which you would declare as private. Explain your choice.
*/

#include <iostream>
#include <vector>
#include <string>
#include <istream>
#include <ostream>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error, std::istream, std::ostream;

class Person {
    //The constructors will need to be public or outside code would not be able to make use of them
    public:
    Person() = default;
    Person(const string &n): name(n) {}
    Person(const string &n, string &a): name(n), address(a) {}
    Person(std::istream &is);

    //I would make any function to return a property public, otherwise they serve little purpose
    public:
    string Name() const { return name; };
    string Address() const { return address; };
    //I would also make any function that would be useful for outside code public facing as well
    void updateAddress(string update) { address = update; };

    //However, the properties that those functions return, I would make private since I would not want them changed
    private:
    string name = "";
    string address = "";
};


void example(string name)
{
    Person person = Person(name);
}