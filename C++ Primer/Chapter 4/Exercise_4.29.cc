/*
Exercise 4.29: Predict the output of the following code and explain your reasoning.
Now run the program. Is the output what you expected? If not, figure out why.
int x[10]; int *p = x;
cout << sizeof(x)/sizeof(*x) << endl;
cout << sizeof(p)/sizeof(*p) << endl;


int x[10]; array
int *p = x; pointer to the above array
cout << sizeof(x)/sizeof(*x) << endl; taking the size of the arrary, dividing it by the size of an element to get the number of elements vlaue 10
cout << sizeof(p)/sizeof(*p) << endl; taking the size of the pointer, dividing it by the sieze of an elment within X, value 1
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    int x[10]; 
    int *p = x;
    cout << "sizeof(x): " << sizeof(x) << endl;
    cout << "sizeof(*x): " << sizeof*(x) << endl;
    cout << "sizeof(p): " << sizeof(p) << endl;
    cout << "sizeof(*p): " << sizeof(*p) << endl;
    cout << "sizeof(x)/sizeof(*x): " << sizeof(x)/sizeof(*x) << endl;
    cout << "sizeof(p)/sizeof(*p): " << sizeof(p)/sizeof(*p) << endl;
    return 0;
}