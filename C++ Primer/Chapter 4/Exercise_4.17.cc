/*
Exercise 4.17: Explain the difference between prefix and postfix increment
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    int k, l;
    int i, j;
    k = l = 0;
    i = j = 0;
    l = ++i; //This will increment the value, then return said increment value
    k = j++; //This will return the unincremented value, then increment the value

    cout << "i: " << i << endl; //1 as we would expect, prefix was used so l will be 1 as well
    cout << "j: " << j << endl; //Also 1 as we would expect, but we used postfix and this leads k to be 0 instead
    cout << "l: " << l << endl; //1
    cout << "k: " << k << endl; //0
    cout << endl;

    /*
    i: 1
    j: 1
    l: 1
    k: 0
    */

   //The book said the following code would error, but it compiled... so let's see what it does now
    string s = "TESTING";
    auto beg = s.begin();
    auto end = s.end();
    while (beg != s.end() && !isspace(*beg)) {
        *beg = toupper(*beg++); //no longer undefined behavior, but it only did the first element multiple times
        //*beg = toupper(*(beg++)); //Same results
        cout << "beg: " << *beg << endl;
        cout << "end: " << *end << endl; //On last increment, this became T. This tells me that T overwrote the end of the string at the end
    }
    cout << s << endl; //TTTTTTTd

    //Let's try that again
    s = "TESTING";
    beg = s.begin();
    end = s.end();

    //This also compiled without issue, it also works as expected 
    
    while (beg != s.end() && !isspace(*beg)) {
        *beg = toupper(*++beg);
        cout << "beg: " << *beg << endl;
        cout << "end: " << *end << endl;
    }

    cout << s << endl; //TESTING 

    return 0;
}