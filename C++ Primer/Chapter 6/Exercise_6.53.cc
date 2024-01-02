/*
Exercise 6.53: Explain the effect of the second declaration in each one of the following
sets of declarations. Indicate which, if any, are illegal.
(a) int calc(int&, int&);
    int calc(const int&, const int&);
(b) int calc(char*, char*);
    int calc(const char*, const char*);
(c) int calc(char*, char*);
    int calc(char* const, char* const);
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

int calc(int&, int&) {return 1;} 
int calc(const int&, const int&) {return 2;} //const version of calc(int&, int&)

int calc(char*, char*) {return 3;}
int calc(const char*, const char*) {return 4;} //low level const version of calc(char*, char*)

//int calc(char* const, char* const){return 2;} //This at a glance appears to be a const version, but in reality the top level const are ignored

int main()
{
    int i = 1; int j = 3;
    cout << calc(i, j) << endl;
    const int k = i; const int l = j;
    cout << calc(k, l) << endl;

    char test = 'A';
    char* test1 = &test;
    char* const test2 = &test;
    const char* test3 = &test;
    
    cout << calc(test2, test1) << endl;
    cout << calc(test2, test3) << endl;
    return 0;
}