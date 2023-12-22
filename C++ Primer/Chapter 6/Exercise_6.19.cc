/*
Exercise 6.19: Given the following declarations, determine which calls are legal and
which are illegal. 
For those that are illegal, explain why.

double calc(double);
int count(const string &, char);
int sum(vector<int>::iterator, vector<int>::iterator, int);
vector<int> vec(10);

(a) calc(23.4, 55.1); (b) count("abcda", ’a’);
(c) calc(66); (d) sum(vec.begin(), vec.end(), 3.8);
*/

#include <iostream>
#include <vector>
#include <string> 
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end, std::runtime_error;

double calc(double);
int count(const string &, char);
int sum(vector<int>::iterator, vector<int>::iterator, int);
vector<int> vec(10);

int main()
{
    //calc(23.4, 55.1); //Incorrect number of arguments
    calc(23.4);

    count("abcda",'a'); //Correct number of arguments, correct types passed
    
    calc(66); //Correct number of arguments, int can be promoted to double implicitly 
    
    sum(vec.begin(), vec.end(), 3.8); //Correct number of arguments, correct types
    
    return 0;
}