/*
Exercise 4.16: Although the following are legal, they probably do not behave as the
programmer expects. Why? Rewrite the expressions as you think they should be.
(a) if (p = getPtr() != 0) (b) if (i = 1024)
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;


int getPtr() 
{
    return 1;
}

int main()

{
    int p, i;

    if ((p = getPtr()) != 0) {
        cout << "I work now " << endl;
    }

    i = 1024;
    if (i == 1024) {
        cout << "I work now too" << endl;
    }
    return 0;
}



