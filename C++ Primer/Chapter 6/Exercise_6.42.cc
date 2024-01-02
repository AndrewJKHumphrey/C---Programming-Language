/*
Exercise 6.42: Give the third parameter of make_plural (§ 6.3.2, p. 224) a default
argument of ’s’. Test your program by printing singular and plural versions of the
words success and failure.

string make_plural(size_t ctr, const string &word,
const string &ending)
{
    return (ctr > 1) ? word + ending : word;
}
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    cout << make_plural(1, "success", "es") <<endl;
    cout << make_plural(2, "success", "es") <<endl;
    cout << make_plural(1, "failure") <<endl;
    cout << make_plural(2, "failure") << endl;

    /*
    success
    successes
    failure
    failures
    */
    return 0;
}