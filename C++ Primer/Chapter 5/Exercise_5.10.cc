/*
Exercise 5.10: There is one problem with our vowel-counting program as we’ve implemented it: It doesn’t count capital letters as vowels. Write a program that counts
both lower- and uppercase letters as the appropriate vowel—that is, your program
should count both ’a’ and ’A’ as part of aCnt, and so forth.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    string input = "";
    int vowelLowerCnt = 0;
    int vowelUpperCnt = 0;
    while(cin >> input) {
        //input = "QAZWSXEDCRFVTGBYHNUJMIKOLP qazwwsxedcrfvtgbyhnujmikolp";
        for(char letter : input) {
            if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
                vowelLowerCnt++;
            }
            if(letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
                vowelUpperCnt++;
            }
        }
    }
    cout << "vowelLowerCnt: " << vowelLowerCnt << endl;
    cout << "vowelUpperCnt: " << vowelUpperCnt << endl;
    return 0;
}