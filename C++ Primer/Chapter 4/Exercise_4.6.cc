/*
Exercise 4.6: Write an expression to determine whether an int value is even or odd.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

string test(int tst) 
{
    if(tst  % 2 != 0) {
        return " is odd";
    } else {
        return " is even";
    }
}
int main()
{  
    for(int i = 0; i <= 50; i++){
        cout << i << test(i) << endl;
    }
    return 0;
}

