/*
Exercise 4.33: Using Table 4.12 (p. 166) explain what the following expression does:
someValue ? ++x, ++y : --x, --y
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    //use values aside from 1 and 0 to avoid mixing up bool results 
    int x = 32;
    int y = 12;
    int someValue = 0; //This is fine to be 0 or 1 though

    //Precedence order ++, --, ?:, ',' 
    //condition ? if : else
    //someValue is tested if it is nonzero or not, if nonzero it increments x, then y 
    //cout prints y since x is discarded due to the , 
    //If someValue is zero, it will decrement x then y

    //cout << someValue ? ++x, ++y : --x, --y << endl; //This errors due 'cannot determine which instance of function template "std::endl" is intended'
    someValue ? ++x, ++y : --x, --y;
    cout << "x | y: " << x << " | " << y << endl;
    
    x = 32;
    y = 12;
    //Testing to see if () have any effect or not
    cout << (someValue ? ++x, ++y : --x, --y) << endl; 
    cout << "x | y: " << x << " | " << y << endl;
    
    x = 32;
    y = 12;
    cout << ((someValue) ? (++x, ++y) : (--x, --y)) << endl; 
    cout << "x | y: " << x << " | " << y << endl; 


    /*
        Each statement printed the same values, which tells me () were not needed to help avoid precedence issues
        The ? : happens first since the other operators are within the conditional
        Once a condition is met, it will then do the first ++ on the left side of the , 
        Discard the left side of the , and then evlauate the right side, then return the right side
        x | y: 31 | 11
        11
        x | y: 31 | 11
        11
        x | y: 31 | 11
    */
    return 0;
}