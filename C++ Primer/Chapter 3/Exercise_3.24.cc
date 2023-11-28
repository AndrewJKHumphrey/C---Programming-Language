/*
Exercise 3.24: Redo the last exercise from § 3.3.3 (p. 105) using iterators

Exercise 3.20: Read a set of integers into a vector. Print the sum of each pair of
adjacent elements. Change your program so that it prints the sum of the first and last
elements, followed by the sum of the second and second-to-last, and so on
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector;

int main()
{
    //Note to self, do not use simple numbers to test iterators, since it can be easy to think it is indexing
    vector<int> v{90, 182, 543, 233, 1233, 3404, 134, 5544};
    //Type in a letter to finish inputting values, if you crtl + c to break, it stops the program before it runs the loop
    /*
    while (cin >> i) {
        v.push_back(i);
    }
    */
    auto b = v.cbegin();
    auto e = v.cend();
    int i = -1;
    int k;
    
    //This first one was tricker since you cannot simply +/- 1 to get the next/previous iterator 
    cout << "Add n and n + 1" << endl;
    for(auto j = b; j != e; j++) {
        if(i != -1) {
            cout << k << " + " << *j << ": " << k + *j << endl;
        }
        k = *j;
        i++;
    }


    //However, it made this problem much easier since you can have both end points increment towards the middle
    cout << "\nAdd n and n[-1]" << endl; 
    for(auto j = b; j != e; j++) {
        e--;
        cout << *j << " + " << *e << ": " << *j + *e << endl;
    }

    return 0;
}