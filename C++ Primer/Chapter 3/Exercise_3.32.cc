/*
Exercise 3.32: Copy the array you defined in the previous exercise into another array.
Rewrite your program to use vectors.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector;

int main()
{
    //You cannot copy arrays into other arrays... 
    //int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    //int b[] = a; //Invalid

    vector<int> v(10);
    //Easier to obtain the size of the vector than array, so no need for a second variable for size
    //Could use a variable to intialize the vector, use that value though
    for(int i = 0; i < v.size(); i++) {
        v[i] = i;
    }

    for(auto i : v) {
        cout << i << endl;
    }

    return 0;
}