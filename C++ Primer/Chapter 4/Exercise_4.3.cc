/*
Exercise 4.3: Order of evaluation for most of the binary operators is left undefined
to give the compiler opportunities for optimization. This strategy presents a trade-off
between efficient code generation and potential pitfalls in the use of the language by
the programmer. Do you consider that an acceptable trade-off? Why or why not?
*/

#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{  
    //Yes, if a programmer is skilled and is able to make use of this behavior. 

    //No, if a programmer is less skilled as they may fall into the potential pitfalls. 

    //I think having a language that is more consistent is better for say a corporate team, which many languages are in use by today
    //This however, it holds back more skilled individuals who may be working on their own code bases/running their own business
    //I personally prefer the challenge of learning how a language works and being able to optimize to the best of my ability
    //It does create some headaches for me since you will run into team members who cut corners or fall into those pitfalls
    //Or I find myself falling into a pitfall at some point
    return 0;
}