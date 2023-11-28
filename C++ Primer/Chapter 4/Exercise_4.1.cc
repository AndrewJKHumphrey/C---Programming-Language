/*
Exercise 4.1: What is the value returned by 5 + 10 * 20/2?

*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{

    int a = 5;
    int b = 10;
    int c = 20;
    double d = 3;

    double res1 = a + b * c / d; //71.6667

    //using parentheses precendence to determine the behavior of the above result
    double res2 = a + (b * c) / d; //71.6667
    double res3 = a + b * (c / d); //71.6667 //Same precedence as *
    double res4 = (a + b) * c / d; //Incorrect due to lower precedence for addition
    double res5 = a + ((b * c) / d ); //71.6667 Correct precedence and assoication

    //The res6 breaks it down step by step to determine the full order of the expression
    double res6 = b * c; //Higher precedence than + and due to association, higher than the /, since it is on the left
    res6 = res6 / d; //Higher precedence than +
    res6 += a; //Lowest precedence, so this happens last

    cout << "1: " << res1 << endl;
    cout << "2: " << res2 << endl;
    cout << "3: " << res3 << endl;
    cout << "4: " << res4 << endl;
    cout << "5: " << res5 << endl;
    cout << "6: " << res6 << endl;
    
    return 0;
}