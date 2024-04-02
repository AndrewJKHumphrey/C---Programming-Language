/*
    Exercise 7.23: Write your own version of the Screen class.

    Exercise 7.24: Give your Screen class three constructors: 
    a default constructor; 
    a constructor that takes values for height and width and initializes the contents to hold the given number of blanks; 
    and a constructor that takes values for height, width, and a character to use as the contents of the screen.

     Exercise 7.25: Can Screen safely rely on the default versions of copy and assignment? If so, why? If not, why not?
*/

#include <iostream>
#include <vector>
#include <string>
#include <istream>
#include <ostream>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error, std::istream, std::ostream;

class Screen
{
    public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos h, pos w, int b): height(h), width(w), contents(b, ' ') {};
    Screen(pos h, pos w, char c): height(h), width(w), contents(h * w, c) {};

    private:
    pos height = 0;
    pos width = 0;
    pos cursor = 0;
    std::string contents;
};




int main()
{
    auto test = Screen(1, 2, 3); //Appears to have been assigned correctly
    auto test2 = test; //Appears to have copied the object correctly
}