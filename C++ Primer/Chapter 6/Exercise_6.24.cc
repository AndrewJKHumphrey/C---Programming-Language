/*
Exercise 6.24: Explain the behavior of the following function. If there are problems in
the code, explain what they are and how you might fix them.
    void print(const int ia[10]) //This takes in an array, expected size of ten
    {
        for (size_t i = 0; i != 10; ++i) //This will then loop for a fixed amount, in this case ten
            cout << ia[i] << endl; //Then print out the value at the index of i
    }
    //This is an issue since an array could be smaller or larger than ten
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

//Function will only work if array is a size of ten
//Can easily make it more flexible
//I used the pass the array and size method last time, so this time using iters and while
void print(const int *beg, const int *end)
{
    while(beg != end)
        cout << *beg++ << endl; //Postscript to return current value then increment
}

int main()
{
    int i[8] {1, 2, 3, 4, 5, 6, 7, 8};

    auto beg = begin(i);
    auto ed = end(i);
    print(beg, ed);
    
    //print(i); //This will behave oddly since ten is baked into the function
    /*  
    1
    2
    3
    4
    5
    6
    7
    8
    9
    -718639272
    13631140
    */
    return 0;
}