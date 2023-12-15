/*
Exercise 5.20: Write a program to read a sequence of strings from the standard input
until either the same word occurs twice in succession or all the words have been read.
Use a while loop to read the text one word at a time. Use the break statement to
terminate the loop if a word occurs twice in succession. Print the word if it occurs
twice in succession, or else print a message saying that no word was repeated.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    string exit = "reading all input words";
    string prevWord = "";
    string input;
    while(cin >> input) {
        if(prevWord == "") {
            prevWord = input;
        } else {
            if(prevWord == input) {
                exit = "\"" + prevWord + "\" being repeated twice";
                break;
            }
        }
        prevWord = input;
    }
    cout << "The program exited due to " << exit << endl;
    return 0;
}