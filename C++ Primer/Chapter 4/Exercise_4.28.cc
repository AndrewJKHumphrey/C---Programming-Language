/*
Exercise 4.28: Write a program to print the size of each of the built-in types.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    //cout << "void: " << sizeof(void) << " byte(s)" << endl;
    cout << "bool: " << sizeof(bool) <<" byte(s)" << endl;
    cout << "char: " << sizeof(char) << " byte(s)" << endl;
    cout << "unsigned char: " << sizeof(unsigned char) << " byte(s)" << endl;
    cout << "signed char: " << sizeof(signed char) << " byte(s)" << endl;
    cout << "int: " << sizeof(int) << " byte(s)" << endl;
    cout << "float: " << sizeof(float) << " byte(s)" << endl;
    cout << "double: " << sizeof(double) << " byte(s)" << endl;
    cout << "long: " << sizeof(long) << " byte(s)" << endl;
    cout << "long long: " << sizeof(long long) << " byte(s)" << endl;
    cout << "short:  " << sizeof(short) << " byte(s)" << endl;
    cout << "unsigned short:  " << sizeof(unsigned short) << " byte(s)" << endl;
    cout << "wchar_t:  " << sizeof(wchar_t) << " byte(s)" << endl;
    cout << "int:  " << sizeof(int) << " byte(s)" << endl;
    cout << "unsigned int:  " << sizeof(int) << " byte(s)" << endl;
    cout << "unsigned long:  " << sizeof(int) << " byte(s)" << endl;
    cout << "unsigned long long:  " << sizeof(int) << " byte(s)" << endl;

    return 0;
}