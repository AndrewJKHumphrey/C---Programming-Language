#include <iostream>

int main() 
{
    //The following loop accumulates the values of i into sum from -100 to 100, which will result in a value of 0 at the end of the loop
    //This is due to the fact for every negative value, the positive value will later cancel it out
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
    {    
        sum += i;
        //Showing the value of sum during the loop will show that the loop is actually running and sum is changing
        std::cout << "Sum: " << sum << std::endl;
    }

    //The value will be 0 at the end of the this loop, making it look like the loop does nothing
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}