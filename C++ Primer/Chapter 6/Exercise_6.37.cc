/*
Exercise 6.37: Write three additional declarations for the function in the previous exercise. 
One should use a type alias, one should use a trailing return, and the third should use decltype. 

Which form do you prefer and why?
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

string arr[10]; //Placed these here since they would be temp values within the function, but the function takes a string value not an array
string (*p2)[10] = &arr; // Wish book had more detailed examples of function code, not sure if this how declarations need to be handled
//Type (*function(parameter_list))[dimension]
string (*hardWay(string)) [10] {
    return p2;
} 

//Type Alias
typedef string aliasArr[10]; 
//using aliasArr = string[10]; This would work as well
aliasArr* typeAlias(string i);

//decltype method
string cold[] = {"snow", "ice", "sleet"};
string hot[] = {"sand", "desert", "sandstorm"};
decltype(cold) *deType(string s)
{
    return  s == *(&cold[1]) ? &cold : &hot; 
}

//Trailing Return
auto trailReturn(string s) -> string(*)[10];

int main()
{
    string arr[10];
    auto hdarr = hardWay("test");
    auto taarr = typeAlias("test");
    auto dtarr = deType("test");
    auto hdarr = trailReturn("test");
    return 0;
}