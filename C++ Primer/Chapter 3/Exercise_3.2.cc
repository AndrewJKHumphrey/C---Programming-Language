#include "C:\Projects\Current Projects\C++ Primer Exercises\Chapter 2\Excercise_2.42.h"
#include <iostream> 
#include <string>
using std::cout, std::cin, std::endl, std::string;

int main() 
{
    //Exercise 3.3
    //getLine will obtain all the white space within a line
    //if you type something like 
    //                  TEST        TEST        TEST        TEST
    //It will have all of the white spaces  
    cout << "Line: " << endl;
    string line;
    while(getline(cin, line)) {
        if(!line.empty()) {
            cout << line << endl;
        } else {
            break;
        }
    }


    //Meanwhile, is >> s operators will ignore white spaces
    //If you input 1 1 1 1, the out put will be 1111
    cout << "Word: " << endl;
    string word;
    while(cin >> word) {
        cout << word << endl;
    }

    return 0;
}