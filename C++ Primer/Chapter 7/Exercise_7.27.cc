/*
Exercise 7.27: Add the move, set, and display operations to your version of Screen. Test your class by executing the following code:
    Screen myScreen(5, 5, ’X’);
    myScreen.move(4,0).set(’#’).display(cout);
    cout << "\n";
    myScreen.display(cout);
cout << "\n";
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

    Screen &set(char);
    Screen &set(pos, pos, char);
    Screen &move(pos, pos);

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
inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
};
inline Screen &Screen::set(pos r, pos col, char c)
{
    contents[r*width + col] = c;
    return *this;
};
inline Screen &Screen::move(pos r, pos c)
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
    myScreen.display(cout);

    //Prints
    //....................#....
    //.....................#....
}