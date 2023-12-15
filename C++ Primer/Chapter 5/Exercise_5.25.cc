/*
Exercise 5.25: Revise your program from the previous exercise to use a try block to
catch the exception. The catch clause should print a message to the user and ask
them to supply a new number and repeat the code inside the try.
*/

#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

int main()
{
        double input1;
    double input2;
    cout << "Enter two numbers: " << endl;
    while(cin >> input1 >> input2) {
        try {
            if(input1 != 0){
                double result = input2 / input1;
                cout << "Input 2 / Input 1 = " << result << endl;
            } else {
                throw runtime_error("Input 1 was 0 and dividing by 0 is not allowed");
            }
        } catch (runtime_error err) {
            cout << err.what() << endl;
            cout << "Enter new inputs? (y/n)" <<endl;
            char c;
            cin >> c;
            if(!cin || c == 'n') {
                break;
            }
        }
        cout << "Enter two numbers: " << endl; 
    }
    return 0;
}