/*
Exercise 4.32: Explain the following loop.
constexpr int size = 5;
int ia[size] = {1,2,3,4,5};
for (int *ptr = ia, ix = 0;
ix != size && ptr != ia+size;
++ix, ++ptr) { }
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    constexpr int size = 5; //Set the size of the array
    int ia[size] = {2,4,6,8,10}; //Initialize the array
    //int *ptr = ia, ix = 0; sets *ptr to the first element of ia and sets ix to 0
    //ix != size && ptr != ia+size; As long as ix is not five and ptr is not the null element (last), continue the loop
    //++ix, ++ptr both values are set to increment 

    //cout << "ia+size: " << ia+size << endl; //012FFC4C

    //Just to see if it had an effect, I tried postfixes 
    for (int *ptr = ia, ix = 0; ix != size && ptr != ia+size; ix++, ptr++) {
        cout << "*ptr: | ix: " << *ptr << " | " << ix << endl; //the values of the array | the indexes of those values
    }
    return 0;
}
