/*
Exercise 6.27: Write a function that takes an initializer_list<int> and produces the sum of the elements in the list.
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

void sumIntList(std::initializer_list<int> list) {
    int result = 0;
    for(const auto elem : list) {
        result += elem;
    }
    cout << result << endl;
}

int main()
{
    sumIntList({1, 2, 3, 4, 5, 9, 10, 11, 12, 13, 443, 1000});
    sumIntList({9, 10, 11, 12, 13, 443, 1000});
    sumIntList({11, 443, 500});
    return 0;
}