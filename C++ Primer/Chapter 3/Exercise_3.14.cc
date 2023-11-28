/* 
Exercise 3.14: Write a program to read a sequence of ints from cin and store those values in a vector.
*/

#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector;

int main()
{
    vector<int> v;
    int i;
    while(cin >> i) {
        v.push_back(i);
    }

    
    for (auto i : v) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}