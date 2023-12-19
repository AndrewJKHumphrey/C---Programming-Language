/*
Exercise 6.4: Write a function that interacts with the user, asking for a number and
generating the factorial of that number. Call this function from main.
*/

#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;


int fact()
{   
    cout << "Please enter a number: " << endl;
    int value;
    cin >> value;
    for(int i = value - 1; i > 1; --i) {
        value *= i;
    }
    return value;
}

int main()
{
    int result = fact();
    cout << "10!: " << result << endl;
    return 0;
}