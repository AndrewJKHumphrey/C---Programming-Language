/*
Exercise 5.12: Modify our vowel-counting program so that it counts the number of
occurrences of the following two-character sequences: ff, fl, and fi.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    char letter;
    char prev = ' ';
    int vowelLowerCnt = 0;
    int vowelUpperCnt = 0;
    int spaceCnt = 0;
    int tabCnt = 0;
    int newlineCnt = 0;
    int ffCnt = 0;
    int flCnt = 0;
    int fiCnt = 0;
    while((cin >> letter) >> std::noskipws) {
        //Can input a string, it will then loop through as individual characters
        //Previous was cin >> input (input was a string), then for looping input
        //This resulted in white space being ignored, tried setting a flag to not ignore white space, but whitespace was still ignored
        //Flag needs to be set still, but when done char by char, it behaves as expected now
        //Just need to ctrl + z, then enter to exit the loop correctly
        
        //Vowel Check
        if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
            ++vowelLowerCnt;
        } else if(letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
            ++vowelUpperCnt;
        }
        
        //Double letter check
        if(prev == 'f' && letter == 'f') {
            ++ffCnt;
        } else if(prev == 'f' && letter == 'l') {
            ++flCnt;
        }else if(prev == 'f' && letter == 'i') {
            ++fiCnt;
        }
        
        //White Space check
        if(letter == '\t') {
            ++tabCnt;
        } else if(letter == '\n') {
            ++newlineCnt;
        } else if(letter == ' ') {
            ++spaceCnt;
        }
        prev = letter;
    }
        cout << "vowelLowerCnt: " << vowelLowerCnt << endl;
        cout << "vowelUpperCnt: " << vowelUpperCnt << endl;
        cout << "spaceCnt: " << spaceCnt << endl;
        cout << "tabCnt: " << tabCnt << endl;
        cout << "newlineCnt: " << newlineCnt << endl;
        cout << "ffCnt: " << ffCnt << endl;
        cout << "flCnt: " << flCnt << endl;
        cout << "fiCnt: " << fiCnt << endl;
    
    return 0;
}