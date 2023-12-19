/*
Exercise 6.2: Indicate which of the following functions are in error and why. Suggest
how you might correct the problems.
(a) int f() {
string s;
// ...
return s;
}
(b) f2(int i) { }
(c) int calc(int v1, int v1) }
(d) double square(double x) return x * x;
*/

#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

int main()
{

    return 0;
}


//a
int fa() {
    //string s;
    //return s; //S is a string and does not match the return type

    int i; //Update the object type to match the return type, in this case int
    return i;
}

string fb() {
    string s;
    return s; //Or update the return type of the function to match, either would work to resolve the error
}

//b 
//no return type nor a return statement
void f2a(int i) { 

} 
//Adding a void would negate the need to add a return statement

int f2b(int i) {
    return i * 2;
} 
//Adding a return type and matching return statement would also work


//c
//Missing the opening bracket {, add it
//Cannot have two parameters with the same name
int calc(int v1, int v2) {

}


//d

//No block whatsoever, add {} with return statement within
double square(double x) {
    return x * x;
}