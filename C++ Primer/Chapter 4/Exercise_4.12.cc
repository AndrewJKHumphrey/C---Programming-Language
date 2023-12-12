/*
Exercise 4.12: Assuming i, j, and k are all ints, explain what i != j < k means.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{   
    int i = 10;
    int j = 10;
    int k = 1;

    //This appears to be if i does not equal j, j > k
    //But I have my doubts since the statement is not i != j && j < k

    //It will likely do i != j first, which will be 1 or 0
    //Then it will check if k < 1 or 0
    
    //To test this, I set both i and j to 10, which will return 1 for != 

    if(i != j) {
        cout << "i != j ";
    } else {
        cout << "i == j ";
    }
    cout << " and ";
    if(j < k) {
        cout << "j < k" << endl;
    } else {
        cout << "j > k" << endl;
    }

    if(i != j < k) {
        cout << "But this will evaluate to true since it is i != j -> 0, which 0 is less than k" << endl;
    }

    return 0;
}