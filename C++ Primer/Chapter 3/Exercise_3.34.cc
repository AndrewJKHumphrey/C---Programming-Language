/*
Exercise 3.34: Given that p1 and p2 point to elements in the same array, what does
the following code do? Are there values of p1 or p2 that make this code illegal?
p1 += p2 - p1;
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector;

int main()
{
    int a[10] = {888, 9912, 123, 333, 1111, 222, 3312, 543, 1333, 8999};
    int *p1 = &a[0];
    int *p2 = &a[111];

    cout << "*p1: " << *p1 << endl;
    cout << "*p2: " << *p2 << endl;

    cout << p1 - p2 << endl;
    p1 += p2 - p1;

    cout << "*p1 (After): " << *p1 << endl; 
    //For some reason, the result of this is always the value of p2
    //Not what I was expecting
    //Another thing that seems odd is I can use any value for the [x] in the pointer intialization
    //May need to look into this since I am not 100% confident on this 
    return 0;
}