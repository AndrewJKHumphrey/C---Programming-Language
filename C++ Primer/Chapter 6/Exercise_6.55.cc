/*
Exercise 6.55: Write four functions that add, subtract, multiply, and divide two int
values. Store pointers to these functions in your vector from the previous exercise.
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

int example(int i, int j);

int add(int i, int j) {
    return i + j;
}

int sub(int i, int j) {
    return i - j;
}

int multi(int i, int j) {
    return i * j;
}

int divi(int i, int j) {
    if(j != 0){
        return i / j;
    } else if(i != 0) {
        return j / i;
    } else { 
        return 0;
    }
}

int main()
{
    typedef int (*example)(int, int);
    vector<example> v(4);
    v[0] = &add;
    v[1] = &sub;
    v[2] = &multi;
    v[3] = &divi;

    

    return 0;
}