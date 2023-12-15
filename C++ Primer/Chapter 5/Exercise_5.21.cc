/*
Exercise 5.21: Revise the program from the exercise in § 5.5.1 (p. 191) so that it looks
only for duplicated words that start with an uppercase letter.
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
        //If no previous word, then set prevWord and move on
        //No need to even check for matches at that point
        if(prevWord == "") {
            prevWord = input;
            continue;
        }

        //Check if prevWord matches the current word
        //Ensure prevWord started with an uppercase
        //If both words match, we can infer input also starts with the same case as prevWord, no need to check it as well
        //If not, set prevWord and move on
        if(prevWord == input && prevWord[0] == toupper(prevWord[0])){
            exit = "\"" + prevWord + "\" being repeated twice";
            break;
        } else {
            prevWord = input;
            continue;
        }

        //Anything below this point will not execute due to above continues
    }
    cout << "The program exited due to " << exit << endl;
    return 0;
}

