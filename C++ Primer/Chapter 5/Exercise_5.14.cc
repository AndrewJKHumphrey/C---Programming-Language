/*
Exercise 5.14: Write a program to read strings from standard input looking for duplicated words. 
The program should find places in the input where one word is followed immediately by itself. 

Keep track of the largest number of times a single repetition occurs and which word is repeated. 
Print the maximum number of duplicates, or
else print a message saying that no word was repeated. For example, if the input is
    how now now now brown cow cow
the output should indicate that the word now occurred three times.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    string input;
    vector<string> words;
    while(cin >> input) {
        words.push_back(input);
    }

    string prevWord = "";
    int count = 1;
    int countHighest = 0;
    string wordHighest = "";
    for(string currentWord : words) {
        if(prevWord != "") {
            if(currentWord == prevWord) {
                ++count;
            } else {
                if(count > countHighest) {
                    countHighest = count;
                    wordHighest = prevWord;
                }
                count = 1;
            }
        }
        prevWord = currentWord;
    }

    if(countHighest > 1) {
        cout << "The word: \"" << wordHighest << "\" had the highest count with " << countHighest << " times repeated" << endl;
    } else {
        cout << "No words repeated in the input, so they all have a count of 1";
    }

    return 0;
}