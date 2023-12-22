/*
Exercise 6.17: Write a function to determine whether a string contains any capital
letters. Write a function to change a string to all lowercase. Do the parameters you
used in these functions have the same type? If so, why? If not, why not?
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

//Used a const string since we are only checking if the string has a capital letter or not, returns true once one is found
bool capitals(const string s) {
    for(auto c : s) {
        if(c == toupper(c)) {
            return true;
        }
    }
    return false;
}

//Used a reference to make the current string lowercase, no need to return anything and you just call the function
void lower(string& s) {
    for(int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
}

//Made an alternate version where the original is preserved in case that is desired, used a const to ensure that string value is not modified during call
string lowerAlternate(const string s) {
    string temp = "";
    for(auto c : s) {
        temp += tolower(c);
    }
    return temp;
}

int main()
{
    string test = "testiNg";
    cout << "Capitals in " << test << ": "<< std::boolalpha << capitals(test) <<endl;
    test = "TESTING";
    lower(test);
    cout << "Lowered test string, result: " << test << endl;
    test = "TESTING";
    string newTest = lowerAlternate(test);
    cout << "String provided to make a new lowercase version: " << test << endl;
    cout << "Resulting string: " << newTest << endl;

    return 0;
}