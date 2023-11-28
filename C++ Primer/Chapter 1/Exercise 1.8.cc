#include <iostream>

int main()
{
    std::cout << "/*"; //Start of a comment in a string: Legal
    std::cout << "*/"; //End of a comment in a string: Legal
    std::cout << /* "*/" */; //Having the start outside of the string and end inside of a string: Not legal
    std::cout << /* "*/" /* "/*" */; //Same situation above, also Not Legal
    return 0;
}