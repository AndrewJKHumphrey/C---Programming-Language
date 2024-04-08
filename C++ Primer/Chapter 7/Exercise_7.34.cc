/*
    Exercise 7.34: What would happen if we put the typedef of pos in the Screen class
    on page 285 as the last line in the class?
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

class Screen;

class Window_mgr
{  
    public:
    void clear(Screen &s);
    void show(Screen &s);
};

class Screen
{
    //typedef std::string::size_type pos;
    pos height = 0;
    pos width = 0;
    pos cursor = 0;
    string contents;
    pos size() const;
    typedef std::string::size_type pos; //The above code does not see the new type definition
};
 
Screen::pos Screen::size() const
{
    return height * width;
};


int main()
{
    Window_mgr test = Window_mgr();
    Screen s = Screen();
    return 0;
}