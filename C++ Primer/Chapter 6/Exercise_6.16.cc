/*
Exercise 6.16: The following function, although legal, is less useful than it might be.
Identify and correct the limitation on this function:

bool is_empty(string& s) { return s.empty(); }
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

//We do not need a reference to the argument, we not update the value either, so remove & and make const
//This will enable us to pass more string values to the function
bool is_empty(const string s) { return s.empty(); }

bool is_bad(string& s) { 
    s = "Function modifed the string, then performed check, leading to misleading results potentially";
    return s.empty(); 
}

int main()
{
    string s1 = "";
    const string s2 = "STILL TESTING";
    string &s3 = s1;
    const string &s4 = s1; 

    cout << "S1: " << std::boolalpha << is_empty(s1) << endl;
    cout << "S2: " << std::boolalpha << is_empty(s2) << endl;
    cout << "S3: " << std::boolalpha << is_empty(s3) << endl;
    cout << "S4: " << std::boolalpha << is_empty(s4) << endl;

    cout << "S1 (bad): " << std::boolalpha << is_bad(s1) << endl;
    //is_bad(s2); //Compile error
    cout << "S3 (bad): " << std::boolalpha << is_bad(s3) << endl;
    //is_bad(s4); //Compile error

    cout << s1 << endl;
    cout << s3 << endl;

    return 0;
}