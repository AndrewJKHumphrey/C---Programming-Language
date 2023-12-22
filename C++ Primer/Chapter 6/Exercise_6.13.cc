/*
Exercise 6.13: Assuming T is the name of a type, explain the difference between a
function declared as void f(T) and void f(T&).
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

void f1(int value) {
    if(value == 10) {
        value = 999; //This only impacts f1's value
    }
    cout << "I have a ton of rupees, I have " << value << " of them!" << endl;
} 

void f2(int& value) {
    cout << "I have a ton of rupees, I have.... only " << value << " of them... darn" << endl;
    value = 111; //This will impact main's value
}

int main()
{
    int value = 10;
    f1(value); //This will display 999
    f2(value); //This will display 10
    f1(value); //This will display 111, not 999 again

    return 0;
}