/*
Exercise 4.2: Using Table 4.12 (p. 166), parenthesize the following expressions to indicate the order in which the operands are grouped:
(a) * vec.begin() (b) * vec.begin() + 1
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    vector<int> vec = {0, 1, 2, 4, 5};
    auto a = *(vec.begin());
    //These two take precedence and are grouped together
    //L . member selectors object.member
    //L () function call name(expr_list)
    //Then this has precendence
    //R * dereference *expr
    

    auto b = ((*(vec.begin())) + 1);
    //L . member selectors object.member
    //L () function call name(expr_list)

    //R * dereference *expr
    
    //L + add expr + expr 139
    
    return 0;
}