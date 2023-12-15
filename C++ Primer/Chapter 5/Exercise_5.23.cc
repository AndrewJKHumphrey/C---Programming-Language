/*
Exercise 5.23: Write a program that reads two integers from the standard input and
prints the result of dividing the first number by the second
*/

#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    double input1;
    double input2;
    cout << "Enter two numbers: " << endl;
    while(cin >> input1 >> input2) {
        double result = input2 / input1; //Left open to divide by zero since the next exercise is meant to add code to handle that
        cout << "Input 2 / Input 1 = " << result << endl;
        cout << "Enter two numbers: " << endl;
    } 
    return 0;
}