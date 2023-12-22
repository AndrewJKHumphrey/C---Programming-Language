/*
Exercise 6.33: Write a recursive function to print the contents of a vector.
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

void printVector(vector<string> v) {
    static int index = 0;
    if(index < v.size()) {
        cout << v[index++] << " ";
        return printVector(v);
    }
    cout << endl;
}


int main()
{   
    vector<string> v = {"Hello", "World,", "how", "are", "you?"};
    printVector(v);
    return 0;
}