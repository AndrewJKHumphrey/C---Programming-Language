/*
Exercise 3.28: What are the values in the following arrays?
    string sa[10];
    int ia[10];
    int main() 
    {
        string sa2[10];
        int ia2[10];
    }
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector;

string sa[10];
int ia[10]; 

int main() 
{
    string tst[] = {"TESTING", "TESTING", "TESTING"};
    string sa2[10];
    int ia2[10]; 

    cout << "tst: " << endl;
    for(auto i : tst) {
        cout << "Item: " << i << endl;
    }
    cout << "\nsa: " << endl; //Should be ten empty strings
    for(auto i : sa) {
        cout << "Item: " << i << endl;
    }
    cout << "\nia: " << endl; //Should be ten default ints
    for(auto i : ia) {
        cout << "Item: " << i << endl;
    }
    cout << "\nsa2: " << endl; //Should be ten emptry strings
    for(auto i : sa2) {
        cout << "Item: " << i << endl;
    }
    cout << "\nia2: " << endl; //Should be ten default ints
    for(auto i : ia2) {
        cout << "Item: " << i << endl;
    }
    

    //ia is made up of ten elements with 0
    //ia2 is made up of ten elements of default ints, which range in value, need to review to see why that
    //This section didn't go into how to access the array elements, so not sure if that was the point of the exercise

    /*
    ia2
    Item: 13629116
    Item: 13629168
    Item: 13629320
    Item: 1211232
    Item: 1319871481
    Item: -2
    Item: 13629200
    Item: 1468958
    Item: 13629188
    Item: 13629180 
    */


    return 0;
}