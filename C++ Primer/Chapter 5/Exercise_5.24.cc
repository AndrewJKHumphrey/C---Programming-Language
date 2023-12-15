/*
Exercise 5.24: Revise your program to throw an exception if the second number is
zero. Test your program with a zero input to see what happens on your system if you
don’t catch an exception.
*/

#include <iostream>
#include <vector>
#include <stdexcept>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

int main()
{
    double input1;
    double input2;
    cout << "Enter two numbers: " << endl;
    while(cin >> input1 >> input2) {
        if(input1 != 0){
            double result = input2 / input1;
            cout << "Input 2 / Input 1 = " << result << endl;
        } else {
            //Exercise wanted to throw without catching, which drops the ball so to speak
            throw runtime_error("Input 1 was 0 and dividing by 0 is not allowed");
        }
        cout << "Enter two numbers: " << endl; 
    }
    return 0;
}