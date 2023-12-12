/*
Exercise 4.24: Our program that distinguished between high pass, pass, and fail 
depended on the fact that the conditional operator is right associative. 
Describe how that operator would be evaluated if the operator were left associative.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{   
    vector<int> grades = {1, 2, 3, 4, 5, 6};
    for(auto grade : grades) {
    string finalgrade = (grade > 90) ? "high pass"
                    : (grade <= 75 && grade >= 60) ? "low pass"
                    : (grade < 60) ? "fail" : "pass";
                    //If ? were to be left associated, then all the expressions and nested conditions would need to be on the left 
                    //This means the bottom/last nested condition would be evaluated first instead
                    //So, would likely need to swap the order around
                    //Would also likely need to use the format
                    //exper2 : exper 1 ? cond instead, which would be super confusing 
                    //To nest, you would still use expr2, that would not change
    }
    return 0;
}