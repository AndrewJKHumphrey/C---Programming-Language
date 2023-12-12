/*
Exercise 4.23: The following expression fails to compile due to operator precedence.
Using Table 4.12 (p. 166), explain why it fails. How would you fix it?
string s = "word";
string pl = s + s[s.size() - 1] == ’s’ ? "" : "s" ;
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    string s = "word";
    //Expression was not within a set of (), which is an issue since == has a fairly low precendence
    //string pl = s + s[s.size() - 1] == ’s’ ? "" : "s" ;
    //To fix this, just a single set of () was needed 
    
    string pl = (s + s[s.size() - 1] == "s") ? "" : "s";
    return 0;
}