/*
Exercise 3.17: Read a sequence of words from cin and store the values a vector. 
After you’ve read all the words, process the vector and change each word to uppercase.
Print the transformed elements, eight words to a line.
*/

#include <cctype>
#include <clocale>
#include <iostream>
#include <vector>
#include <string>
using std::cout, std::cin, std::endl, std::string,  std::vector;

int main()
{

    vector<string> v;
    string s;
    while(cin >> s) {
        v.push_back(s);
    }

    cout << endl;
    cout << "v before: " << endl;
    for(auto i : v) {
        cout << i << " ";
    }
    cout << endl;


    for (string &i : v) {
        for(char &j : i) {
            j = toupper(j);
        }
        
    }

    cout << endl;
    
    cout << "v AFTER: " << endl;
    for(auto i : v) {
        cout << i << " ";
    }
    cout << endl;


    return 0;
}