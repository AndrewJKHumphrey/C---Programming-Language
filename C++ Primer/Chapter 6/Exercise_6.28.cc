/*
Exercise 6.28: In the second version of error_msg that has an ErrCode parameter,
what is the type of elem in the for loop?
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

struct ErrCode {
    string msg();
};

void error_msg(ErrCode e, std::initializer_list<string> il)
{
    cout << e.msg() << ": ";
    for (const auto &elem : il) //const std::string& is the type of elem 
    cout << elem << " " ;
    cout << endl;
}

int main()
{

    return 0;
}