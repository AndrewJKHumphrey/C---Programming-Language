/*
Exercise 3.25: Rewrite the grade clustering program from § 3.3.3 (p. 104) using iterators instead of subscripts.
*/


#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::string,  std::vector;

int main()
{   
    vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
    //unsigned grade;
    /*  while (cin >> grade) { // read the grades
        if (grade <= 100) // handle only valid grades
            ++scores[grade/10]; // increment the counter for the current cluster
    } */  
    vector<unsigned> grades{100, 90, 90 , 90, 88, 70, 50, 90, 20, 30, 10, 99, 100, 100, 12, 33, 66, 88, 999};

    auto b = grades.cbegin();
    auto e = grades.cend();

    for(auto i = b; i != e ; i++) {
        if (*i <= 100) {
            ++scores[*i/10];
        }
    }

    int j = 0;
    cout << "Grades:" << endl;
    for(auto i : scores) {
        cout << j * 10 << ": " << i << endl;
        j++;
    }

    return 0;
}