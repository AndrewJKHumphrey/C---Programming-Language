/*
Exercise 6.32: Indicate whether the following function is legal. If so, explain what it
does; if not, correct any errors and then explain it.
    
    int &get(int *arry, int index) { return arry[index]; }

    int main() {
        int ia[10];
        for (int i = 0; i != 10; ++i)
            get(ia, i) = i;
    }
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

//Legal
//Takes in an pointer to an array along with an index value, then returns the reference expression of that array at that index value, which be an int technically
int & get(int *arry, int index) { 
    return arry[index]; 
}

int main()
{
    int ia[10];
        for (int i = 0; i != 10; ++i)
            ia[i] = i; //Though I think it would be more straightforward to simply use this instead of a function call

    for(auto const elem : ia) {
        cout << elem << endl;
    }

    /*  
    0
    1
    2
    3
    4
    5
    6
    7
    8
    9 
    */
    return 0;
}