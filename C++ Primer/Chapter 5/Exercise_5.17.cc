/*
Exercise 5.17: Given two vectors of ints, write a program to determine whether
one vector is a prefix of the other. For vectors of unequal length, compare the number of elements of the smaller vector. 
For example, given the vectors containing 
0, 1, 1, and 2 and 0, 1, 1, 2, 3, 5, 8, respectively your program should return true
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector, std::begin, std::end;

int main()
{
    vector<int> ivect1 ={0, 1, 1, 3, 1, 1, 3, 1, 1, 3, 1, 1, 3, 1, 1, 3, 1, 1, 3, 1, 1, 3};
    vector<int> ivect2 ={0, 1, 1, 3, 1, 1, 3, 1, 1, 3, 1, 1, 3, 1, 1, 3, 1, 1, 3, 1, 1, 3, 0, 1, 1, 3, 1, 1, 3, 1, 1, 3, 1, 1, 3, 1, 1, 3, 1, 1, 3, 1, 1, 3};

    int size1 = ivect1.size();
    int size2 = ivect2.size();

    bool result = true;
    if(size1 > size2) {
        for(int i = 0; i <= size2; ++i) {
            if(ivect1[i] != ivect2[i]) {
                result = false;
                break;
            }
        }
    } else {
        for(int i = 0; i < size1; ++i) {
            if(ivect1[i] != ivect2[i]) {
                result = false;
                break;
            }
        }
    }
    cout << std::boolalpha << result << endl;
    return 0;
}