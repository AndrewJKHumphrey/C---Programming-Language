/*
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;


// calculate val!, which is 1 * 2 * 3 ... * val
int factorial(int val)
{
    if (val > 1)
        //This would return val, then decrement val, which would then impact the second val's value
        //Well, would if we didn't run into a stack overflow issue first 
        //return factorial(val--) * val; //Val is returned, which then calls factorial(val) repeatedly instead of factorial(val - 1) 
        //return factorial(--val) * val; //This circumvents the stack overflow, but as I predicted, it doesn't times by val = 10; result was 362880
        //return factorial(--val) * (val + 1); //You would need to make up for the decrement by adding 1 if you wanted to use --val instead of val - 1
        return factorial(val - 1) * val; //Instead of decrementing AND doing an addition problem, you could do 1 subtraction problem
    return 1;
}

int main()
{
    cout << factorial(10) << endl; //Should be 3628800
    return 0;
}