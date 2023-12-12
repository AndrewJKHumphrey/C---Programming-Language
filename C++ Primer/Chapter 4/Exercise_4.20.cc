/*
Exercise 4.20: Assuming that iter is a vector<string>::iterator, indicate
which, if any, of the following expressions are legal. Explain the behavior of the legal expressions and why those that aren’t legal are in error.
(a) *iter++; (b) (*iter)++; (c) *iter.empty()
(d) iter->empty(); (e) ++*iter; (f) iter++->empty();
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{   
    string test = "test";

    vector<string> v = {"", "one", "two", "three"};
    auto iter = v.begin();

    auto test2 = *iter++; //Legal, returns current element, then increments iter
    cout << test2 << endl; //Testing

    
    //(*iter)++; //Since (*iter) returns a string value, the increment fails since test++ also does not work

    
    cout << (*iter).empty() << endl; //This appears to be legal, it is checking if the element string is empty or not

    
    cout << iter->empty() << endl; //This is also legal, since it equal to the above statment
    
    
    //++*iter; //This is not legal, the incedence of a prefix is higher than the pointer unlike postfix, this means it is trying to increment a string ++test also fails
    
    cout << iter++->empty() << endl; //This is equal to (*iter++).empty(); Returns the current element, then increments iter, the current element is check if empty
    
    
    return 0;
}