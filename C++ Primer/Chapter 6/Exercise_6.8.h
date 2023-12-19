/*
Exercise 6.8: Write a header file named Chapter6.h that contains declarations for
the functions you wrote for the exercises in § 6.1 (p. 205).
*/

#ifndef CHAPTER6
#define CHAPTER6

#include <iostream>
#include <vector>
#include <string>
#include "C:\Projects\Current Projects\C++ Programming Language\C++ Primer\Chapter 6\Exercise_6.7.cc"
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

int section6_1(int parameter) {
    cout << "We passed an argument to this function, to be used as a parameter within the function: " << parameter << endl;
    return parameter * 2;
}

int fact(int value)
{   
    for(int i = value - 1; i > 1; --i) {
        value *= i;
    }
    return value;
}

int AbsoluteValue(int value) {
    if(value < 0) {
        value = (value - value) - value; //-A - -A becomes -A + A = 0, 0 - -A becomes 0 + A, resulting in A 
    } //No need for an else since anything 0+ is already absolute
    return value;
}

string LocalVsStatic(int parameter) {
    static int staticCall = 1;
    static string statLocal;
    
    for(; parameter > 0; --parameter) {
        statLocal += "Example\n";
    }
    statLocal += "-----------\n";

    cout << "Call: " << staticCall++ << endl;
    cout << "-----------" << endl; 
    parameter++; //It does not matter how we change parameters, the local variables that initalized them are not impacted
    return statLocal;
}

int functionCallNumber() {
}
#endif