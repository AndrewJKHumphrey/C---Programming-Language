/*
Exercise 5.3: Use the comma operator (§ 4.10, p. 157) to rewrite the while loop from
§ 1.4.1 (p. 11) so that it no longer requires a block. Explain whether this rewrite improves or diminishes the readability of this code
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{


    int sum = 0, val = 1;
    //This is fairly similar to a for loop in terms of readability, but I found the order had to be just right or unexpected behavior would result
    while (sum += val, ++val, val <= 10) // add 1 to val
        ; //null statement
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

    //Original code, more straight forward, you know the condition right away and what the loop does is within the block
    sum = 0, val = 1;
    // keep executing the while as long as val is less than or equal to 10
    while (val <= 10) {
    sum += val; // assigns sum + val to sum
    ++val; // add 1 to val
    }
    std::cout << "Sum of 1 to 10 inclusive is "
    << sum << std::endl;
    return 0;
}