/*
Exercise 7.32: Define your own versions of Screen and Window_mgr in which
clear is a member of Window_mgr and a friend of Screen.
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

class Screen;

class Cool_Window_mgr
{  
    public:
    void clear(Screen &s);
    void show(Screen &s);
};

class Not_Cool_Window_mgr //I put this hear only to show that cool friend classes are allowed to see private, but the not cool classes are not
{  
    public:
    void clear(Screen &s);
    void show(Screen &s);
};

class Screen
{
    friend Cool_Window_mgr;

    private:
    string content = "TEST";

};

void Cool_Window_mgr::clear(Screen &s)
{
    s.content = "CLEAR";
};

void Cool_Window_mgr::show(Screen &s)
{
    cout << s.content << endl;
}

void Not_Cool_Window_mgr::clear(Screen &s)
{
    s.content = "CLEAR";
};

void Not_Cool_Window_mgr::show(Screen &s)
{
    cout << s.content << endl;
}

int main()
{
    Cool_Window_mgr test = Cool_Window_mgr();
    Screen s = Screen();
    test.show(s);
    test.clear(s);
    test.show(s);
    return 0;
}