/*
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

int TestFunction(string status)
{
    int error;
    try {
        cout << "If you are reading this, then the function was a " << status << endl;
        error = 0;
    } catch(runtime_error ex) {
        cout << "An error happened and it is all your fault, way to go " << ex.what() << endl;
        error = -1;
    }
    return error;
}