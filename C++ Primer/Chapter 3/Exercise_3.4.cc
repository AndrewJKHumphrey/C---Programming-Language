#include "C:\Projects\Current Projects\C++ Primer Exercises\Chapter 2\Excercise_2.42.h"
#include <iostream> 
#include <string>
using std::cout, std::cin, std::endl, std::string;

int main()
{
    string a, b;
    cin >> a;
    cin >> b;

    cout << "\nComparing a and b (length)" << endl;
    if(a.size() == b.size()) {
        cout << "a and b have the same size" << endl;
    } else {
        cout << "a and b have different sizes" << endl << "\nComparing a and b (longer length)" << endl;
        if(a.size() > b.size()) {
            cout << "a.size is bigger" << endl;
        } else {
            cout << "b.size is bigger" << endl;
        }
    }

    cout << "\nComparing a and b (==)" << endl;
    if(a == b ) {
        cout << "a == b" << endl;
    } else {
        cout << "a != b" << endl << "\nComparing a and b (a > or < b)" << endl;
        if(a > b) {
            cout << "a > b" << endl;
        } else {
            cout << "a < b" << endl;
        }
    }

    return 0;
}