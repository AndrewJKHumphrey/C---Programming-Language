/*
Exercise 5.18: Explain each of the following loops. Correct any problems you detect.
(a) do
        int v1, v2;
        cout << "Please enter two numbers to sum:" ;
        if (cin >> v1 >> v2)
            cout << "Sum is: " << v1 + v2 << endl;
    while (cin);
(b) do {
    // ...
    } while (int ival = get_response());
(c) do {
        int ival = get_response();
    } while (ival);
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{   
    //Takes in two values, then returns the sum until user exits the loop/closes program
    do { //Missing block statements
        int v1, v2;
        cout << "Please enter two numbers to sum:" ;
        if (cin >> v1 >> v2)
            cout << "Sum is: " << v1 + v2 << endl;
    } while (cin);

    int ival1; //Need to declare here so both the loop and condition can see it
    do {
        ival1 = get_response() //Needs to be here since the do happens once
    } while (ival1);

    int ival2;
    do {
        int ival2 = get_response();
    } while (ival2);
    return 0;
}