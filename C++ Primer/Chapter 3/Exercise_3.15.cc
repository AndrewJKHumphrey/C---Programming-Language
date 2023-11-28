/* 
Exercise 3.15: Repeat the previous program but read strings this time.
*/

#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector;

int main()
{
    vector<string> v;
    string s;
    while(cin >> s) {
        v.push_back(s);
    }

    for (auto i : v) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}

//Note for some reason, Kaspersky claimed this was a trojan exe, had to add the exe to exceptions to run this