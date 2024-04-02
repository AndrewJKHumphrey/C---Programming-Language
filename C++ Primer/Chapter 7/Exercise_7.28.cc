/*
Exercise 7.28: What would happen in the previous exercise if the return type of move,
set, and display was Screen rather than Screen&?

Exercise 7.29: Revise your Screen class so that move, set, and display functions
return Screen and check your prediction from the previous exercise.

Exercise 7.30: It is legal but redundant to refer to members through the this pointer.
Discuss the pros and cons of explicitly using the this pointer to access members.
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

    Screen set(char);
    Screen set(pos, pos, char);
    Screen move(pos, pos);

    Screen &display(ostream &os)
    {
        do_display(os);
        return *this;
    }
    const Screen &display(ostream &os) const
    {
        do_display(os);
        return *this;
    }


    private:
    pos height = 0;
    pos width = 0;
    pos cursor = 0;
    string contents;
    void do_display(ostream &os) const {os << contents;}
};
inline Screen Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
};
inline Screen Screen::set(pos r, pos col, char c)
{
    contents[r*width + col] = c;
    return *this;
};
inline Screen Screen::move(pos r, pos c)
{
    pos row = width * r;
    cursor = row + c;
    return *this;
};

int main()
{
    Screen myScreen(5, 5, '.');
    myScreen.move(4,0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout); //The updates will only impact the returned object, not the object within main, it will appear as the default screen

    //Prints
    //....................#....
    //.........................

    //7.30
    //Pro: Shows that the member is a part of the object in question
    //Con: Adds a lot of extra typing, this->contents would become rather tedious 
}