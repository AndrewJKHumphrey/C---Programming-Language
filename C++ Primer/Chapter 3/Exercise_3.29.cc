/*
Exercise 3.29: List some of the drawbacks of using an array instead of a vector.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector;

int main()
{
    const char a4[6] = "Daniel"; //Easy to run into issues with fix lengths, like forgetting about the null character
    int a5[2] = {0,1,2};  //Or needing more space than the defined amount

    unsigned buf_size = 1024; //Need to use constant expresssions to define the number of elements
    int ia[buf_size]; 

    int a[] = {0, 1, 2}; //Cannot copy one array into another if needed
    int a2[] = a;
    a2 = a;

    a.pushback(3); //Cannot add items to an existing array
    int a3[] = {0, 1, 2, 3}; //Have to make a new one to accomendate a larger amount of elements

    vector<int> v(10);
    v.size(); //I can obtain the size of the vector fairly easilyf
    a3.size(); //Thi also appears to be not something an array can do easily compared to a vector

 
    return 0;
}