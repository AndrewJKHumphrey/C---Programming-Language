/*
Exercise 5.16: The while loop is particularly good at executing while some condition
holds; for example, when we need to read values until end-of-file. The for loop is
generally thought of as a step loop: An index steps through a range of values in a
collection. Write an idiomatic use of each loop and then rewrite each using the other
loop construct. If you could use only one loop, which would you choose? Why?
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    /*
    string input1;
    while(cin >> input1) {
        string reverse = "";
        for(auto end = input1.end(); end >= input1.begin(); --end) {
            reverse += *end;
        }
        cout << reverse << endl;
    }
    */

   //I prefer the for loop since it feels a lot easier to work with, usually self terminates and you can simply update the literator to keep the loop going or end it sooner like a while
    for(string input2; cin >> input2;) {
        string reverse = "";
        auto end = input2.end();
        while(end >= input2.begin()) {
            reverse += *end;
            --end;
        }
        cout << reverse << " ";
    }
    cout << endl;

    return 0;
}