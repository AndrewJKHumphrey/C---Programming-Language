/*
Exercise 4.8: Explain when operands are evaluated in the logical AND, logical OR, and
equality operators.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{   
    int a = 1;
    int b = 2;
    cout << "a = " << a << endl;
    cout << "Condition is = " << b << endl;
    //AND && elvaluates the left first, then if the left expression is true
    //it will then evaluate the right expression
    //both sides must be true to pass the && operand
    if(true && a == b) {
        cout << "Test &&" << endl;
    }

    //While the OR || evaluates the left first like AND does
    //OR will only evlaute the right expression if the left is false
    //At least one side must be true to pass the || operand
    if(false || a == b) {
        cout << "Test ||" << endl;
    }


    //There is only one condition to test in this case
    //It checks if a is a nonzero value or not
    if(a) {
        cout << "Test Nonzero" << endl;
    }

    //There is only one condition to test in this case
    //It checks if a is a zero value or not
    if(!a) {
        cout << "Test Zero" << endl;
    }

    //Appears as it if tests if a is non-zero, but true has a value of 1
    //This is a result of mixing types int and bool
    if(a == true) {
        cout << "Test ==" << endl; //This will succeed if a = 1;
    }
    a++;
    if(a == true) {
        cout << "Test == again" << endl; //This will fail once we add 1 to a = 1;
    }

    //To avoid this, better to be concise
    if(a == b) {
        cout << "Test == " << b << endl;
    }




    return 0;
}