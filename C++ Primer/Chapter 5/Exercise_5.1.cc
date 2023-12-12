/*
Exercise 5.1: What is a null statement? When might you use a null statement?
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    //May need to run a loop but no work is needed within the loop, perhaps to have a delay in the program
    cout << "I have a surprise for you... " << endl;
    for(int i = 0; i < 2999999999; i++) {
        ; //null statement
    }
    cout << "it's a PUPPY!" << endl;
    return 0;
}