/*
Exercise 5.2: What is a block? When might you might use a block?
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()

{
    int j = 0;
    {
        int i = 1;
        j++;
    } //Block, used to enclose a scope, group multiple statements together
    if(j = 0){
        cout << "j is still 0!" << endl;
    } else {
        cout << "j was not 0!" << endl;
    }
    return 0;
}