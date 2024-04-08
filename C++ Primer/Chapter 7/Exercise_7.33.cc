/*
 Exercise 7.33: What would happen if we gave Screen a size member defined as
 follows? Fix any problems you identify.

 pos Screen::size() const
 {
    return height * width;
 }
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
    typedef std::string::size_type pos;
    pos height = 0;
    pos width = 0;
    pos cursor = 0;
    string contents;
    pos size() const;
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