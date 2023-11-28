#include <iostream>

int main()
{
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i) {
        sum += i;
    }
    std::cout << i << " " << sum << std::endl; 
    //This will use the i that was not defined within the for scope, so it will print i = 100
    //But will print sum after it has been updated to 45 since sum was not defined within the for scope
    
    return 0;
}