/*
Exercise 6.31: When is it valid to return a reference? A reference to const?
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

//When we want to use the return value as a lvalue like the example from the book below
/* 
char &get_val(string &str, string::size_type ix)
{
    return str[ix]; // get_val assumes the given index is valid
} 
*/

//It is best to use const whenever possible and since we are not changing the values in the is example, we should do that
const char &get_val(const string &str, const string::size_type ix)
{
    return str[ix]; // get_val assumes the given index is valid
}

int main()
{
    string s = "a value";
    cout << s << endl; // prints a value

    //But there is an issue with that... the above function compiles just fine
    //but we cannot use const since a reference being used as a lhand value must be modifiable
    get_val(s, 0) = 'A'; // changes s[0] to A
    cout << s << endl; // prints A value
    return 0;
}