/*
Exercise 4.18: What would happen if the while loop on page 148 that prints the elements from a vector used the prefix increment operator?
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 10, -1};
    auto pbeg = v.begin();
    // print elements up to the first negative value
    while (pbeg != v.end() && *pbeg >= 0) { 
        cout << *++pbeg << endl; //This results in printing the next element, not the current element
    return 0;

    /*
    2
3
4
5
6
7
10
-1
*/
}