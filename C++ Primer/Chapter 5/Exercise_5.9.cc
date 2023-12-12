/*
Exercise 5.9: Write a program using a series of if statements to count the number of
vowels in text read from cin.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    string input = "";
    int vowelCnt = 0;
    while(cin >> input) {
        //input = "QAZWSXEDCRFVTGBYHNUJMIKOLP";
        for(char letter : input) {
            if(std::tolower(letter) == 'a' || std::tolower(letter) == 'e' || std::tolower(letter) == 'i' || std::tolower(letter) == 'o' || std::tolower(letter) == 'u') {
                vowelCnt++;
            }
        }
    }
    cout << vowelCnt << endl;
    return 0;
}