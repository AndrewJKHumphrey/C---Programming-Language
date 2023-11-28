/*
Exercise 3.20: Read a set of integers into a vector. 
Print the sum of each pair of adjacent elements. 
Change your program so that it prints the sum of the first and last
elements, followed by the sum of the second and second-to-last, and so on
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector;

int main()
{
    int i;
    vector<int> v;
    //Type in a letter to finish inputting values, if you crtl + c to break, it stops the program before it runs the loop
    while (cin >> i) {
        v.push_back(i);
    }

    cout << "Add n and n + 1" << endl;

    for(int j = 1; j < v.size(); j++) {
        cout << v[j - 1] << " + " << v[j] << ": " << v[j-1] + v[j] << endl;
    }

    cout << "Add n and n[-1]" << endl; 

    for(int j = 1; j <= v.size(); j++) {
        cout << v[j - 1] << " + " << v[v.size() - j] << ": " << v[j-1] + v[v.size() - j] << endl;
    }

    return 0;
}