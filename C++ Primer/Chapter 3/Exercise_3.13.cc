/*
Exercise 3.13: How many elements are there in each of the following vectors? What
are the values of the elements?
(a) vector<int> v1; (b) vector<int> v2(10);
(c) vector<int> v3(10, 42); (d) vector<int> v4{10};
(e) vector<int> v5{10, 42}; (f) vector<string> v6{10};
(g) vector<string> v7{10, "hi"};
*/

#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector;


int main()
{
    vector<int> v1; //no elements
    vector<int> v2(10); //10
    vector<int> v3(10, 42); //10
    vector<int> v4{10}; //1
    vector<int> v5{10, 42}; //2
    vector<string> v6{10}; //10
    vector<string> v7{10, "hi"}; //10

    //This wasn't taught during the section, but I wanted to double check my answers and figured it out
    cout << "v1: " << v1.capacity() << endl;
    cout << "v2: " << v2.capacity() << endl;
    cout << "v3: " << v3.capacity() << endl;
    cout << "v4: " << v4.capacity() << endl;
    cout << "v5: " << v5.capacity() << endl;
    cout << "v6: " << v6.capacity() << endl;
    cout << "v7: " << v7.capacity() << endl;

    return 0;
}