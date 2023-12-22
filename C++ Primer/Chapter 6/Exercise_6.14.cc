/*
Exercise 6.14: Give an example of when a parameter should be a reference type. 
Give an example of when a parameter should not be a reference
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

void should(int amountLeft, int payment) {
    amountLeft -= payment;
    cout << "Thank you for making a payment today" << endl;
}

bool shouldNot(int &hours, int wage) {
    bool overtime = false;
    hours = hours - 40; //hours over the full work week (But because it is a reference, we just removed 40 hours from someone's time sheet)

    if(hours > 0) {
        overtime = true;
        int overtimePay = 1.5 * wage * hours; //Pay for the week
        cout << "We see you worked you worked over time this week, good job!" << endl;
    }

    return overtime;
}

int main()
{
    int hours = 60;
    int wages = 23;
    bool overtime = shouldNot(hours, 23);
    cout << "You worked " << hours << " this week. Overtime: " << std::boolalpha << overtime << endl; //This will say you worked 40 less hours

    int payment = 400;
    int amountOwed = 1000;
    should(amountOwed, payment);
    cout << "You now owe " << amountOwed << endl; //This will display the same amount as if no payment had been made
    return 0;
}