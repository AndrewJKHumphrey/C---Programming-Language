/*
Exercise 3.21: Redo the first exercise from § 3.3.3 (p. 105) using iterators.

Exercise 3.16: Write a program to print the size and contents of the vectors from
exercise 3.13. Check whether your answers to that exercise were correct. If not, restudy
§ 3.3.1 (p. 97) until you understand why you were wrong.

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

    cout << "v1 (Size: " << v1.size() << ")" << endl;
    for(auto i = v1.cbegin(); i != v1.cend(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    cout << "v2 (Size: " << v2.size() << ")" << endl;
    for(auto i = v2.cbegin(); i != v2.cend(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    cout << "v3 (Size: " << v3.size() << ")" << endl;
    for(auto i = v3.cbegin(); i != v3.cend(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    cout << "v4 (Size: " << v4.size() << ")" << endl;
    for(auto i = v4.cbegin(); i != v4.cend(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    cout << "v5 (Size: " << v5.size() << ")" << endl;
    for(auto i = v5.cbegin(); i != v5.cend(); i++) {
        cout << *i << " ";
    }
    cout << endl;
    
    cout << "v6 (Size: " << v6.size() << ")" << endl;
    for(auto i = v6.cbegin(); i != v6.cend(); i++) {
        cout << *i << " ";
    }
    cout << endl;
    
    cout << "v7 (Size: " << v7.size() << ")" << endl;
    for(auto i = v7.cbegin(); i != v7.cend(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}