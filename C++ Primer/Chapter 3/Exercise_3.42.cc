/*
Exercise 3.42: Write a program to copy a vector of ints into an array of ints.
*/

#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    int a1[] = {0, 1, 2, 4, 8, 16};
    
    //Array into vector
    vector<int> v1(begin(a1), end(a1));
    auto vb = v1.begin();
    auto ve = v1.end();

    //Vector into Array
    int a2[6];
    auto ab = begin(a2);
    for(auto i = vb; i != ve; i++) {
        *ab = *i;
        ab++;
    }

    //Confirm
    for(auto i : a2) {
        cout << i << endl;
    }
    
    return 0;
}