/*
Exercise 4.21: Write a program to use a conditional operator to find the elements in a
vector<int> that have odd value and double the value of each such element.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Before: " << endl;
    for(auto i : v){
        cout << i << endl;
    }

    for(auto i : v){
        v[i] = (i % 2 != 0) ? i * 2 : i; 
    }

    cout << "\nAfter: " << endl;
    for(auto i : v){
        cout << i << endl;
    }
    /*
    Before: 
    0
    1
    2
    3
    4
    5
    6
    7
    8
    9

    After: 
    0
    2
    2
    6
    4
    10
    6
    14
    8
    18
    */
    return 0;
}