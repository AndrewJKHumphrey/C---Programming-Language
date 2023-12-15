/*
Exercise 5.19: Write a program that uses a do while loop to repetitively request two
strings from the user and report which string is less than the other.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    string input1;
    string input2;
    do {
        cout << "Enter two words: " << endl;
        if(input1 < input2){
            cout << "The first word entered was the lesser of the two" << endl;
        } else {
            cout << "The second word entered was the lesser of the two" << endl;
        }
        
    } while(cin >> input1 >> input2);

    return 0;
}