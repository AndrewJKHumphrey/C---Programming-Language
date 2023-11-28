/*
Exercise 3.30: Identify the indexing errors in the following code:
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 1; ix <= array_size; ++ix)
        ia[ix] = ix;
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector;

int main()
{
    //The code compiles, but I do notice some odd behaviors
    //This was the result of ix = 1, arrays start with 0. By setting the for loop to go until <= it would go up to the size of the array
    //Which is going to be 10, but the index for the 10th item is 9, not 10
    //The code would run, look like nothing was run, but run into expcetions from trying to index beyond the array
    constexpr size_t array_size = 10; //constant expression, so should be good 
    int ia[array_size]; //Should be an array array_size elements big, with elments filled with 0

    for (size_t ix = 0; ix < array_size; ++ix) { 
        cout << ix << endl;
        ia[ix] = ix;
    }
    return 0;
}
