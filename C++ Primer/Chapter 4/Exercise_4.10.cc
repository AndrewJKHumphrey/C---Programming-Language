/*
Exercise 4.10: Write the condition for a while loop that would read ints from the
standard input and stop when the value read is equal to 42.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{   
    int i;
    while( cin >>  i && i != 42) {
        cout << "Keep going" << endl;
    }
    cout << "That's the answer" << endl;