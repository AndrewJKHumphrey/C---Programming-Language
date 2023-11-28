/*
Exercise 3.19: List three ways to define a vector and give it ten elements, each with
the value 42. Indicate whether there is a preferred way to do so and why.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector;

int main()
{
    vector<int> v1 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42}; //This way is very tedious
    
    vector<int> v2(10, 42); //This way is easy to mix up contruction or intialization when making a list of numbers, strings it is more clear
   
    vector<int> v3; //We can also make an empty vector, then push_back the elements into it
    for(int i = 0; i < 10; i++) {
        v3.push_back(42);
    }

    cout << "v1: " << endl;
    for(auto i : v1) {
        cout << i << " ";
    }
    cout << endl;

    cout << "v2: " << endl;
    for(auto i : v2) {
        cout << i << " ";
    }
    cout << endl;

    cout << "v3: " << endl;
    for(auto i : v3) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}