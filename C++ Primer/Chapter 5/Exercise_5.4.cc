/*
Exercise 5.4: Explain each of the following examples, and correct any problems you
detect.
(a) while (string::iterator iter != s.end()) { }
(b) while (bool status = find(word)) {  }
if (!status) { }
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    string s = "Hello there, world";
    string::iterator iter = s.begin();

    //Declaration must be initalized, however
    //string::iterator iter = s.begin() != s.end() //Did not convert to bool
    while (iter != s.end()) { 
        iter++; //Would continuously loop the same value, since there is no increment
    }
    
    string word = "WORD ";
    int i = 0;
    //Not sure what find used to be, but each time I try to use it and the code compiled, I ran into utility file errors
    //bool status = find(word.begin(), word.end(), word) would not convert
    //bool status = find(word[0], word[-1], word) would convert, compile, but caused even more utility file errors
    //Since I could not get find to work successfully, I used an expression to check if word's current character was not space to drive the while loop
    while (bool status = (word[i] != ' ' && word != "")) {  
        cout << word[i] << endl;
        i++;
        if (!status) { 
            cout << "TEST" << endl; //Tested this, and yes, it does not enter this if statement so, rather useless to include
        } 
        //If statement was outside of scope, also I suspect it would never be entered since the condition was if status were false, which would cease the while loop
    }

    //Alternatively, let's have the status outside of the while, so the if can see it outside of the loop
    bool status = word[i] != ' ' && word != "";
    while (status) {  
        cout << word[i] << endl;
        i++;
    }
    //Still kind of useless since status has to become false in order to exit the while loop, but at least it is entered now
    if (!status) { 
        cout << "TEST" << endl;
    }
    //Could have a second condition to only enter under certain conditions
    if (!status && word == "") { 
        cout << "TEST" << endl;
    }
    return 0;
}