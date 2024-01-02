/*
Exercise 6.39: Explain the effect of the second declaration in each one of the following
sets of declarations. Indicate which, if any, are illegal.
    (a) int calc(int, int);
        int calc(const int, const int); //
    (b) int get();
        double get();
    (c) int *reset(int *);
        double *reset(double *);
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

int calc(int, int);
int calc(const int, const int); //Changes the type of the parameters to const int from plan int

int get();
double get(); //Illegal since all it changed was the return type


int *reset(int *);
double *reset(double *); //Changes both the return type and parameter type to double


int main()
{

    return 0;
}